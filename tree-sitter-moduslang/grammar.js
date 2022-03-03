module.exports = grammar({
    name: 'Moduslang',

    rules: {
        source_file: $ => repeat($.clause_definition),

        clause_definition: $ => seq(
            alias($.literal_definition, $.head),
            optional(
                seq(
                    ':-',
                    alias($.expression_body, $.body),
                ),
            ),
            '.'
        ),

        expression_body: $ => choice(
            $.literal_expression,
            $.unification,
            prec.left(1, seq($.expression_body, ';', $.expression_body)),
            prec.right(2, seq($.expression_body, ',', $.expression_body)),
            seq(
                optional(
                    '!',
                ),
                '(',
                $.expression_body,
                ')',
                optional(repeat(seq(
                    '::',
                    $.operator_definition,
                )))
            ),
        ),

        binary_expression: $ => choice(
            prec.left(1, seq($.expression_body, ';', $.expression_body)),
            prec.right(2, seq($.expression_body, ',', $.expression_body)),
        ),

        // literal with 0 or more operator applications
        literal_expression: $ => seq(
            optional('!'),
            $.literal_definition,
            optional(repeat(seq(
                '::',
                $.operator_definition,
            )))
        ),

        unification: $ => seq(
            $.term_definition,
            choice('=', '!='),
            $.term_definition,
        ),

        literal_definition: $ => seq(
            $.literal_identifier,
            optional(
                $.term_list
            )
        ),

        operator_definition: $ => seq(
            $.literal_identifier,
            optional(
                $.term_list
            )
        ),

        term_list: $ => seq(
            '(',
            $.term_definition,
            repeat(
                seq(
                    ',',
                    $.term_definition
                )
            ),
            ')'
        ),

        term_definition: $ => choice(
            $.constant_term,
            alias($.literal_identifier, $.variable_identifier),
            $.f_string_term,
        ),

        literal_identifier: $ => /[_a-zA-Z]\w*/,

        constant_term: $ => seq(
            '"',
            repeat(choice(
                $.constant_escape_sequence,
                $.not_escape_sequence,
                $.string_content,
            )),
            '"'
        ),

        f_string_term: $ => seq(
            'f"',
            repeat(choice(
                $.interpolation,
                $.f_string_escape_sequence,
                $.not_escape_sequence,
                $.format_string_content,
            )),
            '"'
        ),

        string_content: $ => token.immediate(/[^\"\\]+/),
        format_string_content: $ => token.immediate(/[^$\"\\]+/),

        not_escape_sequence: $ => token.immediate('\\'),

        constant_escape_sequence: $ => token.immediate(prec(1, seq(
            '\\',
            choice(
                /\r?\n/,
                /[\"\\nrt0]/,
            ),
        ))),

        interpolation: $ => seq(
            token.immediate('${'),
            alias($.literal_identifier, $.variable_identifier),
            '}',
        ),

        f_string_escape_sequence: $ => token.immediate(prec(1, seq(
            '\\',
            choice(
                /\r?\n/,
                /[$\"\\nrt0]/, // difference is we allow \$
            ),
        ))),

        comment: $ => token(seq('#', /.*/)),
    },

    extras: $ => [
        $.comment,
        /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/
    ]
});

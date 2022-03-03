(comment) @comment

; Predicate names

(head (literal_identifier) @function)
(literal_definition (literal_identifier) @function.call)
(operator_definition (literal_identifier) @method.call)

; TODO: highlight , and ; and the others.

; Vars

(head
 (term_list
   (term_definition
    (variable_identifier) @variable.parameter)))

((variable_identifier) @variable
 (#is-not? local))

; Keywords
[
 ":-"
 "."
] @keyword

; Strings

(constant_term) @string
(constant_escape_sequence) @escape

(format_string_content) @string
(f_string_escape_sequence) @escape

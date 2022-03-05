#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 3
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_COLON_DASH = 1,
  anon_sym_DOT = 2,
  anon_sym_SEMI = 3,
  anon_sym_COMMA = 4,
  anon_sym_BANG = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_COLON_COLON = 8,
  anon_sym_EQ = 9,
  anon_sym_BANG_EQ = 10,
  sym_literal_identifier = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_f_DQUOTE = 13,
  anon_sym_DOLLAR = 14,
  sym_string_content = 15,
  sym_format_string_content = 16,
  sym_not_escape_sequence = 17,
  sym_constant_escape_sequence = 18,
  anon_sym_DOLLAR_LBRACE = 19,
  anon_sym_RBRACE = 20,
  sym_f_string_escape_sequence = 21,
  sym_comment = 22,
  sym_source_file = 23,
  sym_clause_definition = 24,
  sym_expression_body = 25,
  sym_literal_expression = 26,
  sym_unification = 27,
  sym_literal_definition = 28,
  sym_operator_definition = 29,
  sym_term_list = 30,
  sym_term_definition = 31,
  sym_constant_term = 32,
  sym_f_string_term = 33,
  sym_interpolation = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_expression_body_repeat1 = 36,
  aux_sym_term_list_repeat1 = 37,
  aux_sym_constant_term_repeat1 = 38,
  aux_sym_f_string_term_repeat1 = 39,
  alias_sym_body = 40,
  alias_sym_head = 41,
  alias_sym_variable_identifier = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [sym_literal_identifier] = "literal_identifier",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_f_DQUOTE] = "f\"",
  [anon_sym_DOLLAR] = "$",
  [sym_string_content] = "string_content",
  [sym_format_string_content] = "format_string_content",
  [sym_not_escape_sequence] = "not_escape_sequence",
  [sym_constant_escape_sequence] = "constant_escape_sequence",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [sym_f_string_escape_sequence] = "f_string_escape_sequence",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_clause_definition] = "clause_definition",
  [sym_expression_body] = "expression_body",
  [sym_literal_expression] = "literal_expression",
  [sym_unification] = "unification",
  [sym_literal_definition] = "literal_definition",
  [sym_operator_definition] = "operator_definition",
  [sym_term_list] = "term_list",
  [sym_term_definition] = "term_definition",
  [sym_constant_term] = "constant_term",
  [sym_f_string_term] = "f_string_term",
  [sym_interpolation] = "interpolation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_expression_body_repeat1] = "expression_body_repeat1",
  [aux_sym_term_list_repeat1] = "term_list_repeat1",
  [aux_sym_constant_term_repeat1] = "constant_term_repeat1",
  [aux_sym_f_string_term_repeat1] = "f_string_term_repeat1",
  [alias_sym_body] = "body",
  [alias_sym_head] = "head",
  [alias_sym_variable_identifier] = "variable_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [sym_literal_identifier] = sym_literal_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_f_DQUOTE] = anon_sym_f_DQUOTE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_string_content] = sym_string_content,
  [sym_format_string_content] = sym_format_string_content,
  [sym_not_escape_sequence] = sym_not_escape_sequence,
  [sym_constant_escape_sequence] = sym_constant_escape_sequence,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_f_string_escape_sequence] = sym_f_string_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_clause_definition] = sym_clause_definition,
  [sym_expression_body] = sym_expression_body,
  [sym_literal_expression] = sym_literal_expression,
  [sym_unification] = sym_unification,
  [sym_literal_definition] = sym_literal_definition,
  [sym_operator_definition] = sym_operator_definition,
  [sym_term_list] = sym_term_list,
  [sym_term_definition] = sym_term_definition,
  [sym_constant_term] = sym_constant_term,
  [sym_f_string_term] = sym_f_string_term,
  [sym_interpolation] = sym_interpolation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_expression_body_repeat1] = aux_sym_expression_body_repeat1,
  [aux_sym_term_list_repeat1] = aux_sym_term_list_repeat1,
  [aux_sym_constant_term_repeat1] = aux_sym_constant_term_repeat1,
  [aux_sym_f_string_term_repeat1] = aux_sym_f_string_term_repeat1,
  [alias_sym_body] = alias_sym_body,
  [alias_sym_head] = alias_sym_head,
  [alias_sym_variable_identifier] = alias_sym_variable_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_literal_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_format_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_not_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_f_string_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_clause_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_body] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unification] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_term_list] = {
    .visible = true,
    .named = true,
  },
  [sym_term_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_term] = {
    .visible = true,
    .named = true,
  },
  [sym_f_string_term] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_term_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_term_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_f_string_term_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_body] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_head] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_head,
  },
  [2] = {
    [0] = alias_sym_variable_identifier,
  },
  [3] = {
    [0] = alias_sym_head,
    [2] = alias_sym_body,
  },
  [4] = {
    [1] = alias_sym_variable_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_expression_body, 2,
    sym_expression_body,
    alias_sym_body,
  sym_literal_definition, 2,
    sym_literal_definition,
    alias_sym_head,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(45);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(28);
      END_STATE();
    case 14:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_literal_identifier);
      if (lookahead == '"') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_literal_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(43);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(46);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_format_string_content);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(46);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_format_string_content);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_format_string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_not_escape_sequence);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_not_escape_sequence);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_constant_escape_sequence);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_f_string_escape_sequence);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [sym_literal_identifier] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_f_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(61),
    [sym_clause_definition] = STATE(34),
    [sym_literal_definition] = STATE(57),
    [aux_sym_source_file_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_literal_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_literal_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_f_DQUOTE,
    STATE(22), 1,
      sym_literal_definition,
    STATE(43), 1,
      sym_expression_body,
    STATE(54), 1,
      sym_term_definition,
    STATE(18), 2,
      sym_constant_term,
      sym_f_string_term,
    STATE(45), 2,
      sym_literal_expression,
      sym_unification,
  [36] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_literal_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_f_DQUOTE,
    STATE(22), 1,
      sym_literal_definition,
    STATE(44), 1,
      sym_expression_body,
    STATE(54), 1,
      sym_term_definition,
    STATE(18), 2,
      sym_constant_term,
      sym_f_string_term,
    STATE(45), 2,
      sym_literal_expression,
      sym_unification,
  [72] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_literal_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_f_DQUOTE,
    STATE(22), 1,
      sym_literal_definition,
    STATE(48), 1,
      sym_expression_body,
    STATE(54), 1,
      sym_term_definition,
    STATE(18), 2,
      sym_constant_term,
      sym_f_string_term,
    STATE(45), 2,
      sym_literal_expression,
      sym_unification,
  [108] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_literal_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_f_DQUOTE,
    STATE(22), 1,
      sym_literal_definition,
    STATE(46), 1,
      sym_expression_body,
    STATE(54), 1,
      sym_term_definition,
    STATE(18), 2,
      sym_constant_term,
      sym_f_string_term,
    STATE(45), 2,
      sym_literal_expression,
      sym_unification,
  [144] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_literal_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_f_DQUOTE,
    STATE(22), 1,
      sym_literal_definition,
    STATE(52), 1,
      sym_expression_body,
    STATE(54), 1,
      sym_term_definition,
    STATE(18), 2,
      sym_constant_term,
      sym_f_string_term,
    STATE(45), 2,
      sym_literal_expression,
      sym_unification,
  [180] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term_list,
    ACTIONS(23), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(19), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
  [201] = 6,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(31), 1,
      sym_f_string_escape_sequence,
    ACTIONS(33), 1,
      sym_comment,
    STATE(11), 2,
      sym_interpolation,
      aux_sym_f_string_term_repeat1,
    ACTIONS(27), 3,
      anon_sym_DOLLAR,
      sym_format_string_content,
      sym_not_escape_sequence,
  [223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_term_list,
    ACTIONS(19), 6,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
  [241] = 6,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(43), 1,
      sym_f_string_escape_sequence,
    STATE(10), 2,
      sym_interpolation,
      aux_sym_f_string_term_repeat1,
    ACTIONS(37), 3,
      anon_sym_DOLLAR,
      sym_format_string_content,
      sym_not_escape_sequence,
  [263] = 6,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      sym_f_string_escape_sequence,
    STATE(10), 2,
      sym_interpolation,
      aux_sym_f_string_term_repeat1,
    ACTIONS(48), 3,
      anon_sym_DOLLAR,
      sym_format_string_content,
      sym_not_escape_sequence,
  [285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_term_list,
    ACTIONS(52), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
  [302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 6,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
  [314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_COLON_COLON,
    STATE(20), 1,
      aux_sym_expression_body_repeat1,
    ACTIONS(56), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_COLON_COLON,
    STATE(20), 1,
      aux_sym_expression_body_repeat1,
    ACTIONS(60), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_COLON_COLON,
    STATE(20), 1,
      aux_sym_expression_body_repeat1,
    ACTIONS(62), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_COLON_COLON,
    STATE(15), 1,
      aux_sym_expression_body_repeat1,
    ACTIONS(62), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 6,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [390] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_f_string_escape_sequence,
    ACTIONS(66), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym_format_string_content,
      sym_not_escape_sequence,
  [404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_COLON_COLON,
    STATE(20), 1,
      aux_sym_expression_body_repeat1,
    ACTIONS(70), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_COLON_COLON,
    STATE(16), 1,
      aux_sym_expression_body_repeat1,
    ACTIONS(75), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_COLON_COLON,
    STATE(14), 1,
      aux_sym_expression_body_repeat1,
    ACTIONS(77), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_COLON_COLON,
    STATE(20), 1,
      aux_sym_expression_body_repeat1,
    ACTIONS(79), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 6,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [480] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(83), 1,
      sym_literal_identifier,
    STATE(51), 1,
      sym_term_definition,
    STATE(18), 2,
      sym_constant_term,
      sym_f_string_term,
  [500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 6,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 6,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [524] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(83), 1,
      sym_literal_identifier,
    STATE(56), 1,
      sym_term_definition,
    STATE(18), 2,
      sym_constant_term,
      sym_f_string_term,
  [544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 6,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
  [556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 6,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [568] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(83), 1,
      sym_literal_identifier,
    STATE(42), 1,
      sym_term_definition,
    STATE(18), 2,
      sym_constant_term,
      sym_f_string_term,
  [588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_COLON_COLON,
    STATE(23), 1,
      aux_sym_expression_body_repeat1,
    ACTIONS(56), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 6,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
  [616] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_literal_identifier,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_literal_definition,
    STATE(37), 2,
      sym_clause_definition,
      aux_sym_source_file_repeat1,
  [633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
  [644] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_constant_escape_sequence,
    STATE(40), 1,
      aux_sym_constant_term_repeat1,
    ACTIONS(101), 2,
      sym_string_content,
      sym_not_escape_sequence,
  [661] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym_literal_identifier,
    STATE(57), 1,
      sym_literal_definition,
    STATE(37), 2,
      sym_clause_definition,
      aux_sym_source_file_repeat1,
  [678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
  [689] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_constant_escape_sequence,
    STATE(39), 1,
      aux_sym_constant_term_repeat1,
    ACTIONS(112), 2,
      sym_string_content,
      sym_not_escape_sequence,
  [706] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      sym_constant_escape_sequence,
    STATE(39), 1,
      aux_sym_constant_term_repeat1,
    ACTIONS(120), 2,
      sym_string_content,
      sym_not_escape_sequence,
  [723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(75), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(75), 3,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
  [790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_term_list_repeat1,
  [803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    ACTIONS(139), 1,
      anon_sym_DOT,
  [816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_term_list_repeat1,
  [829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_literal_identifier,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_literal_definition,
  [842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_term_list_repeat1,
  [855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
  [868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      sym_literal_identifier,
  [876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      sym_literal_identifier,
  [892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COLON_DASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
  [910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_literal_identifier,
    STATE(38), 1,
      sym_operator_definition,
  [920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_literal_identifier,
  [927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
  [934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 201,
  [SMALL_STATE(9)] = 223,
  [SMALL_STATE(10)] = 241,
  [SMALL_STATE(11)] = 263,
  [SMALL_STATE(12)] = 285,
  [SMALL_STATE(13)] = 302,
  [SMALL_STATE(14)] = 314,
  [SMALL_STATE(15)] = 330,
  [SMALL_STATE(16)] = 346,
  [SMALL_STATE(17)] = 362,
  [SMALL_STATE(18)] = 378,
  [SMALL_STATE(19)] = 390,
  [SMALL_STATE(20)] = 404,
  [SMALL_STATE(21)] = 420,
  [SMALL_STATE(22)] = 436,
  [SMALL_STATE(23)] = 452,
  [SMALL_STATE(24)] = 468,
  [SMALL_STATE(25)] = 480,
  [SMALL_STATE(26)] = 500,
  [SMALL_STATE(27)] = 512,
  [SMALL_STATE(28)] = 524,
  [SMALL_STATE(29)] = 544,
  [SMALL_STATE(30)] = 556,
  [SMALL_STATE(31)] = 568,
  [SMALL_STATE(32)] = 588,
  [SMALL_STATE(33)] = 604,
  [SMALL_STATE(34)] = 616,
  [SMALL_STATE(35)] = 633,
  [SMALL_STATE(36)] = 644,
  [SMALL_STATE(37)] = 661,
  [SMALL_STATE(38)] = 678,
  [SMALL_STATE(39)] = 689,
  [SMALL_STATE(40)] = 706,
  [SMALL_STATE(41)] = 723,
  [SMALL_STATE(42)] = 733,
  [SMALL_STATE(43)] = 743,
  [SMALL_STATE(44)] = 755,
  [SMALL_STATE(45)] = 767,
  [SMALL_STATE(46)] = 777,
  [SMALL_STATE(47)] = 790,
  [SMALL_STATE(48)] = 803,
  [SMALL_STATE(49)] = 816,
  [SMALL_STATE(50)] = 829,
  [SMALL_STATE(51)] = 842,
  [SMALL_STATE(52)] = 855,
  [SMALL_STATE(53)] = 868,
  [SMALL_STATE(54)] = 876,
  [SMALL_STATE(55)] = 884,
  [SMALL_STATE(56)] = 892,
  [SMALL_STATE(57)] = 900,
  [SMALL_STATE(58)] = 910,
  [SMALL_STATE(59)] = 920,
  [SMALL_STATE(60)] = 927,
  [SMALL_STATE(61)] = 934,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_definition, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 1, .production_id = 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_f_string_term_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_f_string_term_repeat1, 2), SHIFT_REPEAT(10),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_f_string_term_repeat1, 2), SHIFT_REPEAT(59),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_f_string_term_repeat1, 2), SHIFT_REPEAT(10),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_definition, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_list, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_expression, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body, 5),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, .production_id = 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, .production_id = 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_body_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_body_repeat1, 2), SHIFT_REPEAT(58),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_expression, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_expression, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_term, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string_term, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string_term, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_list, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_term, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_definition, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_definition, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constant_term_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constant_term_repeat1, 2), SHIFT_REPEAT(39),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_term_repeat1, 2), SHIFT_REPEAT(39),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unification, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_body, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_list_repeat1, 2), SHIFT_REPEAT(28),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_list_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_definition, 4, .production_id = 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_definition, 2, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Moduslang(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 39
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  aux_sym_array_type_token1 = 1,
  aux_sym_array_type_token2 = 2,
  aux_sym_array_type_token3 = 3,
  aux_sym_array_type_token4 = 4,
  aux_sym_array_type_token5 = 5,
  aux_sym_array_type_token6 = 6,
  aux_sym_array_type_token7 = 7,
  aux_sym_array_type_token8 = 8,
  aux_sym_array_type_token9 = 9,
  aux_sym_array_type_token10 = 10,
  aux_sym_array_type_token11 = 11,
  aux_sym_array_type_token12 = 12,
  aux_sym_array_type_token13 = 13,
  aux_sym_array_type_token14 = 14,
  aux_sym_array_type_token15 = 15,
  aux_sym_array_type_token16 = 16,
  aux_sym_array_type_token17 = 17,
  aux_sym_array_type_token18 = 18,
  aux_sym_array_type_token19 = 19,
  aux_sym_array_type_token20 = 20,
  aux_sym_array_type_token21 = 21,
  aux_sym_array_type_token22 = 22,
  aux_sym_array_type_token23 = 23,
  aux_sym_array_type_token24 = 24,
  aux_sym_c_type_token1 = 25,
  aux_sym_c_type_token2 = 26,
  aux_sym_c_type_token3 = 27,
  aux_sym_c_type_token4 = 28,
  aux_sym_c_type_token5 = 29,
  aux_sym_c_type_token6 = 30,
  aux_sym_c_type_token7 = 31,
  aux_sym_c_type_token8 = 32,
  aux_sym_c_type_token9 = 33,
  aux_sym_c_type_token10 = 34,
  aux_sym_c_type_token11 = 35,
  aux_sym_c_type_token12 = 36,
  aux_sym_c_type_token13 = 37,
  aux_sym_c_type_token14 = 38,
  aux_sym_c_type_token15 = 39,
  aux_sym_c_type_token16 = 40,
  aux_sym_c_type_token17 = 41,
  aux_sym_c_type_token18 = 42,
  aux_sym_c_type_token19 = 43,
  aux_sym_c_type_token20 = 44,
  aux_sym_c_type_token21 = 45,
  aux_sym_c_type_token22 = 46,
  aux_sym_c_type_token23 = 47,
  aux_sym_c_type_token24 = 48,
  aux_sym_c_type_token25 = 49,
  aux_sym_c_type_token26 = 50,
  anon_sym_LPAREN = 51,
  anon_sym_RPAREN = 52,
  sym_argument_separator = 53,
  aux_sym_identifier_token1 = 54,
  aux_sym_identifier_token2 = 55,
  anon_sym_LT_GT = 56,
  anon_sym_DOLLAR = 57,
  aux_sym_parameter_token1 = 58,
  sym_command_suffix = 59,
  sym_comment = 60,
  sym_source_code = 61,
  sym__token = 62,
  sym_array_declaration = 63,
  sym_c_declaration = 64,
  sym_array_type = 65,
  sym_c_type = 66,
  sym_array_declaration_arguments = 67,
  sym_c_declaration_arguments = 68,
  sym_declaration_argument_list = 69,
  sym_declaration_argument = 70,
  sym_identifier = 71,
  sym_interprocess_variable = 72,
  sym_local_variable = 73,
  sym_parameter = 74,
  sym_integer_constant = 75,
  aux_sym_source_code_repeat1 = 76,
  aux_sym_declaration_argument_list_repeat1 = 77,
  aux_sym_identifier_repeat1 = 78,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_array_type_token1] = "array_type_token1",
  [aux_sym_array_type_token2] = "array_type_token2",
  [aux_sym_array_type_token3] = "array_type_token3",
  [aux_sym_array_type_token4] = "array_type_token4",
  [aux_sym_array_type_token5] = "array_type_token5",
  [aux_sym_array_type_token6] = "array_type_token6",
  [aux_sym_array_type_token7] = "array_type_token7",
  [aux_sym_array_type_token8] = "array_type_token8",
  [aux_sym_array_type_token9] = "array_type_token9",
  [aux_sym_array_type_token10] = "array_type_token10",
  [aux_sym_array_type_token11] = "array_type_token11",
  [aux_sym_array_type_token12] = "array_type_token12",
  [aux_sym_array_type_token13] = "array_type_token13",
  [aux_sym_array_type_token14] = "array_type_token14",
  [aux_sym_array_type_token15] = "array_type_token15",
  [aux_sym_array_type_token16] = "array_type_token16",
  [aux_sym_array_type_token17] = "array_type_token17",
  [aux_sym_array_type_token18] = "array_type_token18",
  [aux_sym_array_type_token19] = "array_type_token19",
  [aux_sym_array_type_token20] = "array_type_token20",
  [aux_sym_array_type_token21] = "array_type_token21",
  [aux_sym_array_type_token22] = "array_type_token22",
  [aux_sym_array_type_token23] = "array_type_token23",
  [aux_sym_array_type_token24] = "array_type_token24",
  [aux_sym_c_type_token1] = "c_type_token1",
  [aux_sym_c_type_token2] = "c_type_token2",
  [aux_sym_c_type_token3] = "c_type_token3",
  [aux_sym_c_type_token4] = "c_type_token4",
  [aux_sym_c_type_token5] = "c_type_token5",
  [aux_sym_c_type_token6] = "c_type_token6",
  [aux_sym_c_type_token7] = "c_type_token7",
  [aux_sym_c_type_token8] = "c_type_token8",
  [aux_sym_c_type_token9] = "c_type_token9",
  [aux_sym_c_type_token10] = "c_type_token10",
  [aux_sym_c_type_token11] = "c_type_token11",
  [aux_sym_c_type_token12] = "c_type_token12",
  [aux_sym_c_type_token13] = "c_type_token13",
  [aux_sym_c_type_token14] = "c_type_token14",
  [aux_sym_c_type_token15] = "c_type_token15",
  [aux_sym_c_type_token16] = "c_type_token16",
  [aux_sym_c_type_token17] = "c_type_token17",
  [aux_sym_c_type_token18] = "c_type_token18",
  [aux_sym_c_type_token19] = "c_type_token19",
  [aux_sym_c_type_token20] = "c_type_token20",
  [aux_sym_c_type_token21] = "c_type_token21",
  [aux_sym_c_type_token22] = "c_type_token22",
  [aux_sym_c_type_token23] = "c_type_token23",
  [aux_sym_c_type_token24] = "c_type_token24",
  [aux_sym_c_type_token25] = "c_type_token25",
  [aux_sym_c_type_token26] = "c_type_token26",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_argument_separator] = "argument_separator",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_token2] = "identifier_token2",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_parameter_token1] = "parameter_token1",
  [sym_command_suffix] = "command_suffix",
  [sym_comment] = "comment",
  [sym_source_code] = "source_code",
  [sym__token] = "_token",
  [sym_array_declaration] = "array_declaration",
  [sym_c_declaration] = "c_declaration",
  [sym_array_type] = "array_type",
  [sym_c_type] = "c_type",
  [sym_array_declaration_arguments] = "array_declaration_arguments",
  [sym_c_declaration_arguments] = "c_declaration_arguments",
  [sym_declaration_argument_list] = "declaration_argument_list",
  [sym_declaration_argument] = "declaration_argument",
  [sym_identifier] = "identifier",
  [sym_interprocess_variable] = "interprocess_variable",
  [sym_local_variable] = "local_variable",
  [sym_parameter] = "parameter",
  [sym_integer_constant] = "integer_constant",
  [aux_sym_source_code_repeat1] = "source_code_repeat1",
  [aux_sym_declaration_argument_list_repeat1] = "declaration_argument_list_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_array_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token25] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_type_token26] = {
    .visible = false,
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
  [sym_argument_separator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_command_suffix] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_code] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_array_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_c_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_c_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_declaration_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_c_declaration_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_interprocess_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_local_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_constant] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(247);
      if (lookahead == '$') ADVANCE(305);
      if (lookahead == '(') ADVANCE(298);
      if (lookahead == ')') ADVANCE(299);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(300);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(247);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '_') ADVANCE(170);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(12);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == ')') ADVANCE(299);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(309);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(308);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(304);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(246);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(137);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(200);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(227);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(14);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(132);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(172);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(55);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(171);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(109);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 41:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(123);
      END_STATE();
    case 42:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(279);
      END_STATE();
    case 43:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(254);
      END_STATE();
    case 44:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(265);
      END_STATE();
    case 45:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(133);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(46);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(122);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 46:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 47:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(136);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(35);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(95);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      END_STATE();
    case 48:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(124);
      END_STATE();
    case 49:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(142);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(210);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(233);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 96:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(293);
      END_STATE();
    case 97:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(288);
      END_STATE();
    case 98:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(271);
      END_STATE();
    case 99:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(263);
      END_STATE();
    case 100:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 101:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 102:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 103:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 104:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 105:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 106:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(292);
      END_STATE();
    case 107:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 108:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 116:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 117:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 123:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(59);
      END_STATE();
    case 124:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(85);
      END_STATE();
    case 125:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(93);
      END_STATE();
    case 126:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 127:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 128:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 129:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 130:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 131:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 132:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 133:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 134:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 135:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 136:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 137:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 144:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 145:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 146:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 147:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 150:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 152:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 154:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 155:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 156:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 171:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 172:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 173:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 174:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 175:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 176:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 177:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 178:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 179:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 180:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 182:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 183:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 184:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 185:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 186:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 187:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(275);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 189:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 190:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 191:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 192:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 193:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 194:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 195:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 208:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(232);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(273);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(272);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      END_STATE();
    case 214:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(248);
      END_STATE();
    case 215:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      END_STATE();
    case 216:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(259);
      END_STATE();
    case 217:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 218:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 219:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 220:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 221:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 222:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 223:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 224:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 225:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 226:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 227:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 228:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 229:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 230:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(238);
      END_STATE();
    case 231:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 232:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      END_STATE();
    case 233:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(239);
      END_STATE();
    case 234:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 235:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 236:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 237:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 238:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 239:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 240:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 241:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(209);
      END_STATE();
    case 242:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(213);
      END_STATE();
    case 243:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(225);
      END_STATE();
    case 244:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 245:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(4);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_array_type_token2);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_array_type_token3);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_array_type_token4);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_array_type_token5);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_array_type_token6);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_array_type_token7);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_array_type_token8);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_array_type_token9);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_array_type_token10);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_array_type_token11);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_array_type_token12);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_array_type_token13);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_array_type_token14);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_array_type_token15);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_array_type_token16);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_array_type_token17);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_array_type_token18);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_array_type_token19);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_array_type_token20);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_array_type_token21);
      if (lookahead == ' ') ADVANCE(143);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_array_type_token22);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_array_type_token23);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_array_type_token24);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_c_type_token1);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_c_type_token2);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_c_type_token3);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_c_type_token4);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_c_type_token5);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_c_type_token6);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_c_type_token7);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_c_type_token8);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_c_type_token9);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_c_type_token10);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_c_type_token11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_c_type_token12);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_c_type_token13);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_c_type_token14);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_c_type_token15);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_c_type_token16);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_c_type_token17);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_c_type_token18);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_c_type_token19);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_c_type_token20);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_c_type_token21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_c_type_token22);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_c_type_token23);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_c_type_token24);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_c_type_token25);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_c_type_token26);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_argument_separator);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '/') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_command_suffix);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(309);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_argument_separator] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_parameter_token1] = ACTIONS(1),
    [sym_command_suffix] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_code] = STATE(38),
    [sym__token] = STATE(2),
    [sym_array_declaration] = STATE(2),
    [sym_c_declaration] = STATE(2),
    [sym_array_type] = STATE(22),
    [sym_c_type] = STATE(21),
    [aux_sym_source_code_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_array_type_token1] = ACTIONS(7),
    [aux_sym_array_type_token2] = ACTIONS(7),
    [aux_sym_array_type_token3] = ACTIONS(7),
    [aux_sym_array_type_token4] = ACTIONS(7),
    [aux_sym_array_type_token5] = ACTIONS(7),
    [aux_sym_array_type_token6] = ACTIONS(7),
    [aux_sym_array_type_token7] = ACTIONS(7),
    [aux_sym_array_type_token8] = ACTIONS(7),
    [aux_sym_array_type_token9] = ACTIONS(7),
    [aux_sym_array_type_token10] = ACTIONS(7),
    [aux_sym_array_type_token11] = ACTIONS(7),
    [aux_sym_array_type_token12] = ACTIONS(7),
    [aux_sym_array_type_token13] = ACTIONS(7),
    [aux_sym_array_type_token14] = ACTIONS(7),
    [aux_sym_array_type_token15] = ACTIONS(7),
    [aux_sym_array_type_token16] = ACTIONS(7),
    [aux_sym_array_type_token17] = ACTIONS(7),
    [aux_sym_array_type_token18] = ACTIONS(7),
    [aux_sym_array_type_token19] = ACTIONS(7),
    [aux_sym_array_type_token20] = ACTIONS(7),
    [aux_sym_array_type_token21] = ACTIONS(9),
    [aux_sym_array_type_token22] = ACTIONS(7),
    [aux_sym_array_type_token23] = ACTIONS(7),
    [aux_sym_array_type_token24] = ACTIONS(7),
    [aux_sym_c_type_token1] = ACTIONS(11),
    [aux_sym_c_type_token2] = ACTIONS(11),
    [aux_sym_c_type_token3] = ACTIONS(11),
    [aux_sym_c_type_token4] = ACTIONS(11),
    [aux_sym_c_type_token5] = ACTIONS(11),
    [aux_sym_c_type_token6] = ACTIONS(11),
    [aux_sym_c_type_token7] = ACTIONS(11),
    [aux_sym_c_type_token8] = ACTIONS(11),
    [aux_sym_c_type_token9] = ACTIONS(11),
    [aux_sym_c_type_token10] = ACTIONS(11),
    [aux_sym_c_type_token11] = ACTIONS(13),
    [aux_sym_c_type_token12] = ACTIONS(11),
    [aux_sym_c_type_token13] = ACTIONS(11),
    [aux_sym_c_type_token14] = ACTIONS(11),
    [aux_sym_c_type_token15] = ACTIONS(11),
    [aux_sym_c_type_token16] = ACTIONS(11),
    [aux_sym_c_type_token17] = ACTIONS(11),
    [aux_sym_c_type_token18] = ACTIONS(11),
    [aux_sym_c_type_token19] = ACTIONS(11),
    [aux_sym_c_type_token20] = ACTIONS(11),
    [aux_sym_c_type_token21] = ACTIONS(13),
    [aux_sym_c_type_token22] = ACTIONS(11),
    [aux_sym_c_type_token23] = ACTIONS(11),
    [aux_sym_c_type_token24] = ACTIONS(11),
    [aux_sym_c_type_token25] = ACTIONS(11),
    [aux_sym_c_type_token26] = ACTIONS(11),
    [sym_comment] = ACTIONS(15),
  },
  [2] = {
    [sym__token] = STATE(3),
    [sym_array_declaration] = STATE(3),
    [sym_c_declaration] = STATE(3),
    [sym_array_type] = STATE(22),
    [sym_c_type] = STATE(21),
    [aux_sym_source_code_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [aux_sym_array_type_token1] = ACTIONS(7),
    [aux_sym_array_type_token2] = ACTIONS(7),
    [aux_sym_array_type_token3] = ACTIONS(7),
    [aux_sym_array_type_token4] = ACTIONS(7),
    [aux_sym_array_type_token5] = ACTIONS(7),
    [aux_sym_array_type_token6] = ACTIONS(7),
    [aux_sym_array_type_token7] = ACTIONS(7),
    [aux_sym_array_type_token8] = ACTIONS(7),
    [aux_sym_array_type_token9] = ACTIONS(7),
    [aux_sym_array_type_token10] = ACTIONS(7),
    [aux_sym_array_type_token11] = ACTIONS(7),
    [aux_sym_array_type_token12] = ACTIONS(7),
    [aux_sym_array_type_token13] = ACTIONS(7),
    [aux_sym_array_type_token14] = ACTIONS(7),
    [aux_sym_array_type_token15] = ACTIONS(7),
    [aux_sym_array_type_token16] = ACTIONS(7),
    [aux_sym_array_type_token17] = ACTIONS(7),
    [aux_sym_array_type_token18] = ACTIONS(7),
    [aux_sym_array_type_token19] = ACTIONS(7),
    [aux_sym_array_type_token20] = ACTIONS(7),
    [aux_sym_array_type_token21] = ACTIONS(9),
    [aux_sym_array_type_token22] = ACTIONS(7),
    [aux_sym_array_type_token23] = ACTIONS(7),
    [aux_sym_array_type_token24] = ACTIONS(7),
    [aux_sym_c_type_token1] = ACTIONS(11),
    [aux_sym_c_type_token2] = ACTIONS(11),
    [aux_sym_c_type_token3] = ACTIONS(11),
    [aux_sym_c_type_token4] = ACTIONS(11),
    [aux_sym_c_type_token5] = ACTIONS(11),
    [aux_sym_c_type_token6] = ACTIONS(11),
    [aux_sym_c_type_token7] = ACTIONS(11),
    [aux_sym_c_type_token8] = ACTIONS(11),
    [aux_sym_c_type_token9] = ACTIONS(11),
    [aux_sym_c_type_token10] = ACTIONS(11),
    [aux_sym_c_type_token11] = ACTIONS(13),
    [aux_sym_c_type_token12] = ACTIONS(11),
    [aux_sym_c_type_token13] = ACTIONS(11),
    [aux_sym_c_type_token14] = ACTIONS(11),
    [aux_sym_c_type_token15] = ACTIONS(11),
    [aux_sym_c_type_token16] = ACTIONS(11),
    [aux_sym_c_type_token17] = ACTIONS(11),
    [aux_sym_c_type_token18] = ACTIONS(11),
    [aux_sym_c_type_token19] = ACTIONS(11),
    [aux_sym_c_type_token20] = ACTIONS(11),
    [aux_sym_c_type_token21] = ACTIONS(13),
    [aux_sym_c_type_token22] = ACTIONS(11),
    [aux_sym_c_type_token23] = ACTIONS(11),
    [aux_sym_c_type_token24] = ACTIONS(11),
    [aux_sym_c_type_token25] = ACTIONS(11),
    [aux_sym_c_type_token26] = ACTIONS(11),
    [sym_comment] = ACTIONS(19),
  },
  [3] = {
    [sym__token] = STATE(3),
    [sym_array_declaration] = STATE(3),
    [sym_c_declaration] = STATE(3),
    [sym_array_type] = STATE(22),
    [sym_c_type] = STATE(21),
    [aux_sym_source_code_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym_array_type_token1] = ACTIONS(23),
    [aux_sym_array_type_token2] = ACTIONS(23),
    [aux_sym_array_type_token3] = ACTIONS(23),
    [aux_sym_array_type_token4] = ACTIONS(23),
    [aux_sym_array_type_token5] = ACTIONS(23),
    [aux_sym_array_type_token6] = ACTIONS(23),
    [aux_sym_array_type_token7] = ACTIONS(23),
    [aux_sym_array_type_token8] = ACTIONS(23),
    [aux_sym_array_type_token9] = ACTIONS(23),
    [aux_sym_array_type_token10] = ACTIONS(23),
    [aux_sym_array_type_token11] = ACTIONS(23),
    [aux_sym_array_type_token12] = ACTIONS(23),
    [aux_sym_array_type_token13] = ACTIONS(23),
    [aux_sym_array_type_token14] = ACTIONS(23),
    [aux_sym_array_type_token15] = ACTIONS(23),
    [aux_sym_array_type_token16] = ACTIONS(23),
    [aux_sym_array_type_token17] = ACTIONS(23),
    [aux_sym_array_type_token18] = ACTIONS(23),
    [aux_sym_array_type_token19] = ACTIONS(23),
    [aux_sym_array_type_token20] = ACTIONS(23),
    [aux_sym_array_type_token21] = ACTIONS(26),
    [aux_sym_array_type_token22] = ACTIONS(23),
    [aux_sym_array_type_token23] = ACTIONS(23),
    [aux_sym_array_type_token24] = ACTIONS(23),
    [aux_sym_c_type_token1] = ACTIONS(29),
    [aux_sym_c_type_token2] = ACTIONS(29),
    [aux_sym_c_type_token3] = ACTIONS(29),
    [aux_sym_c_type_token4] = ACTIONS(29),
    [aux_sym_c_type_token5] = ACTIONS(29),
    [aux_sym_c_type_token6] = ACTIONS(29),
    [aux_sym_c_type_token7] = ACTIONS(29),
    [aux_sym_c_type_token8] = ACTIONS(29),
    [aux_sym_c_type_token9] = ACTIONS(29),
    [aux_sym_c_type_token10] = ACTIONS(29),
    [aux_sym_c_type_token11] = ACTIONS(32),
    [aux_sym_c_type_token12] = ACTIONS(29),
    [aux_sym_c_type_token13] = ACTIONS(29),
    [aux_sym_c_type_token14] = ACTIONS(29),
    [aux_sym_c_type_token15] = ACTIONS(29),
    [aux_sym_c_type_token16] = ACTIONS(29),
    [aux_sym_c_type_token17] = ACTIONS(29),
    [aux_sym_c_type_token18] = ACTIONS(29),
    [aux_sym_c_type_token19] = ACTIONS(29),
    [aux_sym_c_type_token20] = ACTIONS(29),
    [aux_sym_c_type_token21] = ACTIONS(32),
    [aux_sym_c_type_token22] = ACTIONS(29),
    [aux_sym_c_type_token23] = ACTIONS(29),
    [aux_sym_c_type_token24] = ACTIONS(29),
    [aux_sym_c_type_token25] = ACTIONS(29),
    [aux_sym_c_type_token26] = ACTIONS(29),
    [sym_comment] = ACTIONS(35),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [aux_sym_array_type_token1] = ACTIONS(38),
    [aux_sym_array_type_token2] = ACTIONS(38),
    [aux_sym_array_type_token3] = ACTIONS(38),
    [aux_sym_array_type_token4] = ACTIONS(38),
    [aux_sym_array_type_token5] = ACTIONS(38),
    [aux_sym_array_type_token6] = ACTIONS(38),
    [aux_sym_array_type_token7] = ACTIONS(38),
    [aux_sym_array_type_token8] = ACTIONS(38),
    [aux_sym_array_type_token9] = ACTIONS(38),
    [aux_sym_array_type_token10] = ACTIONS(38),
    [aux_sym_array_type_token11] = ACTIONS(38),
    [aux_sym_array_type_token12] = ACTIONS(38),
    [aux_sym_array_type_token13] = ACTIONS(38),
    [aux_sym_array_type_token14] = ACTIONS(38),
    [aux_sym_array_type_token15] = ACTIONS(38),
    [aux_sym_array_type_token16] = ACTIONS(38),
    [aux_sym_array_type_token17] = ACTIONS(38),
    [aux_sym_array_type_token18] = ACTIONS(38),
    [aux_sym_array_type_token19] = ACTIONS(38),
    [aux_sym_array_type_token20] = ACTIONS(38),
    [aux_sym_array_type_token21] = ACTIONS(40),
    [aux_sym_array_type_token22] = ACTIONS(38),
    [aux_sym_array_type_token23] = ACTIONS(38),
    [aux_sym_array_type_token24] = ACTIONS(38),
    [aux_sym_c_type_token1] = ACTIONS(38),
    [aux_sym_c_type_token2] = ACTIONS(38),
    [aux_sym_c_type_token3] = ACTIONS(38),
    [aux_sym_c_type_token4] = ACTIONS(38),
    [aux_sym_c_type_token5] = ACTIONS(38),
    [aux_sym_c_type_token6] = ACTIONS(38),
    [aux_sym_c_type_token7] = ACTIONS(38),
    [aux_sym_c_type_token8] = ACTIONS(38),
    [aux_sym_c_type_token9] = ACTIONS(38),
    [aux_sym_c_type_token10] = ACTIONS(38),
    [aux_sym_c_type_token11] = ACTIONS(40),
    [aux_sym_c_type_token12] = ACTIONS(38),
    [aux_sym_c_type_token13] = ACTIONS(38),
    [aux_sym_c_type_token14] = ACTIONS(38),
    [aux_sym_c_type_token15] = ACTIONS(38),
    [aux_sym_c_type_token16] = ACTIONS(38),
    [aux_sym_c_type_token17] = ACTIONS(38),
    [aux_sym_c_type_token18] = ACTIONS(38),
    [aux_sym_c_type_token19] = ACTIONS(38),
    [aux_sym_c_type_token20] = ACTIONS(38),
    [aux_sym_c_type_token21] = ACTIONS(40),
    [aux_sym_c_type_token22] = ACTIONS(38),
    [aux_sym_c_type_token23] = ACTIONS(38),
    [aux_sym_c_type_token24] = ACTIONS(38),
    [aux_sym_c_type_token25] = ACTIONS(38),
    [aux_sym_c_type_token26] = ACTIONS(38),
    [sym_comment] = ACTIONS(38),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [aux_sym_array_type_token1] = ACTIONS(42),
    [aux_sym_array_type_token2] = ACTIONS(42),
    [aux_sym_array_type_token3] = ACTIONS(42),
    [aux_sym_array_type_token4] = ACTIONS(42),
    [aux_sym_array_type_token5] = ACTIONS(42),
    [aux_sym_array_type_token6] = ACTIONS(42),
    [aux_sym_array_type_token7] = ACTIONS(42),
    [aux_sym_array_type_token8] = ACTIONS(42),
    [aux_sym_array_type_token9] = ACTIONS(42),
    [aux_sym_array_type_token10] = ACTIONS(42),
    [aux_sym_array_type_token11] = ACTIONS(42),
    [aux_sym_array_type_token12] = ACTIONS(42),
    [aux_sym_array_type_token13] = ACTIONS(42),
    [aux_sym_array_type_token14] = ACTIONS(42),
    [aux_sym_array_type_token15] = ACTIONS(42),
    [aux_sym_array_type_token16] = ACTIONS(42),
    [aux_sym_array_type_token17] = ACTIONS(42),
    [aux_sym_array_type_token18] = ACTIONS(42),
    [aux_sym_array_type_token19] = ACTIONS(42),
    [aux_sym_array_type_token20] = ACTIONS(42),
    [aux_sym_array_type_token21] = ACTIONS(44),
    [aux_sym_array_type_token22] = ACTIONS(42),
    [aux_sym_array_type_token23] = ACTIONS(42),
    [aux_sym_array_type_token24] = ACTIONS(42),
    [aux_sym_c_type_token1] = ACTIONS(42),
    [aux_sym_c_type_token2] = ACTIONS(42),
    [aux_sym_c_type_token3] = ACTIONS(42),
    [aux_sym_c_type_token4] = ACTIONS(42),
    [aux_sym_c_type_token5] = ACTIONS(42),
    [aux_sym_c_type_token6] = ACTIONS(42),
    [aux_sym_c_type_token7] = ACTIONS(42),
    [aux_sym_c_type_token8] = ACTIONS(42),
    [aux_sym_c_type_token9] = ACTIONS(42),
    [aux_sym_c_type_token10] = ACTIONS(42),
    [aux_sym_c_type_token11] = ACTIONS(44),
    [aux_sym_c_type_token12] = ACTIONS(42),
    [aux_sym_c_type_token13] = ACTIONS(42),
    [aux_sym_c_type_token14] = ACTIONS(42),
    [aux_sym_c_type_token15] = ACTIONS(42),
    [aux_sym_c_type_token16] = ACTIONS(42),
    [aux_sym_c_type_token17] = ACTIONS(42),
    [aux_sym_c_type_token18] = ACTIONS(42),
    [aux_sym_c_type_token19] = ACTIONS(42),
    [aux_sym_c_type_token20] = ACTIONS(42),
    [aux_sym_c_type_token21] = ACTIONS(44),
    [aux_sym_c_type_token22] = ACTIONS(42),
    [aux_sym_c_type_token23] = ACTIONS(42),
    [aux_sym_c_type_token24] = ACTIONS(42),
    [aux_sym_c_type_token25] = ACTIONS(42),
    [aux_sym_c_type_token26] = ACTIONS(42),
    [sym_comment] = ACTIONS(42),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [aux_sym_array_type_token1] = ACTIONS(46),
    [aux_sym_array_type_token2] = ACTIONS(46),
    [aux_sym_array_type_token3] = ACTIONS(46),
    [aux_sym_array_type_token4] = ACTIONS(46),
    [aux_sym_array_type_token5] = ACTIONS(46),
    [aux_sym_array_type_token6] = ACTIONS(46),
    [aux_sym_array_type_token7] = ACTIONS(46),
    [aux_sym_array_type_token8] = ACTIONS(46),
    [aux_sym_array_type_token9] = ACTIONS(46),
    [aux_sym_array_type_token10] = ACTIONS(46),
    [aux_sym_array_type_token11] = ACTIONS(46),
    [aux_sym_array_type_token12] = ACTIONS(46),
    [aux_sym_array_type_token13] = ACTIONS(46),
    [aux_sym_array_type_token14] = ACTIONS(46),
    [aux_sym_array_type_token15] = ACTIONS(46),
    [aux_sym_array_type_token16] = ACTIONS(46),
    [aux_sym_array_type_token17] = ACTIONS(46),
    [aux_sym_array_type_token18] = ACTIONS(46),
    [aux_sym_array_type_token19] = ACTIONS(46),
    [aux_sym_array_type_token20] = ACTIONS(46),
    [aux_sym_array_type_token21] = ACTIONS(48),
    [aux_sym_array_type_token22] = ACTIONS(46),
    [aux_sym_array_type_token23] = ACTIONS(46),
    [aux_sym_array_type_token24] = ACTIONS(46),
    [aux_sym_c_type_token1] = ACTIONS(46),
    [aux_sym_c_type_token2] = ACTIONS(46),
    [aux_sym_c_type_token3] = ACTIONS(46),
    [aux_sym_c_type_token4] = ACTIONS(46),
    [aux_sym_c_type_token5] = ACTIONS(46),
    [aux_sym_c_type_token6] = ACTIONS(46),
    [aux_sym_c_type_token7] = ACTIONS(46),
    [aux_sym_c_type_token8] = ACTIONS(46),
    [aux_sym_c_type_token9] = ACTIONS(46),
    [aux_sym_c_type_token10] = ACTIONS(46),
    [aux_sym_c_type_token11] = ACTIONS(48),
    [aux_sym_c_type_token12] = ACTIONS(46),
    [aux_sym_c_type_token13] = ACTIONS(46),
    [aux_sym_c_type_token14] = ACTIONS(46),
    [aux_sym_c_type_token15] = ACTIONS(46),
    [aux_sym_c_type_token16] = ACTIONS(46),
    [aux_sym_c_type_token17] = ACTIONS(46),
    [aux_sym_c_type_token18] = ACTIONS(46),
    [aux_sym_c_type_token19] = ACTIONS(46),
    [aux_sym_c_type_token20] = ACTIONS(46),
    [aux_sym_c_type_token21] = ACTIONS(48),
    [aux_sym_c_type_token22] = ACTIONS(46),
    [aux_sym_c_type_token23] = ACTIONS(46),
    [aux_sym_c_type_token24] = ACTIONS(46),
    [aux_sym_c_type_token25] = ACTIONS(46),
    [aux_sym_c_type_token26] = ACTIONS(46),
    [sym_comment] = ACTIONS(46),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [aux_sym_array_type_token1] = ACTIONS(50),
    [aux_sym_array_type_token2] = ACTIONS(50),
    [aux_sym_array_type_token3] = ACTIONS(50),
    [aux_sym_array_type_token4] = ACTIONS(50),
    [aux_sym_array_type_token5] = ACTIONS(50),
    [aux_sym_array_type_token6] = ACTIONS(50),
    [aux_sym_array_type_token7] = ACTIONS(50),
    [aux_sym_array_type_token8] = ACTIONS(50),
    [aux_sym_array_type_token9] = ACTIONS(50),
    [aux_sym_array_type_token10] = ACTIONS(50),
    [aux_sym_array_type_token11] = ACTIONS(50),
    [aux_sym_array_type_token12] = ACTIONS(50),
    [aux_sym_array_type_token13] = ACTIONS(50),
    [aux_sym_array_type_token14] = ACTIONS(50),
    [aux_sym_array_type_token15] = ACTIONS(50),
    [aux_sym_array_type_token16] = ACTIONS(50),
    [aux_sym_array_type_token17] = ACTIONS(50),
    [aux_sym_array_type_token18] = ACTIONS(50),
    [aux_sym_array_type_token19] = ACTIONS(50),
    [aux_sym_array_type_token20] = ACTIONS(50),
    [aux_sym_array_type_token21] = ACTIONS(52),
    [aux_sym_array_type_token22] = ACTIONS(50),
    [aux_sym_array_type_token23] = ACTIONS(50),
    [aux_sym_array_type_token24] = ACTIONS(50),
    [aux_sym_c_type_token1] = ACTIONS(50),
    [aux_sym_c_type_token2] = ACTIONS(50),
    [aux_sym_c_type_token3] = ACTIONS(50),
    [aux_sym_c_type_token4] = ACTIONS(50),
    [aux_sym_c_type_token5] = ACTIONS(50),
    [aux_sym_c_type_token6] = ACTIONS(50),
    [aux_sym_c_type_token7] = ACTIONS(50),
    [aux_sym_c_type_token8] = ACTIONS(50),
    [aux_sym_c_type_token9] = ACTIONS(50),
    [aux_sym_c_type_token10] = ACTIONS(50),
    [aux_sym_c_type_token11] = ACTIONS(52),
    [aux_sym_c_type_token12] = ACTIONS(50),
    [aux_sym_c_type_token13] = ACTIONS(50),
    [aux_sym_c_type_token14] = ACTIONS(50),
    [aux_sym_c_type_token15] = ACTIONS(50),
    [aux_sym_c_type_token16] = ACTIONS(50),
    [aux_sym_c_type_token17] = ACTIONS(50),
    [aux_sym_c_type_token18] = ACTIONS(50),
    [aux_sym_c_type_token19] = ACTIONS(50),
    [aux_sym_c_type_token20] = ACTIONS(50),
    [aux_sym_c_type_token21] = ACTIONS(52),
    [aux_sym_c_type_token22] = ACTIONS(50),
    [aux_sym_c_type_token23] = ACTIONS(50),
    [aux_sym_c_type_token24] = ACTIONS(50),
    [aux_sym_c_type_token25] = ACTIONS(50),
    [aux_sym_c_type_token26] = ACTIONS(50),
    [sym_comment] = ACTIONS(50),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_array_type_token1] = ACTIONS(54),
    [aux_sym_array_type_token2] = ACTIONS(54),
    [aux_sym_array_type_token3] = ACTIONS(54),
    [aux_sym_array_type_token4] = ACTIONS(54),
    [aux_sym_array_type_token5] = ACTIONS(54),
    [aux_sym_array_type_token6] = ACTIONS(54),
    [aux_sym_array_type_token7] = ACTIONS(54),
    [aux_sym_array_type_token8] = ACTIONS(54),
    [aux_sym_array_type_token9] = ACTIONS(54),
    [aux_sym_array_type_token10] = ACTIONS(54),
    [aux_sym_array_type_token11] = ACTIONS(54),
    [aux_sym_array_type_token12] = ACTIONS(54),
    [aux_sym_array_type_token13] = ACTIONS(54),
    [aux_sym_array_type_token14] = ACTIONS(54),
    [aux_sym_array_type_token15] = ACTIONS(54),
    [aux_sym_array_type_token16] = ACTIONS(54),
    [aux_sym_array_type_token17] = ACTIONS(54),
    [aux_sym_array_type_token18] = ACTIONS(54),
    [aux_sym_array_type_token19] = ACTIONS(54),
    [aux_sym_array_type_token20] = ACTIONS(54),
    [aux_sym_array_type_token21] = ACTIONS(56),
    [aux_sym_array_type_token22] = ACTIONS(54),
    [aux_sym_array_type_token23] = ACTIONS(54),
    [aux_sym_array_type_token24] = ACTIONS(54),
    [aux_sym_c_type_token1] = ACTIONS(54),
    [aux_sym_c_type_token2] = ACTIONS(54),
    [aux_sym_c_type_token3] = ACTIONS(54),
    [aux_sym_c_type_token4] = ACTIONS(54),
    [aux_sym_c_type_token5] = ACTIONS(54),
    [aux_sym_c_type_token6] = ACTIONS(54),
    [aux_sym_c_type_token7] = ACTIONS(54),
    [aux_sym_c_type_token8] = ACTIONS(54),
    [aux_sym_c_type_token9] = ACTIONS(54),
    [aux_sym_c_type_token10] = ACTIONS(54),
    [aux_sym_c_type_token11] = ACTIONS(56),
    [aux_sym_c_type_token12] = ACTIONS(54),
    [aux_sym_c_type_token13] = ACTIONS(54),
    [aux_sym_c_type_token14] = ACTIONS(54),
    [aux_sym_c_type_token15] = ACTIONS(54),
    [aux_sym_c_type_token16] = ACTIONS(54),
    [aux_sym_c_type_token17] = ACTIONS(54),
    [aux_sym_c_type_token18] = ACTIONS(54),
    [aux_sym_c_type_token19] = ACTIONS(54),
    [aux_sym_c_type_token20] = ACTIONS(54),
    [aux_sym_c_type_token21] = ACTIONS(56),
    [aux_sym_c_type_token22] = ACTIONS(54),
    [aux_sym_c_type_token23] = ACTIONS(54),
    [aux_sym_c_type_token24] = ACTIONS(54),
    [aux_sym_c_type_token25] = ACTIONS(54),
    [aux_sym_c_type_token26] = ACTIONS(54),
    [sym_comment] = ACTIONS(54),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [aux_sym_array_type_token1] = ACTIONS(58),
    [aux_sym_array_type_token2] = ACTIONS(58),
    [aux_sym_array_type_token3] = ACTIONS(58),
    [aux_sym_array_type_token4] = ACTIONS(58),
    [aux_sym_array_type_token5] = ACTIONS(58),
    [aux_sym_array_type_token6] = ACTIONS(58),
    [aux_sym_array_type_token7] = ACTIONS(58),
    [aux_sym_array_type_token8] = ACTIONS(58),
    [aux_sym_array_type_token9] = ACTIONS(58),
    [aux_sym_array_type_token10] = ACTIONS(58),
    [aux_sym_array_type_token11] = ACTIONS(58),
    [aux_sym_array_type_token12] = ACTIONS(58),
    [aux_sym_array_type_token13] = ACTIONS(58),
    [aux_sym_array_type_token14] = ACTIONS(58),
    [aux_sym_array_type_token15] = ACTIONS(58),
    [aux_sym_array_type_token16] = ACTIONS(58),
    [aux_sym_array_type_token17] = ACTIONS(58),
    [aux_sym_array_type_token18] = ACTIONS(58),
    [aux_sym_array_type_token19] = ACTIONS(58),
    [aux_sym_array_type_token20] = ACTIONS(58),
    [aux_sym_array_type_token21] = ACTIONS(60),
    [aux_sym_array_type_token22] = ACTIONS(58),
    [aux_sym_array_type_token23] = ACTIONS(58),
    [aux_sym_array_type_token24] = ACTIONS(58),
    [aux_sym_c_type_token1] = ACTIONS(58),
    [aux_sym_c_type_token2] = ACTIONS(58),
    [aux_sym_c_type_token3] = ACTIONS(58),
    [aux_sym_c_type_token4] = ACTIONS(58),
    [aux_sym_c_type_token5] = ACTIONS(58),
    [aux_sym_c_type_token6] = ACTIONS(58),
    [aux_sym_c_type_token7] = ACTIONS(58),
    [aux_sym_c_type_token8] = ACTIONS(58),
    [aux_sym_c_type_token9] = ACTIONS(58),
    [aux_sym_c_type_token10] = ACTIONS(58),
    [aux_sym_c_type_token11] = ACTIONS(60),
    [aux_sym_c_type_token12] = ACTIONS(58),
    [aux_sym_c_type_token13] = ACTIONS(58),
    [aux_sym_c_type_token14] = ACTIONS(58),
    [aux_sym_c_type_token15] = ACTIONS(58),
    [aux_sym_c_type_token16] = ACTIONS(58),
    [aux_sym_c_type_token17] = ACTIONS(58),
    [aux_sym_c_type_token18] = ACTIONS(58),
    [aux_sym_c_type_token19] = ACTIONS(58),
    [aux_sym_c_type_token20] = ACTIONS(58),
    [aux_sym_c_type_token21] = ACTIONS(60),
    [aux_sym_c_type_token22] = ACTIONS(58),
    [aux_sym_c_type_token23] = ACTIONS(58),
    [aux_sym_c_type_token24] = ACTIONS(58),
    [aux_sym_c_type_token25] = ACTIONS(58),
    [aux_sym_c_type_token26] = ACTIONS(58),
    [sym_comment] = ACTIONS(58),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [aux_sym_array_type_token1] = ACTIONS(62),
    [aux_sym_array_type_token2] = ACTIONS(62),
    [aux_sym_array_type_token3] = ACTIONS(62),
    [aux_sym_array_type_token4] = ACTIONS(62),
    [aux_sym_array_type_token5] = ACTIONS(62),
    [aux_sym_array_type_token6] = ACTIONS(62),
    [aux_sym_array_type_token7] = ACTIONS(62),
    [aux_sym_array_type_token8] = ACTIONS(62),
    [aux_sym_array_type_token9] = ACTIONS(62),
    [aux_sym_array_type_token10] = ACTIONS(62),
    [aux_sym_array_type_token11] = ACTIONS(62),
    [aux_sym_array_type_token12] = ACTIONS(62),
    [aux_sym_array_type_token13] = ACTIONS(62),
    [aux_sym_array_type_token14] = ACTIONS(62),
    [aux_sym_array_type_token15] = ACTIONS(62),
    [aux_sym_array_type_token16] = ACTIONS(62),
    [aux_sym_array_type_token17] = ACTIONS(62),
    [aux_sym_array_type_token18] = ACTIONS(62),
    [aux_sym_array_type_token19] = ACTIONS(62),
    [aux_sym_array_type_token20] = ACTIONS(62),
    [aux_sym_array_type_token21] = ACTIONS(64),
    [aux_sym_array_type_token22] = ACTIONS(62),
    [aux_sym_array_type_token23] = ACTIONS(62),
    [aux_sym_array_type_token24] = ACTIONS(62),
    [aux_sym_c_type_token1] = ACTIONS(62),
    [aux_sym_c_type_token2] = ACTIONS(62),
    [aux_sym_c_type_token3] = ACTIONS(62),
    [aux_sym_c_type_token4] = ACTIONS(62),
    [aux_sym_c_type_token5] = ACTIONS(62),
    [aux_sym_c_type_token6] = ACTIONS(62),
    [aux_sym_c_type_token7] = ACTIONS(62),
    [aux_sym_c_type_token8] = ACTIONS(62),
    [aux_sym_c_type_token9] = ACTIONS(62),
    [aux_sym_c_type_token10] = ACTIONS(62),
    [aux_sym_c_type_token11] = ACTIONS(64),
    [aux_sym_c_type_token12] = ACTIONS(62),
    [aux_sym_c_type_token13] = ACTIONS(62),
    [aux_sym_c_type_token14] = ACTIONS(62),
    [aux_sym_c_type_token15] = ACTIONS(62),
    [aux_sym_c_type_token16] = ACTIONS(62),
    [aux_sym_c_type_token17] = ACTIONS(62),
    [aux_sym_c_type_token18] = ACTIONS(62),
    [aux_sym_c_type_token19] = ACTIONS(62),
    [aux_sym_c_type_token20] = ACTIONS(62),
    [aux_sym_c_type_token21] = ACTIONS(64),
    [aux_sym_c_type_token22] = ACTIONS(62),
    [aux_sym_c_type_token23] = ACTIONS(62),
    [aux_sym_c_type_token24] = ACTIONS(62),
    [aux_sym_c_type_token25] = ACTIONS(62),
    [aux_sym_c_type_token26] = ACTIONS(62),
    [sym_comment] = ACTIONS(62),
  },
  [11] = {
    [sym_declaration_argument] = STATE(37),
    [sym_identifier] = STATE(28),
    [sym_interprocess_variable] = STATE(28),
    [sym_local_variable] = STATE(28),
    [sym_parameter] = STATE(28),
    [sym_integer_constant] = STATE(37),
    [aux_sym_identifier_token1] = ACTIONS(66),
    [anon_sym_LT_GT] = ACTIONS(68),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [aux_sym_parameter_token1] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_declaration_argument_list] = STATE(34),
    [sym_declaration_argument] = STATE(23),
    [sym_identifier] = STATE(28),
    [sym_interprocess_variable] = STATE(28),
    [sym_local_variable] = STATE(28),
    [sym_parameter] = STATE(28),
    [anon_sym_RPAREN] = ACTIONS(74),
    [aux_sym_identifier_token1] = ACTIONS(66),
    [anon_sym_LT_GT] = ACTIONS(68),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_declaration_argument] = STATE(32),
    [sym_identifier] = STATE(28),
    [sym_interprocess_variable] = STATE(28),
    [sym_local_variable] = STATE(28),
    [sym_parameter] = STATE(28),
    [aux_sym_identifier_token1] = ACTIONS(66),
    [anon_sym_LT_GT] = ACTIONS(68),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_declaration_argument] = STATE(35),
    [sym_identifier] = STATE(28),
    [sym_interprocess_variable] = STATE(28),
    [sym_local_variable] = STATE(28),
    [sym_parameter] = STATE(28),
    [aux_sym_identifier_token1] = ACTIONS(66),
    [anon_sym_LT_GT] = ACTIONS(68),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [aux_sym_identifier_repeat1] = STATE(16),
    [anon_sym_RPAREN] = ACTIONS(76),
    [sym_argument_separator] = ACTIONS(76),
    [aux_sym_identifier_token2] = ACTIONS(78),
    [sym_comment] = ACTIONS(80),
  },
  [16] = {
    [aux_sym_identifier_repeat1] = STATE(17),
    [anon_sym_RPAREN] = ACTIONS(82),
    [sym_argument_separator] = ACTIONS(82),
    [aux_sym_identifier_token2] = ACTIONS(84),
    [sym_comment] = ACTIONS(80),
  },
  [17] = {
    [aux_sym_identifier_repeat1] = STATE(17),
    [anon_sym_RPAREN] = ACTIONS(86),
    [sym_argument_separator] = ACTIONS(86),
    [aux_sym_identifier_token2] = ACTIONS(88),
    [sym_comment] = ACTIONS(80),
  },
  [18] = {
    [aux_sym_declaration_argument_list_repeat1] = STATE(18),
    [anon_sym_RPAREN] = ACTIONS(91),
    [sym_argument_separator] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_identifier] = STATE(27),
    [aux_sym_identifier_token1] = ACTIONS(66),
    [aux_sym_parameter_token1] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [aux_sym_declaration_argument_list_repeat1] = STATE(18),
    [anon_sym_RPAREN] = ACTIONS(98),
    [sym_argument_separator] = ACTIONS(100),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_c_declaration_arguments] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(102),
    [sym_command_suffix] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_array_declaration_arguments] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(106),
    [sym_command_suffix] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [aux_sym_declaration_argument_list_repeat1] = STATE(20),
    [anon_sym_RPAREN] = ACTIONS(110),
    [sym_argument_separator] = ACTIONS(100),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [anon_sym_RPAREN] = ACTIONS(112),
    [sym_argument_separator] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [anon_sym_RPAREN] = ACTIONS(114),
    [sym_argument_separator] = ACTIONS(114),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [anon_sym_LPAREN] = ACTIONS(116),
    [sym_command_suffix] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [anon_sym_RPAREN] = ACTIONS(118),
    [sym_argument_separator] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [anon_sym_RPAREN] = ACTIONS(120),
    [sym_argument_separator] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_identifier] = STATE(25),
    [aux_sym_identifier_token1] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_c_declaration_arguments] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(102),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_array_declaration_arguments] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [anon_sym_RPAREN] = ACTIONS(91),
    [sym_argument_separator] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [anon_sym_LPAREN] = ACTIONS(122),
    [sym_command_suffix] = ACTIONS(122),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [anon_sym_RPAREN] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_argument_separator] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [anon_sym_RPAREN] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [anon_sym_RPAREN] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_code, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(26),
  [9] = {.count = 1, .reusable = false}, SHIFT(26),
  [11] = {.count = 1, .reusable = true}, SHIFT(33),
  [13] = {.count = 1, .reusable = false}, SHIFT(33),
  [15] = {.count = 1, .reusable = true}, SHIFT(2),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_source_code, 1),
  [19] = {.count = 1, .reusable = true}, SHIFT(3),
  [21] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2),
  [23] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(26),
  [26] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(26),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(33),
  [32] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(33),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(3),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration, 2),
  [40] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration, 2),
  [42] = {.count = 1, .reusable = true}, REDUCE(sym_array_declaration_arguments, 5),
  [44] = {.count = 1, .reusable = false}, REDUCE(sym_array_declaration_arguments, 5),
  [46] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration, 3),
  [48] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration, 3),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration_arguments, 2),
  [52] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration_arguments, 2),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_array_declaration, 3),
  [56] = {.count = 1, .reusable = false}, REDUCE(sym_array_declaration, 3),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration_arguments, 3),
  [60] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration_arguments, 3),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_array_declaration, 2),
  [64] = {.count = 1, .reusable = false}, REDUCE(sym_array_declaration, 2),
  [66] = {.count = 1, .reusable = true}, SHIFT(15),
  [68] = {.count = 1, .reusable = true}, SHIFT(29),
  [70] = {.count = 1, .reusable = true}, SHIFT(19),
  [72] = {.count = 1, .reusable = true}, SHIFT(36),
  [74] = {.count = 1, .reusable = true}, SHIFT(7),
  [76] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [78] = {.count = 1, .reusable = false}, SHIFT(16),
  [80] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [82] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 2),
  [84] = {.count = 1, .reusable = false}, SHIFT(17),
  [86] = {.count = 1, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2),
  [88] = {.count = 2, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(17),
  [91] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_argument_list_repeat1, 2),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_argument_list_repeat1, 2), SHIFT_REPEAT(13),
  [96] = {.count = 1, .reusable = true}, SHIFT(24),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_argument_list, 2),
  [100] = {.count = 1, .reusable = true}, SHIFT(13),
  [102] = {.count = 1, .reusable = true}, SHIFT(12),
  [104] = {.count = 1, .reusable = true}, SHIFT(30),
  [106] = {.count = 1, .reusable = true}, SHIFT(14),
  [108] = {.count = 1, .reusable = true}, SHIFT(31),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_argument_list, 1),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_interprocess_variable, 2),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_array_type, 1),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_local_variable, 2),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_argument, 1),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_c_type, 1),
  [124] = {.count = 1, .reusable = true}, SHIFT(9),
  [126] = {.count = 1, .reusable = true}, SHIFT(11),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_integer_constant, 1),
  [130] = {.count = 1, .reusable = true}, SHIFT(5),
  [132] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fourd(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}

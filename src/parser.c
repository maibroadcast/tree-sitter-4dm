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
#define STATE_COUNT 51
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

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
  sym_storage_suffix = 60,
  anon_sym_LBRACK = 61,
  anon_sym_RBRACK = 62,
  sym_comment = 63,
  sym_source_code = 64,
  sym__token = 65,
  sym_array_declaration = 66,
  sym_c_declaration = 67,
  sym_array_type = 68,
  sym_c_type = 69,
  sym_array_declaration_arguments = 70,
  sym_c_declaration_arguments = 71,
  sym_declaration_argument_list = 72,
  sym_declaration_argument = 73,
  sym_identifier = 74,
  sym_interprocess_variable = 75,
  sym_local_variable = 76,
  sym_parameter = 77,
  sym_integer_constant = 78,
  sym_table = 79,
  sym_field = 80,
  aux_sym_source_code_repeat1 = 81,
  aux_sym_declaration_argument_list_repeat1 = 82,
  aux_sym_identifier_repeat1 = 83,
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
  [sym_storage_suffix] = "storage_suffix",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym_table] = "table",
  [sym_field] = "field",
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
  [sym_storage_suffix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
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
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
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
      if (lookahead == 0) ADVANCE(245);
      if (lookahead == '$') ADVANCE(312);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(298);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '[') ADVANCE(316);
      if (lookahead == ']') ADVANCE(317);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(300);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(245);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead == '[') ADVANCE(316);
      if (lookahead == '_') ADVANCE(309);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(310);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(307);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead == ';') ADVANCE(298);
      if (lookahead == ']') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(312);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(319);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(318);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(311);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(14);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(224);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(130);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(170);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(108);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 39:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 40:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(122);
      END_STATE();
    case 41:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(277);
      END_STATE();
    case 42:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(252);
      END_STATE();
    case 43:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(263);
      END_STATE();
    case 44:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(132);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(45);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(121);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 45:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(124);
      END_STATE();
    case 46:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(133);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(35);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(180);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 47:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(123);
      END_STATE();
    case 48:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(207);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 95:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 96:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(286);
      END_STATE();
    case 97:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(269);
      END_STATE();
    case 98:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(261);
      END_STATE();
    case 99:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(61);
      END_STATE();
    case 100:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 101:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 102:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 103:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 104:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 105:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(290);
      END_STATE();
    case 106:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 107:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 116:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 117:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 122:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(58);
      END_STATE();
    case 123:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(84);
      END_STATE();
    case 124:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(92);
      END_STATE();
    case 125:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 126:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 127:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 128:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 129:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 130:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(171);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 131:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 132:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 133:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 134:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 135:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 136:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 137:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 143:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 144:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 145:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 146:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 150:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 152:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 154:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
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
          lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 169:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 171:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 172:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 173:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 174:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 175:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 176:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 177:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 178:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 179:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 180:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 182:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 183:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 184:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 185:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 186:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(273);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 189:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 190:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 191:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 192:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 193:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 194:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 195:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 205:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(229);
      END_STATE();
    case 206:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(280);
      END_STATE();
    case 207:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(271);
      END_STATE();
    case 208:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(256);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      END_STATE();
    case 214:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 215:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 216:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 217:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 218:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 219:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 220:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 221:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 222:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 223:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 224:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      END_STATE();
    case 225:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 226:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 227:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 228:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 229:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      END_STATE();
    case 230:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 231:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 232:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 233:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 234:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 235:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 236:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 237:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 238:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(206);
      END_STATE();
    case 239:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(210);
      END_STATE();
    case 240:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(222);
      END_STATE();
    case 241:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 242:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(4);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_array_type_token2);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_array_type_token3);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_array_type_token4);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_array_type_token5);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_array_type_token6);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_array_type_token7);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_array_type_token8);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_array_type_token9);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_array_type_token10);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_array_type_token11);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_array_type_token12);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_array_type_token13);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_array_type_token14);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_array_type_token15);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_array_type_token16);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_array_type_token17);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_array_type_token18);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_array_type_token19);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_array_type_token20);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_array_type_token21);
      if (lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_array_type_token22);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_array_type_token23);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_array_type_token24);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_c_type_token1);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_c_type_token2);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_c_type_token3);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_c_type_token4);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_c_type_token5);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_c_type_token6);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_c_type_token7);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_c_type_token8);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_c_type_token9);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_c_type_token10);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_c_type_token11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_c_type_token12);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_c_type_token13);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_c_type_token14);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_c_type_token15);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_c_type_token16);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_c_type_token17);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_c_type_token18);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_c_type_token19);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_c_type_token20);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_c_type_token21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_c_type_token22);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_c_type_token23);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_c_type_token24);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_c_type_token25);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_c_type_token26);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_argument_separator);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '_') ADVANCE(309);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(310);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(307);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == '/') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_command_suffix);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_storage_suffix);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 7},
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
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_array_type_token1] = ACTIONS(1),
    [aux_sym_array_type_token2] = ACTIONS(1),
    [aux_sym_array_type_token3] = ACTIONS(1),
    [aux_sym_array_type_token4] = ACTIONS(1),
    [aux_sym_array_type_token5] = ACTIONS(1),
    [aux_sym_array_type_token6] = ACTIONS(1),
    [aux_sym_array_type_token7] = ACTIONS(1),
    [aux_sym_array_type_token8] = ACTIONS(1),
    [aux_sym_array_type_token9] = ACTIONS(1),
    [aux_sym_array_type_token10] = ACTIONS(1),
    [aux_sym_array_type_token11] = ACTIONS(1),
    [aux_sym_array_type_token12] = ACTIONS(1),
    [aux_sym_array_type_token13] = ACTIONS(1),
    [aux_sym_array_type_token14] = ACTIONS(1),
    [aux_sym_array_type_token15] = ACTIONS(1),
    [aux_sym_array_type_token16] = ACTIONS(1),
    [aux_sym_array_type_token17] = ACTIONS(1),
    [aux_sym_array_type_token18] = ACTIONS(1),
    [aux_sym_array_type_token19] = ACTIONS(1),
    [aux_sym_array_type_token20] = ACTIONS(1),
    [aux_sym_array_type_token21] = ACTIONS(1),
    [aux_sym_array_type_token22] = ACTIONS(1),
    [aux_sym_array_type_token23] = ACTIONS(1),
    [aux_sym_array_type_token24] = ACTIONS(1),
    [aux_sym_c_type_token1] = ACTIONS(1),
    [aux_sym_c_type_token2] = ACTIONS(1),
    [aux_sym_c_type_token3] = ACTIONS(1),
    [aux_sym_c_type_token4] = ACTIONS(1),
    [aux_sym_c_type_token5] = ACTIONS(1),
    [aux_sym_c_type_token6] = ACTIONS(1),
    [aux_sym_c_type_token7] = ACTIONS(1),
    [aux_sym_c_type_token8] = ACTIONS(1),
    [aux_sym_c_type_token9] = ACTIONS(1),
    [aux_sym_c_type_token10] = ACTIONS(1),
    [aux_sym_c_type_token11] = ACTIONS(1),
    [aux_sym_c_type_token12] = ACTIONS(1),
    [aux_sym_c_type_token13] = ACTIONS(1),
    [aux_sym_c_type_token14] = ACTIONS(1),
    [aux_sym_c_type_token15] = ACTIONS(1),
    [aux_sym_c_type_token16] = ACTIONS(1),
    [aux_sym_c_type_token17] = ACTIONS(1),
    [aux_sym_c_type_token18] = ACTIONS(1),
    [aux_sym_c_type_token19] = ACTIONS(1),
    [aux_sym_c_type_token20] = ACTIONS(1),
    [aux_sym_c_type_token21] = ACTIONS(1),
    [aux_sym_c_type_token22] = ACTIONS(1),
    [aux_sym_c_type_token23] = ACTIONS(1),
    [aux_sym_c_type_token24] = ACTIONS(1),
    [aux_sym_c_type_token25] = ACTIONS(1),
    [aux_sym_c_type_token26] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_argument_separator] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_parameter_token1] = ACTIONS(1),
    [sym_command_suffix] = ACTIONS(1),
    [sym_storage_suffix] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_code] = STATE(50),
    [sym__token] = STATE(3),
    [sym_array_declaration] = STATE(3),
    [sym_c_declaration] = STATE(3),
    [sym_array_type] = STATE(28),
    [sym_c_type] = STATE(29),
    [sym_table] = STATE(3),
    [sym_field] = STATE(3),
    [aux_sym_source_code_repeat1] = STATE(3),
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
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_array_declaration] = STATE(2),
    [sym_c_declaration] = STATE(2),
    [sym_array_type] = STATE(28),
    [sym_c_type] = STATE(29),
    [sym_table] = STATE(2),
    [sym_field] = STATE(2),
    [aux_sym_source_code_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_array_type_token1] = ACTIONS(21),
    [aux_sym_array_type_token2] = ACTIONS(21),
    [aux_sym_array_type_token3] = ACTIONS(21),
    [aux_sym_array_type_token4] = ACTIONS(21),
    [aux_sym_array_type_token5] = ACTIONS(21),
    [aux_sym_array_type_token6] = ACTIONS(21),
    [aux_sym_array_type_token7] = ACTIONS(21),
    [aux_sym_array_type_token8] = ACTIONS(21),
    [aux_sym_array_type_token9] = ACTIONS(21),
    [aux_sym_array_type_token10] = ACTIONS(21),
    [aux_sym_array_type_token11] = ACTIONS(21),
    [aux_sym_array_type_token12] = ACTIONS(21),
    [aux_sym_array_type_token13] = ACTIONS(21),
    [aux_sym_array_type_token14] = ACTIONS(21),
    [aux_sym_array_type_token15] = ACTIONS(21),
    [aux_sym_array_type_token16] = ACTIONS(21),
    [aux_sym_array_type_token17] = ACTIONS(21),
    [aux_sym_array_type_token18] = ACTIONS(21),
    [aux_sym_array_type_token19] = ACTIONS(21),
    [aux_sym_array_type_token20] = ACTIONS(21),
    [aux_sym_array_type_token21] = ACTIONS(24),
    [aux_sym_array_type_token22] = ACTIONS(21),
    [aux_sym_array_type_token23] = ACTIONS(21),
    [aux_sym_array_type_token24] = ACTIONS(21),
    [aux_sym_c_type_token1] = ACTIONS(27),
    [aux_sym_c_type_token2] = ACTIONS(27),
    [aux_sym_c_type_token3] = ACTIONS(27),
    [aux_sym_c_type_token4] = ACTIONS(27),
    [aux_sym_c_type_token5] = ACTIONS(27),
    [aux_sym_c_type_token6] = ACTIONS(27),
    [aux_sym_c_type_token7] = ACTIONS(27),
    [aux_sym_c_type_token8] = ACTIONS(27),
    [aux_sym_c_type_token9] = ACTIONS(27),
    [aux_sym_c_type_token10] = ACTIONS(27),
    [aux_sym_c_type_token11] = ACTIONS(30),
    [aux_sym_c_type_token12] = ACTIONS(27),
    [aux_sym_c_type_token13] = ACTIONS(27),
    [aux_sym_c_type_token14] = ACTIONS(27),
    [aux_sym_c_type_token15] = ACTIONS(27),
    [aux_sym_c_type_token16] = ACTIONS(27),
    [aux_sym_c_type_token17] = ACTIONS(27),
    [aux_sym_c_type_token18] = ACTIONS(27),
    [aux_sym_c_type_token19] = ACTIONS(27),
    [aux_sym_c_type_token20] = ACTIONS(27),
    [aux_sym_c_type_token21] = ACTIONS(30),
    [aux_sym_c_type_token22] = ACTIONS(27),
    [aux_sym_c_type_token23] = ACTIONS(27),
    [aux_sym_c_type_token24] = ACTIONS(27),
    [aux_sym_c_type_token25] = ACTIONS(27),
    [aux_sym_c_type_token26] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_comment] = ACTIONS(36),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym_array_declaration] = STATE(2),
    [sym_c_declaration] = STATE(2),
    [sym_array_type] = STATE(28),
    [sym_c_type] = STATE(29),
    [sym_table] = STATE(2),
    [sym_field] = STATE(2),
    [aux_sym_source_code_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(39),
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
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_comment] = ACTIONS(41),
  },
  [4] = {
    [aux_sym_identifier_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_array_type_token1] = ACTIONS(45),
    [aux_sym_array_type_token2] = ACTIONS(45),
    [aux_sym_array_type_token3] = ACTIONS(45),
    [aux_sym_array_type_token4] = ACTIONS(45),
    [aux_sym_array_type_token5] = ACTIONS(45),
    [aux_sym_array_type_token6] = ACTIONS(45),
    [aux_sym_array_type_token7] = ACTIONS(45),
    [aux_sym_array_type_token8] = ACTIONS(45),
    [aux_sym_array_type_token9] = ACTIONS(45),
    [aux_sym_array_type_token10] = ACTIONS(45),
    [aux_sym_array_type_token11] = ACTIONS(45),
    [aux_sym_array_type_token12] = ACTIONS(45),
    [aux_sym_array_type_token13] = ACTIONS(45),
    [aux_sym_array_type_token14] = ACTIONS(45),
    [aux_sym_array_type_token15] = ACTIONS(45),
    [aux_sym_array_type_token16] = ACTIONS(45),
    [aux_sym_array_type_token17] = ACTIONS(45),
    [aux_sym_array_type_token18] = ACTIONS(45),
    [aux_sym_array_type_token19] = ACTIONS(45),
    [aux_sym_array_type_token20] = ACTIONS(45),
    [aux_sym_array_type_token21] = ACTIONS(45),
    [aux_sym_array_type_token22] = ACTIONS(45),
    [aux_sym_array_type_token23] = ACTIONS(45),
    [aux_sym_array_type_token24] = ACTIONS(45),
    [aux_sym_c_type_token1] = ACTIONS(45),
    [aux_sym_c_type_token2] = ACTIONS(45),
    [aux_sym_c_type_token3] = ACTIONS(45),
    [aux_sym_c_type_token4] = ACTIONS(45),
    [aux_sym_c_type_token5] = ACTIONS(45),
    [aux_sym_c_type_token6] = ACTIONS(45),
    [aux_sym_c_type_token7] = ACTIONS(45),
    [aux_sym_c_type_token8] = ACTIONS(45),
    [aux_sym_c_type_token9] = ACTIONS(45),
    [aux_sym_c_type_token10] = ACTIONS(45),
    [aux_sym_c_type_token11] = ACTIONS(45),
    [aux_sym_c_type_token12] = ACTIONS(45),
    [aux_sym_c_type_token13] = ACTIONS(45),
    [aux_sym_c_type_token14] = ACTIONS(45),
    [aux_sym_c_type_token15] = ACTIONS(45),
    [aux_sym_c_type_token16] = ACTIONS(45),
    [aux_sym_c_type_token17] = ACTIONS(45),
    [aux_sym_c_type_token18] = ACTIONS(45),
    [aux_sym_c_type_token19] = ACTIONS(45),
    [aux_sym_c_type_token20] = ACTIONS(45),
    [aux_sym_c_type_token21] = ACTIONS(45),
    [aux_sym_c_type_token22] = ACTIONS(45),
    [aux_sym_c_type_token23] = ACTIONS(45),
    [aux_sym_c_type_token24] = ACTIONS(45),
    [aux_sym_c_type_token25] = ACTIONS(45),
    [aux_sym_c_type_token26] = ACTIONS(45),
    [aux_sym_identifier_token2] = ACTIONS(47),
    [sym_storage_suffix] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [sym_comment] = ACTIONS(45),
  },
  [5] = {
    [aux_sym_identifier_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(50),
    [aux_sym_array_type_token1] = ACTIONS(52),
    [aux_sym_array_type_token2] = ACTIONS(52),
    [aux_sym_array_type_token3] = ACTIONS(52),
    [aux_sym_array_type_token4] = ACTIONS(52),
    [aux_sym_array_type_token5] = ACTIONS(52),
    [aux_sym_array_type_token6] = ACTIONS(52),
    [aux_sym_array_type_token7] = ACTIONS(52),
    [aux_sym_array_type_token8] = ACTIONS(52),
    [aux_sym_array_type_token9] = ACTIONS(52),
    [aux_sym_array_type_token10] = ACTIONS(52),
    [aux_sym_array_type_token11] = ACTIONS(52),
    [aux_sym_array_type_token12] = ACTIONS(52),
    [aux_sym_array_type_token13] = ACTIONS(52),
    [aux_sym_array_type_token14] = ACTIONS(52),
    [aux_sym_array_type_token15] = ACTIONS(52),
    [aux_sym_array_type_token16] = ACTIONS(52),
    [aux_sym_array_type_token17] = ACTIONS(52),
    [aux_sym_array_type_token18] = ACTIONS(52),
    [aux_sym_array_type_token19] = ACTIONS(52),
    [aux_sym_array_type_token20] = ACTIONS(52),
    [aux_sym_array_type_token21] = ACTIONS(52),
    [aux_sym_array_type_token22] = ACTIONS(52),
    [aux_sym_array_type_token23] = ACTIONS(52),
    [aux_sym_array_type_token24] = ACTIONS(52),
    [aux_sym_c_type_token1] = ACTIONS(52),
    [aux_sym_c_type_token2] = ACTIONS(52),
    [aux_sym_c_type_token3] = ACTIONS(52),
    [aux_sym_c_type_token4] = ACTIONS(52),
    [aux_sym_c_type_token5] = ACTIONS(52),
    [aux_sym_c_type_token6] = ACTIONS(52),
    [aux_sym_c_type_token7] = ACTIONS(52),
    [aux_sym_c_type_token8] = ACTIONS(52),
    [aux_sym_c_type_token9] = ACTIONS(52),
    [aux_sym_c_type_token10] = ACTIONS(52),
    [aux_sym_c_type_token11] = ACTIONS(52),
    [aux_sym_c_type_token12] = ACTIONS(52),
    [aux_sym_c_type_token13] = ACTIONS(52),
    [aux_sym_c_type_token14] = ACTIONS(52),
    [aux_sym_c_type_token15] = ACTIONS(52),
    [aux_sym_c_type_token16] = ACTIONS(52),
    [aux_sym_c_type_token17] = ACTIONS(52),
    [aux_sym_c_type_token18] = ACTIONS(52),
    [aux_sym_c_type_token19] = ACTIONS(52),
    [aux_sym_c_type_token20] = ACTIONS(52),
    [aux_sym_c_type_token21] = ACTIONS(52),
    [aux_sym_c_type_token22] = ACTIONS(52),
    [aux_sym_c_type_token23] = ACTIONS(52),
    [aux_sym_c_type_token24] = ACTIONS(52),
    [aux_sym_c_type_token25] = ACTIONS(52),
    [aux_sym_c_type_token26] = ACTIONS(52),
    [aux_sym_identifier_token2] = ACTIONS(54),
    [sym_storage_suffix] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(52),
    [sym_comment] = ACTIONS(52),
  },
  [6] = {
    [aux_sym_identifier_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(56),
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
    [aux_sym_array_type_token21] = ACTIONS(58),
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
    [aux_sym_c_type_token11] = ACTIONS(58),
    [aux_sym_c_type_token12] = ACTIONS(58),
    [aux_sym_c_type_token13] = ACTIONS(58),
    [aux_sym_c_type_token14] = ACTIONS(58),
    [aux_sym_c_type_token15] = ACTIONS(58),
    [aux_sym_c_type_token16] = ACTIONS(58),
    [aux_sym_c_type_token17] = ACTIONS(58),
    [aux_sym_c_type_token18] = ACTIONS(58),
    [aux_sym_c_type_token19] = ACTIONS(58),
    [aux_sym_c_type_token20] = ACTIONS(58),
    [aux_sym_c_type_token21] = ACTIONS(58),
    [aux_sym_c_type_token22] = ACTIONS(58),
    [aux_sym_c_type_token23] = ACTIONS(58),
    [aux_sym_c_type_token24] = ACTIONS(58),
    [aux_sym_c_type_token25] = ACTIONS(58),
    [aux_sym_c_type_token26] = ACTIONS(58),
    [aux_sym_identifier_token2] = ACTIONS(60),
    [sym_storage_suffix] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(58),
    [sym_comment] = ACTIONS(58),
  },
  [7] = {
    [sym_identifier] = STATE(10),
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
    [aux_sym_identifier_token1] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(62),
    [sym_comment] = ACTIONS(62),
  },
  [8] = {
    [sym_identifier] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(68),
    [aux_sym_array_type_token1] = ACTIONS(68),
    [aux_sym_array_type_token2] = ACTIONS(68),
    [aux_sym_array_type_token3] = ACTIONS(68),
    [aux_sym_array_type_token4] = ACTIONS(68),
    [aux_sym_array_type_token5] = ACTIONS(68),
    [aux_sym_array_type_token6] = ACTIONS(68),
    [aux_sym_array_type_token7] = ACTIONS(68),
    [aux_sym_array_type_token8] = ACTIONS(68),
    [aux_sym_array_type_token9] = ACTIONS(68),
    [aux_sym_array_type_token10] = ACTIONS(68),
    [aux_sym_array_type_token11] = ACTIONS(68),
    [aux_sym_array_type_token12] = ACTIONS(68),
    [aux_sym_array_type_token13] = ACTIONS(68),
    [aux_sym_array_type_token14] = ACTIONS(68),
    [aux_sym_array_type_token15] = ACTIONS(68),
    [aux_sym_array_type_token16] = ACTIONS(68),
    [aux_sym_array_type_token17] = ACTIONS(68),
    [aux_sym_array_type_token18] = ACTIONS(68),
    [aux_sym_array_type_token19] = ACTIONS(68),
    [aux_sym_array_type_token20] = ACTIONS(68),
    [aux_sym_array_type_token21] = ACTIONS(70),
    [aux_sym_array_type_token22] = ACTIONS(68),
    [aux_sym_array_type_token23] = ACTIONS(68),
    [aux_sym_array_type_token24] = ACTIONS(68),
    [aux_sym_c_type_token1] = ACTIONS(68),
    [aux_sym_c_type_token2] = ACTIONS(68),
    [aux_sym_c_type_token3] = ACTIONS(68),
    [aux_sym_c_type_token4] = ACTIONS(68),
    [aux_sym_c_type_token5] = ACTIONS(68),
    [aux_sym_c_type_token6] = ACTIONS(68),
    [aux_sym_c_type_token7] = ACTIONS(68),
    [aux_sym_c_type_token8] = ACTIONS(68),
    [aux_sym_c_type_token9] = ACTIONS(68),
    [aux_sym_c_type_token10] = ACTIONS(68),
    [aux_sym_c_type_token11] = ACTIONS(70),
    [aux_sym_c_type_token12] = ACTIONS(68),
    [aux_sym_c_type_token13] = ACTIONS(68),
    [aux_sym_c_type_token14] = ACTIONS(68),
    [aux_sym_c_type_token15] = ACTIONS(68),
    [aux_sym_c_type_token16] = ACTIONS(68),
    [aux_sym_c_type_token17] = ACTIONS(68),
    [aux_sym_c_type_token18] = ACTIONS(68),
    [aux_sym_c_type_token19] = ACTIONS(68),
    [aux_sym_c_type_token20] = ACTIONS(68),
    [aux_sym_c_type_token21] = ACTIONS(70),
    [aux_sym_c_type_token22] = ACTIONS(68),
    [aux_sym_c_type_token23] = ACTIONS(68),
    [aux_sym_c_type_token24] = ACTIONS(68),
    [aux_sym_c_type_token25] = ACTIONS(68),
    [aux_sym_c_type_token26] = ACTIONS(68),
    [aux_sym_identifier_token1] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(68),
    [sym_comment] = ACTIONS(68),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [aux_sym_array_type_token1] = ACTIONS(72),
    [aux_sym_array_type_token2] = ACTIONS(72),
    [aux_sym_array_type_token3] = ACTIONS(72),
    [aux_sym_array_type_token4] = ACTIONS(72),
    [aux_sym_array_type_token5] = ACTIONS(72),
    [aux_sym_array_type_token6] = ACTIONS(72),
    [aux_sym_array_type_token7] = ACTIONS(72),
    [aux_sym_array_type_token8] = ACTIONS(72),
    [aux_sym_array_type_token9] = ACTIONS(72),
    [aux_sym_array_type_token10] = ACTIONS(72),
    [aux_sym_array_type_token11] = ACTIONS(72),
    [aux_sym_array_type_token12] = ACTIONS(72),
    [aux_sym_array_type_token13] = ACTIONS(72),
    [aux_sym_array_type_token14] = ACTIONS(72),
    [aux_sym_array_type_token15] = ACTIONS(72),
    [aux_sym_array_type_token16] = ACTIONS(72),
    [aux_sym_array_type_token17] = ACTIONS(72),
    [aux_sym_array_type_token18] = ACTIONS(72),
    [aux_sym_array_type_token19] = ACTIONS(72),
    [aux_sym_array_type_token20] = ACTIONS(72),
    [aux_sym_array_type_token21] = ACTIONS(74),
    [aux_sym_array_type_token22] = ACTIONS(72),
    [aux_sym_array_type_token23] = ACTIONS(72),
    [aux_sym_array_type_token24] = ACTIONS(72),
    [aux_sym_c_type_token1] = ACTIONS(72),
    [aux_sym_c_type_token2] = ACTIONS(72),
    [aux_sym_c_type_token3] = ACTIONS(72),
    [aux_sym_c_type_token4] = ACTIONS(72),
    [aux_sym_c_type_token5] = ACTIONS(72),
    [aux_sym_c_type_token6] = ACTIONS(72),
    [aux_sym_c_type_token7] = ACTIONS(72),
    [aux_sym_c_type_token8] = ACTIONS(72),
    [aux_sym_c_type_token9] = ACTIONS(72),
    [aux_sym_c_type_token10] = ACTIONS(72),
    [aux_sym_c_type_token11] = ACTIONS(74),
    [aux_sym_c_type_token12] = ACTIONS(72),
    [aux_sym_c_type_token13] = ACTIONS(72),
    [aux_sym_c_type_token14] = ACTIONS(72),
    [aux_sym_c_type_token15] = ACTIONS(72),
    [aux_sym_c_type_token16] = ACTIONS(72),
    [aux_sym_c_type_token17] = ACTIONS(72),
    [aux_sym_c_type_token18] = ACTIONS(72),
    [aux_sym_c_type_token19] = ACTIONS(72),
    [aux_sym_c_type_token20] = ACTIONS(72),
    [aux_sym_c_type_token21] = ACTIONS(74),
    [aux_sym_c_type_token22] = ACTIONS(72),
    [aux_sym_c_type_token23] = ACTIONS(72),
    [aux_sym_c_type_token24] = ACTIONS(72),
    [aux_sym_c_type_token25] = ACTIONS(72),
    [aux_sym_c_type_token26] = ACTIONS(72),
    [sym_storage_suffix] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(72),
    [sym_comment] = ACTIONS(72),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [aux_sym_array_type_token1] = ACTIONS(78),
    [aux_sym_array_type_token2] = ACTIONS(78),
    [aux_sym_array_type_token3] = ACTIONS(78),
    [aux_sym_array_type_token4] = ACTIONS(78),
    [aux_sym_array_type_token5] = ACTIONS(78),
    [aux_sym_array_type_token6] = ACTIONS(78),
    [aux_sym_array_type_token7] = ACTIONS(78),
    [aux_sym_array_type_token8] = ACTIONS(78),
    [aux_sym_array_type_token9] = ACTIONS(78),
    [aux_sym_array_type_token10] = ACTIONS(78),
    [aux_sym_array_type_token11] = ACTIONS(78),
    [aux_sym_array_type_token12] = ACTIONS(78),
    [aux_sym_array_type_token13] = ACTIONS(78),
    [aux_sym_array_type_token14] = ACTIONS(78),
    [aux_sym_array_type_token15] = ACTIONS(78),
    [aux_sym_array_type_token16] = ACTIONS(78),
    [aux_sym_array_type_token17] = ACTIONS(78),
    [aux_sym_array_type_token18] = ACTIONS(78),
    [aux_sym_array_type_token19] = ACTIONS(78),
    [aux_sym_array_type_token20] = ACTIONS(78),
    [aux_sym_array_type_token21] = ACTIONS(80),
    [aux_sym_array_type_token22] = ACTIONS(78),
    [aux_sym_array_type_token23] = ACTIONS(78),
    [aux_sym_array_type_token24] = ACTIONS(78),
    [aux_sym_c_type_token1] = ACTIONS(78),
    [aux_sym_c_type_token2] = ACTIONS(78),
    [aux_sym_c_type_token3] = ACTIONS(78),
    [aux_sym_c_type_token4] = ACTIONS(78),
    [aux_sym_c_type_token5] = ACTIONS(78),
    [aux_sym_c_type_token6] = ACTIONS(78),
    [aux_sym_c_type_token7] = ACTIONS(78),
    [aux_sym_c_type_token8] = ACTIONS(78),
    [aux_sym_c_type_token9] = ACTIONS(78),
    [aux_sym_c_type_token10] = ACTIONS(78),
    [aux_sym_c_type_token11] = ACTIONS(80),
    [aux_sym_c_type_token12] = ACTIONS(78),
    [aux_sym_c_type_token13] = ACTIONS(78),
    [aux_sym_c_type_token14] = ACTIONS(78),
    [aux_sym_c_type_token15] = ACTIONS(78),
    [aux_sym_c_type_token16] = ACTIONS(78),
    [aux_sym_c_type_token17] = ACTIONS(78),
    [aux_sym_c_type_token18] = ACTIONS(78),
    [aux_sym_c_type_token19] = ACTIONS(78),
    [aux_sym_c_type_token20] = ACTIONS(78),
    [aux_sym_c_type_token21] = ACTIONS(80),
    [aux_sym_c_type_token22] = ACTIONS(78),
    [aux_sym_c_type_token23] = ACTIONS(78),
    [aux_sym_c_type_token24] = ACTIONS(78),
    [aux_sym_c_type_token25] = ACTIONS(78),
    [aux_sym_c_type_token26] = ACTIONS(78),
    [sym_storage_suffix] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(78),
    [sym_comment] = ACTIONS(78),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [aux_sym_array_type_token1] = ACTIONS(84),
    [aux_sym_array_type_token2] = ACTIONS(84),
    [aux_sym_array_type_token3] = ACTIONS(84),
    [aux_sym_array_type_token4] = ACTIONS(84),
    [aux_sym_array_type_token5] = ACTIONS(84),
    [aux_sym_array_type_token6] = ACTIONS(84),
    [aux_sym_array_type_token7] = ACTIONS(84),
    [aux_sym_array_type_token8] = ACTIONS(84),
    [aux_sym_array_type_token9] = ACTIONS(84),
    [aux_sym_array_type_token10] = ACTIONS(84),
    [aux_sym_array_type_token11] = ACTIONS(84),
    [aux_sym_array_type_token12] = ACTIONS(84),
    [aux_sym_array_type_token13] = ACTIONS(84),
    [aux_sym_array_type_token14] = ACTIONS(84),
    [aux_sym_array_type_token15] = ACTIONS(84),
    [aux_sym_array_type_token16] = ACTIONS(84),
    [aux_sym_array_type_token17] = ACTIONS(84),
    [aux_sym_array_type_token18] = ACTIONS(84),
    [aux_sym_array_type_token19] = ACTIONS(84),
    [aux_sym_array_type_token20] = ACTIONS(84),
    [aux_sym_array_type_token21] = ACTIONS(86),
    [aux_sym_array_type_token22] = ACTIONS(84),
    [aux_sym_array_type_token23] = ACTIONS(84),
    [aux_sym_array_type_token24] = ACTIONS(84),
    [aux_sym_c_type_token1] = ACTIONS(84),
    [aux_sym_c_type_token2] = ACTIONS(84),
    [aux_sym_c_type_token3] = ACTIONS(84),
    [aux_sym_c_type_token4] = ACTIONS(84),
    [aux_sym_c_type_token5] = ACTIONS(84),
    [aux_sym_c_type_token6] = ACTIONS(84),
    [aux_sym_c_type_token7] = ACTIONS(84),
    [aux_sym_c_type_token8] = ACTIONS(84),
    [aux_sym_c_type_token9] = ACTIONS(84),
    [aux_sym_c_type_token10] = ACTIONS(84),
    [aux_sym_c_type_token11] = ACTIONS(86),
    [aux_sym_c_type_token12] = ACTIONS(84),
    [aux_sym_c_type_token13] = ACTIONS(84),
    [aux_sym_c_type_token14] = ACTIONS(84),
    [aux_sym_c_type_token15] = ACTIONS(84),
    [aux_sym_c_type_token16] = ACTIONS(84),
    [aux_sym_c_type_token17] = ACTIONS(84),
    [aux_sym_c_type_token18] = ACTIONS(84),
    [aux_sym_c_type_token19] = ACTIONS(84),
    [aux_sym_c_type_token20] = ACTIONS(84),
    [aux_sym_c_type_token21] = ACTIONS(86),
    [aux_sym_c_type_token22] = ACTIONS(84),
    [aux_sym_c_type_token23] = ACTIONS(84),
    [aux_sym_c_type_token24] = ACTIONS(84),
    [aux_sym_c_type_token25] = ACTIONS(84),
    [aux_sym_c_type_token26] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(84),
    [sym_comment] = ACTIONS(84),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [aux_sym_array_type_token1] = ACTIONS(88),
    [aux_sym_array_type_token2] = ACTIONS(88),
    [aux_sym_array_type_token3] = ACTIONS(88),
    [aux_sym_array_type_token4] = ACTIONS(88),
    [aux_sym_array_type_token5] = ACTIONS(88),
    [aux_sym_array_type_token6] = ACTIONS(88),
    [aux_sym_array_type_token7] = ACTIONS(88),
    [aux_sym_array_type_token8] = ACTIONS(88),
    [aux_sym_array_type_token9] = ACTIONS(88),
    [aux_sym_array_type_token10] = ACTIONS(88),
    [aux_sym_array_type_token11] = ACTIONS(88),
    [aux_sym_array_type_token12] = ACTIONS(88),
    [aux_sym_array_type_token13] = ACTIONS(88),
    [aux_sym_array_type_token14] = ACTIONS(88),
    [aux_sym_array_type_token15] = ACTIONS(88),
    [aux_sym_array_type_token16] = ACTIONS(88),
    [aux_sym_array_type_token17] = ACTIONS(88),
    [aux_sym_array_type_token18] = ACTIONS(88),
    [aux_sym_array_type_token19] = ACTIONS(88),
    [aux_sym_array_type_token20] = ACTIONS(88),
    [aux_sym_array_type_token21] = ACTIONS(90),
    [aux_sym_array_type_token22] = ACTIONS(88),
    [aux_sym_array_type_token23] = ACTIONS(88),
    [aux_sym_array_type_token24] = ACTIONS(88),
    [aux_sym_c_type_token1] = ACTIONS(88),
    [aux_sym_c_type_token2] = ACTIONS(88),
    [aux_sym_c_type_token3] = ACTIONS(88),
    [aux_sym_c_type_token4] = ACTIONS(88),
    [aux_sym_c_type_token5] = ACTIONS(88),
    [aux_sym_c_type_token6] = ACTIONS(88),
    [aux_sym_c_type_token7] = ACTIONS(88),
    [aux_sym_c_type_token8] = ACTIONS(88),
    [aux_sym_c_type_token9] = ACTIONS(88),
    [aux_sym_c_type_token10] = ACTIONS(88),
    [aux_sym_c_type_token11] = ACTIONS(90),
    [aux_sym_c_type_token12] = ACTIONS(88),
    [aux_sym_c_type_token13] = ACTIONS(88),
    [aux_sym_c_type_token14] = ACTIONS(88),
    [aux_sym_c_type_token15] = ACTIONS(88),
    [aux_sym_c_type_token16] = ACTIONS(88),
    [aux_sym_c_type_token17] = ACTIONS(88),
    [aux_sym_c_type_token18] = ACTIONS(88),
    [aux_sym_c_type_token19] = ACTIONS(88),
    [aux_sym_c_type_token20] = ACTIONS(88),
    [aux_sym_c_type_token21] = ACTIONS(90),
    [aux_sym_c_type_token22] = ACTIONS(88),
    [aux_sym_c_type_token23] = ACTIONS(88),
    [aux_sym_c_type_token24] = ACTIONS(88),
    [aux_sym_c_type_token25] = ACTIONS(88),
    [aux_sym_c_type_token26] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(88),
    [sym_comment] = ACTIONS(88),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [aux_sym_array_type_token1] = ACTIONS(92),
    [aux_sym_array_type_token2] = ACTIONS(92),
    [aux_sym_array_type_token3] = ACTIONS(92),
    [aux_sym_array_type_token4] = ACTIONS(92),
    [aux_sym_array_type_token5] = ACTIONS(92),
    [aux_sym_array_type_token6] = ACTIONS(92),
    [aux_sym_array_type_token7] = ACTIONS(92),
    [aux_sym_array_type_token8] = ACTIONS(92),
    [aux_sym_array_type_token9] = ACTIONS(92),
    [aux_sym_array_type_token10] = ACTIONS(92),
    [aux_sym_array_type_token11] = ACTIONS(92),
    [aux_sym_array_type_token12] = ACTIONS(92),
    [aux_sym_array_type_token13] = ACTIONS(92),
    [aux_sym_array_type_token14] = ACTIONS(92),
    [aux_sym_array_type_token15] = ACTIONS(92),
    [aux_sym_array_type_token16] = ACTIONS(92),
    [aux_sym_array_type_token17] = ACTIONS(92),
    [aux_sym_array_type_token18] = ACTIONS(92),
    [aux_sym_array_type_token19] = ACTIONS(92),
    [aux_sym_array_type_token20] = ACTIONS(92),
    [aux_sym_array_type_token21] = ACTIONS(94),
    [aux_sym_array_type_token22] = ACTIONS(92),
    [aux_sym_array_type_token23] = ACTIONS(92),
    [aux_sym_array_type_token24] = ACTIONS(92),
    [aux_sym_c_type_token1] = ACTIONS(92),
    [aux_sym_c_type_token2] = ACTIONS(92),
    [aux_sym_c_type_token3] = ACTIONS(92),
    [aux_sym_c_type_token4] = ACTIONS(92),
    [aux_sym_c_type_token5] = ACTIONS(92),
    [aux_sym_c_type_token6] = ACTIONS(92),
    [aux_sym_c_type_token7] = ACTIONS(92),
    [aux_sym_c_type_token8] = ACTIONS(92),
    [aux_sym_c_type_token9] = ACTIONS(92),
    [aux_sym_c_type_token10] = ACTIONS(92),
    [aux_sym_c_type_token11] = ACTIONS(94),
    [aux_sym_c_type_token12] = ACTIONS(92),
    [aux_sym_c_type_token13] = ACTIONS(92),
    [aux_sym_c_type_token14] = ACTIONS(92),
    [aux_sym_c_type_token15] = ACTIONS(92),
    [aux_sym_c_type_token16] = ACTIONS(92),
    [aux_sym_c_type_token17] = ACTIONS(92),
    [aux_sym_c_type_token18] = ACTIONS(92),
    [aux_sym_c_type_token19] = ACTIONS(92),
    [aux_sym_c_type_token20] = ACTIONS(92),
    [aux_sym_c_type_token21] = ACTIONS(94),
    [aux_sym_c_type_token22] = ACTIONS(92),
    [aux_sym_c_type_token23] = ACTIONS(92),
    [aux_sym_c_type_token24] = ACTIONS(92),
    [aux_sym_c_type_token25] = ACTIONS(92),
    [aux_sym_c_type_token26] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(92),
    [sym_comment] = ACTIONS(92),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym_array_type_token1] = ACTIONS(96),
    [aux_sym_array_type_token2] = ACTIONS(96),
    [aux_sym_array_type_token3] = ACTIONS(96),
    [aux_sym_array_type_token4] = ACTIONS(96),
    [aux_sym_array_type_token5] = ACTIONS(96),
    [aux_sym_array_type_token6] = ACTIONS(96),
    [aux_sym_array_type_token7] = ACTIONS(96),
    [aux_sym_array_type_token8] = ACTIONS(96),
    [aux_sym_array_type_token9] = ACTIONS(96),
    [aux_sym_array_type_token10] = ACTIONS(96),
    [aux_sym_array_type_token11] = ACTIONS(96),
    [aux_sym_array_type_token12] = ACTIONS(96),
    [aux_sym_array_type_token13] = ACTIONS(96),
    [aux_sym_array_type_token14] = ACTIONS(96),
    [aux_sym_array_type_token15] = ACTIONS(96),
    [aux_sym_array_type_token16] = ACTIONS(96),
    [aux_sym_array_type_token17] = ACTIONS(96),
    [aux_sym_array_type_token18] = ACTIONS(96),
    [aux_sym_array_type_token19] = ACTIONS(96),
    [aux_sym_array_type_token20] = ACTIONS(96),
    [aux_sym_array_type_token21] = ACTIONS(98),
    [aux_sym_array_type_token22] = ACTIONS(96),
    [aux_sym_array_type_token23] = ACTIONS(96),
    [aux_sym_array_type_token24] = ACTIONS(96),
    [aux_sym_c_type_token1] = ACTIONS(96),
    [aux_sym_c_type_token2] = ACTIONS(96),
    [aux_sym_c_type_token3] = ACTIONS(96),
    [aux_sym_c_type_token4] = ACTIONS(96),
    [aux_sym_c_type_token5] = ACTIONS(96),
    [aux_sym_c_type_token6] = ACTIONS(96),
    [aux_sym_c_type_token7] = ACTIONS(96),
    [aux_sym_c_type_token8] = ACTIONS(96),
    [aux_sym_c_type_token9] = ACTIONS(96),
    [aux_sym_c_type_token10] = ACTIONS(96),
    [aux_sym_c_type_token11] = ACTIONS(98),
    [aux_sym_c_type_token12] = ACTIONS(96),
    [aux_sym_c_type_token13] = ACTIONS(96),
    [aux_sym_c_type_token14] = ACTIONS(96),
    [aux_sym_c_type_token15] = ACTIONS(96),
    [aux_sym_c_type_token16] = ACTIONS(96),
    [aux_sym_c_type_token17] = ACTIONS(96),
    [aux_sym_c_type_token18] = ACTIONS(96),
    [aux_sym_c_type_token19] = ACTIONS(96),
    [aux_sym_c_type_token20] = ACTIONS(96),
    [aux_sym_c_type_token21] = ACTIONS(98),
    [aux_sym_c_type_token22] = ACTIONS(96),
    [aux_sym_c_type_token23] = ACTIONS(96),
    [aux_sym_c_type_token24] = ACTIONS(96),
    [aux_sym_c_type_token25] = ACTIONS(96),
    [aux_sym_c_type_token26] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(96),
    [sym_comment] = ACTIONS(96),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_array_type_token1] = ACTIONS(100),
    [aux_sym_array_type_token2] = ACTIONS(100),
    [aux_sym_array_type_token3] = ACTIONS(100),
    [aux_sym_array_type_token4] = ACTIONS(100),
    [aux_sym_array_type_token5] = ACTIONS(100),
    [aux_sym_array_type_token6] = ACTIONS(100),
    [aux_sym_array_type_token7] = ACTIONS(100),
    [aux_sym_array_type_token8] = ACTIONS(100),
    [aux_sym_array_type_token9] = ACTIONS(100),
    [aux_sym_array_type_token10] = ACTIONS(100),
    [aux_sym_array_type_token11] = ACTIONS(100),
    [aux_sym_array_type_token12] = ACTIONS(100),
    [aux_sym_array_type_token13] = ACTIONS(100),
    [aux_sym_array_type_token14] = ACTIONS(100),
    [aux_sym_array_type_token15] = ACTIONS(100),
    [aux_sym_array_type_token16] = ACTIONS(100),
    [aux_sym_array_type_token17] = ACTIONS(100),
    [aux_sym_array_type_token18] = ACTIONS(100),
    [aux_sym_array_type_token19] = ACTIONS(100),
    [aux_sym_array_type_token20] = ACTIONS(100),
    [aux_sym_array_type_token21] = ACTIONS(102),
    [aux_sym_array_type_token22] = ACTIONS(100),
    [aux_sym_array_type_token23] = ACTIONS(100),
    [aux_sym_array_type_token24] = ACTIONS(100),
    [aux_sym_c_type_token1] = ACTIONS(100),
    [aux_sym_c_type_token2] = ACTIONS(100),
    [aux_sym_c_type_token3] = ACTIONS(100),
    [aux_sym_c_type_token4] = ACTIONS(100),
    [aux_sym_c_type_token5] = ACTIONS(100),
    [aux_sym_c_type_token6] = ACTIONS(100),
    [aux_sym_c_type_token7] = ACTIONS(100),
    [aux_sym_c_type_token8] = ACTIONS(100),
    [aux_sym_c_type_token9] = ACTIONS(100),
    [aux_sym_c_type_token10] = ACTIONS(100),
    [aux_sym_c_type_token11] = ACTIONS(102),
    [aux_sym_c_type_token12] = ACTIONS(100),
    [aux_sym_c_type_token13] = ACTIONS(100),
    [aux_sym_c_type_token14] = ACTIONS(100),
    [aux_sym_c_type_token15] = ACTIONS(100),
    [aux_sym_c_type_token16] = ACTIONS(100),
    [aux_sym_c_type_token17] = ACTIONS(100),
    [aux_sym_c_type_token18] = ACTIONS(100),
    [aux_sym_c_type_token19] = ACTIONS(100),
    [aux_sym_c_type_token20] = ACTIONS(100),
    [aux_sym_c_type_token21] = ACTIONS(102),
    [aux_sym_c_type_token22] = ACTIONS(100),
    [aux_sym_c_type_token23] = ACTIONS(100),
    [aux_sym_c_type_token24] = ACTIONS(100),
    [aux_sym_c_type_token25] = ACTIONS(100),
    [aux_sym_c_type_token26] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_comment] = ACTIONS(100),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [aux_sym_array_type_token1] = ACTIONS(72),
    [aux_sym_array_type_token2] = ACTIONS(72),
    [aux_sym_array_type_token3] = ACTIONS(72),
    [aux_sym_array_type_token4] = ACTIONS(72),
    [aux_sym_array_type_token5] = ACTIONS(72),
    [aux_sym_array_type_token6] = ACTIONS(72),
    [aux_sym_array_type_token7] = ACTIONS(72),
    [aux_sym_array_type_token8] = ACTIONS(72),
    [aux_sym_array_type_token9] = ACTIONS(72),
    [aux_sym_array_type_token10] = ACTIONS(72),
    [aux_sym_array_type_token11] = ACTIONS(72),
    [aux_sym_array_type_token12] = ACTIONS(72),
    [aux_sym_array_type_token13] = ACTIONS(72),
    [aux_sym_array_type_token14] = ACTIONS(72),
    [aux_sym_array_type_token15] = ACTIONS(72),
    [aux_sym_array_type_token16] = ACTIONS(72),
    [aux_sym_array_type_token17] = ACTIONS(72),
    [aux_sym_array_type_token18] = ACTIONS(72),
    [aux_sym_array_type_token19] = ACTIONS(72),
    [aux_sym_array_type_token20] = ACTIONS(72),
    [aux_sym_array_type_token21] = ACTIONS(74),
    [aux_sym_array_type_token22] = ACTIONS(72),
    [aux_sym_array_type_token23] = ACTIONS(72),
    [aux_sym_array_type_token24] = ACTIONS(72),
    [aux_sym_c_type_token1] = ACTIONS(72),
    [aux_sym_c_type_token2] = ACTIONS(72),
    [aux_sym_c_type_token3] = ACTIONS(72),
    [aux_sym_c_type_token4] = ACTIONS(72),
    [aux_sym_c_type_token5] = ACTIONS(72),
    [aux_sym_c_type_token6] = ACTIONS(72),
    [aux_sym_c_type_token7] = ACTIONS(72),
    [aux_sym_c_type_token8] = ACTIONS(72),
    [aux_sym_c_type_token9] = ACTIONS(72),
    [aux_sym_c_type_token10] = ACTIONS(72),
    [aux_sym_c_type_token11] = ACTIONS(74),
    [aux_sym_c_type_token12] = ACTIONS(72),
    [aux_sym_c_type_token13] = ACTIONS(72),
    [aux_sym_c_type_token14] = ACTIONS(72),
    [aux_sym_c_type_token15] = ACTIONS(72),
    [aux_sym_c_type_token16] = ACTIONS(72),
    [aux_sym_c_type_token17] = ACTIONS(72),
    [aux_sym_c_type_token18] = ACTIONS(72),
    [aux_sym_c_type_token19] = ACTIONS(72),
    [aux_sym_c_type_token20] = ACTIONS(72),
    [aux_sym_c_type_token21] = ACTIONS(74),
    [aux_sym_c_type_token22] = ACTIONS(72),
    [aux_sym_c_type_token23] = ACTIONS(72),
    [aux_sym_c_type_token24] = ACTIONS(72),
    [aux_sym_c_type_token25] = ACTIONS(72),
    [aux_sym_c_type_token26] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(72),
    [sym_comment] = ACTIONS(72),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [aux_sym_array_type_token1] = ACTIONS(104),
    [aux_sym_array_type_token2] = ACTIONS(104),
    [aux_sym_array_type_token3] = ACTIONS(104),
    [aux_sym_array_type_token4] = ACTIONS(104),
    [aux_sym_array_type_token5] = ACTIONS(104),
    [aux_sym_array_type_token6] = ACTIONS(104),
    [aux_sym_array_type_token7] = ACTIONS(104),
    [aux_sym_array_type_token8] = ACTIONS(104),
    [aux_sym_array_type_token9] = ACTIONS(104),
    [aux_sym_array_type_token10] = ACTIONS(104),
    [aux_sym_array_type_token11] = ACTIONS(104),
    [aux_sym_array_type_token12] = ACTIONS(104),
    [aux_sym_array_type_token13] = ACTIONS(104),
    [aux_sym_array_type_token14] = ACTIONS(104),
    [aux_sym_array_type_token15] = ACTIONS(104),
    [aux_sym_array_type_token16] = ACTIONS(104),
    [aux_sym_array_type_token17] = ACTIONS(104),
    [aux_sym_array_type_token18] = ACTIONS(104),
    [aux_sym_array_type_token19] = ACTIONS(104),
    [aux_sym_array_type_token20] = ACTIONS(104),
    [aux_sym_array_type_token21] = ACTIONS(106),
    [aux_sym_array_type_token22] = ACTIONS(104),
    [aux_sym_array_type_token23] = ACTIONS(104),
    [aux_sym_array_type_token24] = ACTIONS(104),
    [aux_sym_c_type_token1] = ACTIONS(104),
    [aux_sym_c_type_token2] = ACTIONS(104),
    [aux_sym_c_type_token3] = ACTIONS(104),
    [aux_sym_c_type_token4] = ACTIONS(104),
    [aux_sym_c_type_token5] = ACTIONS(104),
    [aux_sym_c_type_token6] = ACTIONS(104),
    [aux_sym_c_type_token7] = ACTIONS(104),
    [aux_sym_c_type_token8] = ACTIONS(104),
    [aux_sym_c_type_token9] = ACTIONS(104),
    [aux_sym_c_type_token10] = ACTIONS(104),
    [aux_sym_c_type_token11] = ACTIONS(106),
    [aux_sym_c_type_token12] = ACTIONS(104),
    [aux_sym_c_type_token13] = ACTIONS(104),
    [aux_sym_c_type_token14] = ACTIONS(104),
    [aux_sym_c_type_token15] = ACTIONS(104),
    [aux_sym_c_type_token16] = ACTIONS(104),
    [aux_sym_c_type_token17] = ACTIONS(104),
    [aux_sym_c_type_token18] = ACTIONS(104),
    [aux_sym_c_type_token19] = ACTIONS(104),
    [aux_sym_c_type_token20] = ACTIONS(104),
    [aux_sym_c_type_token21] = ACTIONS(106),
    [aux_sym_c_type_token22] = ACTIONS(104),
    [aux_sym_c_type_token23] = ACTIONS(104),
    [aux_sym_c_type_token24] = ACTIONS(104),
    [aux_sym_c_type_token25] = ACTIONS(104),
    [aux_sym_c_type_token26] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_comment] = ACTIONS(104),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [aux_sym_array_type_token1] = ACTIONS(108),
    [aux_sym_array_type_token2] = ACTIONS(108),
    [aux_sym_array_type_token3] = ACTIONS(108),
    [aux_sym_array_type_token4] = ACTIONS(108),
    [aux_sym_array_type_token5] = ACTIONS(108),
    [aux_sym_array_type_token6] = ACTIONS(108),
    [aux_sym_array_type_token7] = ACTIONS(108),
    [aux_sym_array_type_token8] = ACTIONS(108),
    [aux_sym_array_type_token9] = ACTIONS(108),
    [aux_sym_array_type_token10] = ACTIONS(108),
    [aux_sym_array_type_token11] = ACTIONS(108),
    [aux_sym_array_type_token12] = ACTIONS(108),
    [aux_sym_array_type_token13] = ACTIONS(108),
    [aux_sym_array_type_token14] = ACTIONS(108),
    [aux_sym_array_type_token15] = ACTIONS(108),
    [aux_sym_array_type_token16] = ACTIONS(108),
    [aux_sym_array_type_token17] = ACTIONS(108),
    [aux_sym_array_type_token18] = ACTIONS(108),
    [aux_sym_array_type_token19] = ACTIONS(108),
    [aux_sym_array_type_token20] = ACTIONS(108),
    [aux_sym_array_type_token21] = ACTIONS(110),
    [aux_sym_array_type_token22] = ACTIONS(108),
    [aux_sym_array_type_token23] = ACTIONS(108),
    [aux_sym_array_type_token24] = ACTIONS(108),
    [aux_sym_c_type_token1] = ACTIONS(108),
    [aux_sym_c_type_token2] = ACTIONS(108),
    [aux_sym_c_type_token3] = ACTIONS(108),
    [aux_sym_c_type_token4] = ACTIONS(108),
    [aux_sym_c_type_token5] = ACTIONS(108),
    [aux_sym_c_type_token6] = ACTIONS(108),
    [aux_sym_c_type_token7] = ACTIONS(108),
    [aux_sym_c_type_token8] = ACTIONS(108),
    [aux_sym_c_type_token9] = ACTIONS(108),
    [aux_sym_c_type_token10] = ACTIONS(108),
    [aux_sym_c_type_token11] = ACTIONS(110),
    [aux_sym_c_type_token12] = ACTIONS(108),
    [aux_sym_c_type_token13] = ACTIONS(108),
    [aux_sym_c_type_token14] = ACTIONS(108),
    [aux_sym_c_type_token15] = ACTIONS(108),
    [aux_sym_c_type_token16] = ACTIONS(108),
    [aux_sym_c_type_token17] = ACTIONS(108),
    [aux_sym_c_type_token18] = ACTIONS(108),
    [aux_sym_c_type_token19] = ACTIONS(108),
    [aux_sym_c_type_token20] = ACTIONS(108),
    [aux_sym_c_type_token21] = ACTIONS(110),
    [aux_sym_c_type_token22] = ACTIONS(108),
    [aux_sym_c_type_token23] = ACTIONS(108),
    [aux_sym_c_type_token24] = ACTIONS(108),
    [aux_sym_c_type_token25] = ACTIONS(108),
    [aux_sym_c_type_token26] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(108),
    [sym_comment] = ACTIONS(108),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [aux_sym_array_type_token1] = ACTIONS(112),
    [aux_sym_array_type_token2] = ACTIONS(112),
    [aux_sym_array_type_token3] = ACTIONS(112),
    [aux_sym_array_type_token4] = ACTIONS(112),
    [aux_sym_array_type_token5] = ACTIONS(112),
    [aux_sym_array_type_token6] = ACTIONS(112),
    [aux_sym_array_type_token7] = ACTIONS(112),
    [aux_sym_array_type_token8] = ACTIONS(112),
    [aux_sym_array_type_token9] = ACTIONS(112),
    [aux_sym_array_type_token10] = ACTIONS(112),
    [aux_sym_array_type_token11] = ACTIONS(112),
    [aux_sym_array_type_token12] = ACTIONS(112),
    [aux_sym_array_type_token13] = ACTIONS(112),
    [aux_sym_array_type_token14] = ACTIONS(112),
    [aux_sym_array_type_token15] = ACTIONS(112),
    [aux_sym_array_type_token16] = ACTIONS(112),
    [aux_sym_array_type_token17] = ACTIONS(112),
    [aux_sym_array_type_token18] = ACTIONS(112),
    [aux_sym_array_type_token19] = ACTIONS(112),
    [aux_sym_array_type_token20] = ACTIONS(112),
    [aux_sym_array_type_token21] = ACTIONS(114),
    [aux_sym_array_type_token22] = ACTIONS(112),
    [aux_sym_array_type_token23] = ACTIONS(112),
    [aux_sym_array_type_token24] = ACTIONS(112),
    [aux_sym_c_type_token1] = ACTIONS(112),
    [aux_sym_c_type_token2] = ACTIONS(112),
    [aux_sym_c_type_token3] = ACTIONS(112),
    [aux_sym_c_type_token4] = ACTIONS(112),
    [aux_sym_c_type_token5] = ACTIONS(112),
    [aux_sym_c_type_token6] = ACTIONS(112),
    [aux_sym_c_type_token7] = ACTIONS(112),
    [aux_sym_c_type_token8] = ACTIONS(112),
    [aux_sym_c_type_token9] = ACTIONS(112),
    [aux_sym_c_type_token10] = ACTIONS(112),
    [aux_sym_c_type_token11] = ACTIONS(114),
    [aux_sym_c_type_token12] = ACTIONS(112),
    [aux_sym_c_type_token13] = ACTIONS(112),
    [aux_sym_c_type_token14] = ACTIONS(112),
    [aux_sym_c_type_token15] = ACTIONS(112),
    [aux_sym_c_type_token16] = ACTIONS(112),
    [aux_sym_c_type_token17] = ACTIONS(112),
    [aux_sym_c_type_token18] = ACTIONS(112),
    [aux_sym_c_type_token19] = ACTIONS(112),
    [aux_sym_c_type_token20] = ACTIONS(112),
    [aux_sym_c_type_token21] = ACTIONS(114),
    [aux_sym_c_type_token22] = ACTIONS(112),
    [aux_sym_c_type_token23] = ACTIONS(112),
    [aux_sym_c_type_token24] = ACTIONS(112),
    [aux_sym_c_type_token25] = ACTIONS(112),
    [aux_sym_c_type_token26] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(112),
    [sym_comment] = ACTIONS(112),
  },
  [20] = {
    [sym_declaration_argument] = STATE(48),
    [sym_identifier] = STATE(42),
    [sym_interprocess_variable] = STATE(42),
    [sym_local_variable] = STATE(42),
    [sym_parameter] = STATE(42),
    [sym_integer_constant] = STATE(48),
    [aux_sym_identifier_token1] = ACTIONS(116),
    [anon_sym_LT_GT] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [aux_sym_parameter_token1] = ACTIONS(122),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_declaration_argument_list] = STATE(49),
    [sym_declaration_argument] = STATE(31),
    [sym_identifier] = STATE(42),
    [sym_interprocess_variable] = STATE(42),
    [sym_local_variable] = STATE(42),
    [sym_parameter] = STATE(42),
    [anon_sym_RPAREN] = ACTIONS(124),
    [aux_sym_identifier_token1] = ACTIONS(116),
    [anon_sym_LT_GT] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_declaration_argument] = STATE(45),
    [sym_identifier] = STATE(42),
    [sym_interprocess_variable] = STATE(42),
    [sym_local_variable] = STATE(42),
    [sym_parameter] = STATE(42),
    [aux_sym_identifier_token1] = ACTIONS(116),
    [anon_sym_LT_GT] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_declaration_argument] = STATE(40),
    [sym_identifier] = STATE(42),
    [sym_interprocess_variable] = STATE(42),
    [sym_local_variable] = STATE(42),
    [sym_parameter] = STATE(42),
    [aux_sym_identifier_token1] = ACTIONS(116),
    [anon_sym_LT_GT] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [aux_sym_identifier_repeat1] = STATE(26),
    [anon_sym_RPAREN] = ACTIONS(58),
    [sym_argument_separator] = ACTIONS(58),
    [aux_sym_identifier_token2] = ACTIONS(126),
    [sym_storage_suffix] = ACTIONS(58),
    [anon_sym_RBRACK] = ACTIONS(58),
    [sym_comment] = ACTIONS(128),
  },
  [25] = {
    [aux_sym_identifier_repeat1] = STATE(25),
    [anon_sym_RPAREN] = ACTIONS(45),
    [sym_argument_separator] = ACTIONS(45),
    [aux_sym_identifier_token2] = ACTIONS(130),
    [sym_storage_suffix] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(45),
    [sym_comment] = ACTIONS(128),
  },
  [26] = {
    [aux_sym_identifier_repeat1] = STATE(25),
    [anon_sym_RPAREN] = ACTIONS(52),
    [sym_argument_separator] = ACTIONS(52),
    [aux_sym_identifier_token2] = ACTIONS(133),
    [sym_storage_suffix] = ACTIONS(52),
    [anon_sym_RBRACK] = ACTIONS(52),
    [sym_comment] = ACTIONS(128),
  },
  [27] = {
    [sym_identifier] = STATE(35),
    [aux_sym_identifier_token1] = ACTIONS(116),
    [aux_sym_parameter_token1] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_array_declaration_arguments] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(137),
    [sym_command_suffix] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_c_declaration_arguments] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(141),
    [sym_command_suffix] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [aux_sym_declaration_argument_list_repeat1] = STATE(30),
    [anon_sym_RPAREN] = ACTIONS(145),
    [sym_argument_separator] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [aux_sym_declaration_argument_list_repeat1] = STATE(32),
    [anon_sym_RPAREN] = ACTIONS(150),
    [sym_argument_separator] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [aux_sym_declaration_argument_list_repeat1] = STATE(30),
    [anon_sym_RPAREN] = ACTIONS(154),
    [sym_argument_separator] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_array_declaration_arguments] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [anon_sym_RPAREN] = ACTIONS(156),
    [sym_argument_separator] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [anon_sym_RPAREN] = ACTIONS(158),
    [sym_argument_separator] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_c_declaration_arguments] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [anon_sym_RPAREN] = ACTIONS(160),
    [sym_argument_separator] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym_storage_suffix] = ACTIONS(162),
    [anon_sym_RBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_identifier] = STATE(37),
    [aux_sym_identifier_token1] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [anon_sym_RPAREN] = ACTIONS(145),
    [sym_argument_separator] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [anon_sym_LPAREN] = ACTIONS(166),
    [sym_command_suffix] = ACTIONS(166),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [anon_sym_RPAREN] = ACTIONS(168),
    [sym_argument_separator] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [sym_identifier] = STATE(38),
    [aux_sym_identifier_token1] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(170),
    [sym_command_suffix] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [sym_argument_separator] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [anon_sym_RBRACK] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [anon_sym_RPAREN] = ACTIONS(176),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [anon_sym_RPAREN] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [anon_sym_RPAREN] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_code, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(41),
  [9] = {.count = 1, .reusable = false}, SHIFT(41),
  [11] = {.count = 1, .reusable = true}, SHIFT(44),
  [13] = {.count = 1, .reusable = false}, SHIFT(44),
  [15] = {.count = 1, .reusable = true}, SHIFT(43),
  [17] = {.count = 1, .reusable = true}, SHIFT(3),
  [19] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2),
  [21] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(41),
  [24] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(41),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(44),
  [30] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(44),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(43),
  [36] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(2),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_source_code, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(2),
  [43] = {.count = 1, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2),
  [45] = {.count = 1, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2),
  [47] = {.count = 2, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(4),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 2),
  [52] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 2),
  [54] = {.count = 1, .reusable = false}, SHIFT(4),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [58] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [60] = {.count = 1, .reusable = false}, SHIFT(5),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_table, 3),
  [64] = {.count = 1, .reusable = false}, REDUCE(sym_table, 3),
  [66] = {.count = 1, .reusable = false}, SHIFT(6),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_table, 4),
  [70] = {.count = 1, .reusable = false}, REDUCE(sym_table, 4),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_field, 5),
  [74] = {.count = 1, .reusable = false}, REDUCE(sym_field, 5),
  [76] = {.count = 1, .reusable = true}, SHIFT(18),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4),
  [80] = {.count = 1, .reusable = false}, REDUCE(sym_field, 4),
  [82] = {.count = 1, .reusable = true}, SHIFT(16),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_array_declaration_arguments, 5),
  [86] = {.count = 1, .reusable = false}, REDUCE(sym_array_declaration_arguments, 5),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_array_declaration, 2),
  [90] = {.count = 1, .reusable = false}, REDUCE(sym_array_declaration, 2),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_array_declaration, 3),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym_array_declaration, 3),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration, 2),
  [98] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration, 2),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration_arguments, 3),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration_arguments, 3),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration, 3),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration, 3),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_field, 6),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_field, 6),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration_arguments, 2),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration_arguments, 2),
  [116] = {.count = 1, .reusable = true}, SHIFT(24),
  [118] = {.count = 1, .reusable = true}, SHIFT(39),
  [120] = {.count = 1, .reusable = true}, SHIFT(27),
  [122] = {.count = 1, .reusable = true}, SHIFT(47),
  [124] = {.count = 1, .reusable = true}, SHIFT(19),
  [126] = {.count = 1, .reusable = false}, SHIFT(26),
  [128] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [130] = {.count = 2, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(25),
  [133] = {.count = 1, .reusable = false}, SHIFT(25),
  [135] = {.count = 1, .reusable = true}, SHIFT(34),
  [137] = {.count = 1, .reusable = true}, SHIFT(22),
  [139] = {.count = 1, .reusable = true}, SHIFT(33),
  [141] = {.count = 1, .reusable = true}, SHIFT(21),
  [143] = {.count = 1, .reusable = true}, SHIFT(36),
  [145] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_argument_list_repeat1, 2),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_argument_list_repeat1, 2), SHIFT_REPEAT(23),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_argument_list, 1),
  [152] = {.count = 1, .reusable = true}, SHIFT(23),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_argument_list, 2),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_local_variable, 2),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_interprocess_variable, 2),
  [162] = {.count = 1, .reusable = true}, SHIFT(46),
  [164] = {.count = 1, .reusable = true}, SHIFT(7),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_array_type, 1),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_argument, 1),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_c_type, 1),
  [172] = {.count = 1, .reusable = true}, SHIFT(20),
  [174] = {.count = 1, .reusable = true}, SHIFT(8),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_integer_constant, 1),
  [178] = {.count = 1, .reusable = true}, SHIFT(11),
  [180] = {.count = 1, .reusable = true}, SHIFT(15),
  [182] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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

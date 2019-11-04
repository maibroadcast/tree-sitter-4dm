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
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
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
  sym_source_code = 63,
  sym__token = 64,
  sym_array_declaration = 65,
  sym_c_declaration = 66,
  sym_array_type = 67,
  sym_c_type = 68,
  sym_array_declaration_arguments = 69,
  sym_c_declaration_arguments = 70,
  sym_declaration_argument_list = 71,
  sym_declaration_argument = 72,
  sym_identifier = 73,
  sym_interprocess_variable = 74,
  sym_local_variable = 75,
  sym_parameter = 76,
  sym_integer_constant = 77,
  sym_table = 78,
  sym_field = 79,
  aux_sym_source_code_repeat1 = 80,
  aux_sym_declaration_argument_list_repeat1 = 81,
  aux_sym_identifier_repeat1 = 82,
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
      if (lookahead == 0) ADVANCE(242);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == ')') ADVANCE(294);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(295);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '[') ADVANCE(313);
      if (lookahead == ']') ADVANCE(314);
      if (lookahead == '_') ADVANCE(299);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(297);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(242);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == ':') ADVANCE(240);
      if (lookahead == '[') ADVANCE(313);
      if (lookahead == '_') ADVANCE(306);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(304);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(202);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == ')') ADVANCE(294);
      if (lookahead == ':') ADVANCE(240);
      if (lookahead == ';') ADVANCE(295);
      if (lookahead == ']') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == ')') ADVANCE(294);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(308);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(137);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(11);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(194);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(221);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(127);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(105);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(128);
      END_STATE();
    case 37:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(119);
      END_STATE();
    case 38:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(274);
      END_STATE();
    case 39:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(249);
      END_STATE();
    case 40:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(260);
      END_STATE();
    case 41:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(129);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(42);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 42:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(121);
      END_STATE();
    case 43:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(130);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(44);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(177);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 45:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(138);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(204);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 92:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(288);
      END_STATE();
    case 93:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(283);
      END_STATE();
    case 94:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(266);
      END_STATE();
    case 95:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(258);
      END_STATE();
    case 96:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 97:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 98:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 99:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 100:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 101:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 102:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(287);
      END_STATE();
    case 103:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 104:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 116:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 117:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 119:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(55);
      END_STATE();
    case 120:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(81);
      END_STATE();
    case 121:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(89);
      END_STATE();
    case 122:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 123:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 124:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 125:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 126:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 127:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 128:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 129:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 130:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(170);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 131:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 132:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 133:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 134:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 135:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 136:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 137:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 140:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 141:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 142:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 143:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 144:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 145:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 150:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 152:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 154:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 155:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 156:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 166:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 167:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 168:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 169:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 171:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 172:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 173:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 174:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 175:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 176:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 177:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 178:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 179:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 180:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 181:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(270);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 185:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 186:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 187:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 189:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 190:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 191:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 192:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 193:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 194:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 195:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 202:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(226);
      END_STATE();
    case 203:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      END_STATE();
    case 204:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 205:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(273);
      END_STATE();
    case 206:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      END_STATE();
    case 207:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 208:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(247);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 214:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 215:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 216:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 217:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 218:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 219:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 220:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 221:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      END_STATE();
    case 222:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 223:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 224:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 225:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 226:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 227:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 228:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 229:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 230:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 231:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 232:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 233:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 234:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 235:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(203);
      END_STATE();
    case 236:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(207);
      END_STATE();
    case 237:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(219);
      END_STATE();
    case 238:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 239:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(4);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_array_type_token2);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_array_type_token3);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_array_type_token4);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_array_type_token5);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_array_type_token6);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_array_type_token7);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_array_type_token8);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_array_type_token9);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_array_type_token10);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_array_type_token11);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_array_type_token12);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_array_type_token13);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_array_type_token14);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_array_type_token15);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_array_type_token16);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_array_type_token17);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_array_type_token18);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_array_type_token19);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_array_type_token20);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_array_type_token21);
      if (lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_array_type_token22);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_array_type_token23);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_array_type_token24);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_c_type_token1);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_c_type_token2);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_c_type_token3);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_c_type_token4);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_c_type_token5);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_c_type_token6);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_c_type_token7);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_c_type_token8);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_c_type_token9);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_c_type_token10);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_c_type_token11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_c_type_token12);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_c_type_token13);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_c_type_token14);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_c_type_token15);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_c_type_token16);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_c_type_token17);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_c_type_token18);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_c_type_token19);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_c_type_token20);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_c_type_token21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_c_type_token22);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_c_type_token23);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_c_type_token24);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_c_type_token25);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_c_type_token26);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_argument_separator);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == '_') ADVANCE(306);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(304);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == ' ') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_command_suffix);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_storage_suffix);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_array_type_token1] = ACTIONS(5),
    [aux_sym_array_type_token2] = ACTIONS(5),
    [aux_sym_array_type_token3] = ACTIONS(5),
    [aux_sym_array_type_token4] = ACTIONS(5),
    [aux_sym_array_type_token5] = ACTIONS(5),
    [aux_sym_array_type_token6] = ACTIONS(5),
    [aux_sym_array_type_token7] = ACTIONS(5),
    [aux_sym_array_type_token8] = ACTIONS(5),
    [aux_sym_array_type_token9] = ACTIONS(5),
    [aux_sym_array_type_token10] = ACTIONS(5),
    [aux_sym_array_type_token11] = ACTIONS(5),
    [aux_sym_array_type_token12] = ACTIONS(5),
    [aux_sym_array_type_token13] = ACTIONS(5),
    [aux_sym_array_type_token14] = ACTIONS(5),
    [aux_sym_array_type_token15] = ACTIONS(5),
    [aux_sym_array_type_token16] = ACTIONS(5),
    [aux_sym_array_type_token17] = ACTIONS(5),
    [aux_sym_array_type_token18] = ACTIONS(5),
    [aux_sym_array_type_token19] = ACTIONS(5),
    [aux_sym_array_type_token20] = ACTIONS(5),
    [aux_sym_array_type_token21] = ACTIONS(7),
    [aux_sym_array_type_token22] = ACTIONS(5),
    [aux_sym_array_type_token23] = ACTIONS(5),
    [aux_sym_array_type_token24] = ACTIONS(5),
    [aux_sym_c_type_token1] = ACTIONS(9),
    [aux_sym_c_type_token2] = ACTIONS(9),
    [aux_sym_c_type_token3] = ACTIONS(9),
    [aux_sym_c_type_token4] = ACTIONS(9),
    [aux_sym_c_type_token5] = ACTIONS(9),
    [aux_sym_c_type_token6] = ACTIONS(9),
    [aux_sym_c_type_token7] = ACTIONS(9),
    [aux_sym_c_type_token8] = ACTIONS(9),
    [aux_sym_c_type_token9] = ACTIONS(9),
    [aux_sym_c_type_token10] = ACTIONS(9),
    [aux_sym_c_type_token11] = ACTIONS(11),
    [aux_sym_c_type_token12] = ACTIONS(9),
    [aux_sym_c_type_token13] = ACTIONS(9),
    [aux_sym_c_type_token14] = ACTIONS(9),
    [aux_sym_c_type_token15] = ACTIONS(9),
    [aux_sym_c_type_token16] = ACTIONS(9),
    [aux_sym_c_type_token17] = ACTIONS(9),
    [aux_sym_c_type_token18] = ACTIONS(9),
    [aux_sym_c_type_token19] = ACTIONS(9),
    [aux_sym_c_type_token20] = ACTIONS(9),
    [aux_sym_c_type_token21] = ACTIONS(11),
    [aux_sym_c_type_token22] = ACTIONS(9),
    [aux_sym_c_type_token23] = ACTIONS(9),
    [aux_sym_c_type_token24] = ACTIONS(9),
    [aux_sym_c_type_token25] = ACTIONS(9),
    [aux_sym_c_type_token26] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(13),
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
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_array_type_token1] = ACTIONS(17),
    [aux_sym_array_type_token2] = ACTIONS(17),
    [aux_sym_array_type_token3] = ACTIONS(17),
    [aux_sym_array_type_token4] = ACTIONS(17),
    [aux_sym_array_type_token5] = ACTIONS(17),
    [aux_sym_array_type_token6] = ACTIONS(17),
    [aux_sym_array_type_token7] = ACTIONS(17),
    [aux_sym_array_type_token8] = ACTIONS(17),
    [aux_sym_array_type_token9] = ACTIONS(17),
    [aux_sym_array_type_token10] = ACTIONS(17),
    [aux_sym_array_type_token11] = ACTIONS(17),
    [aux_sym_array_type_token12] = ACTIONS(17),
    [aux_sym_array_type_token13] = ACTIONS(17),
    [aux_sym_array_type_token14] = ACTIONS(17),
    [aux_sym_array_type_token15] = ACTIONS(17),
    [aux_sym_array_type_token16] = ACTIONS(17),
    [aux_sym_array_type_token17] = ACTIONS(17),
    [aux_sym_array_type_token18] = ACTIONS(17),
    [aux_sym_array_type_token19] = ACTIONS(17),
    [aux_sym_array_type_token20] = ACTIONS(17),
    [aux_sym_array_type_token21] = ACTIONS(20),
    [aux_sym_array_type_token22] = ACTIONS(17),
    [aux_sym_array_type_token23] = ACTIONS(17),
    [aux_sym_array_type_token24] = ACTIONS(17),
    [aux_sym_c_type_token1] = ACTIONS(23),
    [aux_sym_c_type_token2] = ACTIONS(23),
    [aux_sym_c_type_token3] = ACTIONS(23),
    [aux_sym_c_type_token4] = ACTIONS(23),
    [aux_sym_c_type_token5] = ACTIONS(23),
    [aux_sym_c_type_token6] = ACTIONS(23),
    [aux_sym_c_type_token7] = ACTIONS(23),
    [aux_sym_c_type_token8] = ACTIONS(23),
    [aux_sym_c_type_token9] = ACTIONS(23),
    [aux_sym_c_type_token10] = ACTIONS(23),
    [aux_sym_c_type_token11] = ACTIONS(26),
    [aux_sym_c_type_token12] = ACTIONS(23),
    [aux_sym_c_type_token13] = ACTIONS(23),
    [aux_sym_c_type_token14] = ACTIONS(23),
    [aux_sym_c_type_token15] = ACTIONS(23),
    [aux_sym_c_type_token16] = ACTIONS(23),
    [aux_sym_c_type_token17] = ACTIONS(23),
    [aux_sym_c_type_token18] = ACTIONS(23),
    [aux_sym_c_type_token19] = ACTIONS(23),
    [aux_sym_c_type_token20] = ACTIONS(23),
    [aux_sym_c_type_token21] = ACTIONS(26),
    [aux_sym_c_type_token22] = ACTIONS(23),
    [aux_sym_c_type_token23] = ACTIONS(23),
    [aux_sym_c_type_token24] = ACTIONS(23),
    [aux_sym_c_type_token25] = ACTIONS(23),
    [aux_sym_c_type_token26] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(29),
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
    [ts_builtin_sym_end] = ACTIONS(32),
    [aux_sym_array_type_token1] = ACTIONS(5),
    [aux_sym_array_type_token2] = ACTIONS(5),
    [aux_sym_array_type_token3] = ACTIONS(5),
    [aux_sym_array_type_token4] = ACTIONS(5),
    [aux_sym_array_type_token5] = ACTIONS(5),
    [aux_sym_array_type_token6] = ACTIONS(5),
    [aux_sym_array_type_token7] = ACTIONS(5),
    [aux_sym_array_type_token8] = ACTIONS(5),
    [aux_sym_array_type_token9] = ACTIONS(5),
    [aux_sym_array_type_token10] = ACTIONS(5),
    [aux_sym_array_type_token11] = ACTIONS(5),
    [aux_sym_array_type_token12] = ACTIONS(5),
    [aux_sym_array_type_token13] = ACTIONS(5),
    [aux_sym_array_type_token14] = ACTIONS(5),
    [aux_sym_array_type_token15] = ACTIONS(5),
    [aux_sym_array_type_token16] = ACTIONS(5),
    [aux_sym_array_type_token17] = ACTIONS(5),
    [aux_sym_array_type_token18] = ACTIONS(5),
    [aux_sym_array_type_token19] = ACTIONS(5),
    [aux_sym_array_type_token20] = ACTIONS(5),
    [aux_sym_array_type_token21] = ACTIONS(7),
    [aux_sym_array_type_token22] = ACTIONS(5),
    [aux_sym_array_type_token23] = ACTIONS(5),
    [aux_sym_array_type_token24] = ACTIONS(5),
    [aux_sym_c_type_token1] = ACTIONS(9),
    [aux_sym_c_type_token2] = ACTIONS(9),
    [aux_sym_c_type_token3] = ACTIONS(9),
    [aux_sym_c_type_token4] = ACTIONS(9),
    [aux_sym_c_type_token5] = ACTIONS(9),
    [aux_sym_c_type_token6] = ACTIONS(9),
    [aux_sym_c_type_token7] = ACTIONS(9),
    [aux_sym_c_type_token8] = ACTIONS(9),
    [aux_sym_c_type_token9] = ACTIONS(9),
    [aux_sym_c_type_token10] = ACTIONS(9),
    [aux_sym_c_type_token11] = ACTIONS(11),
    [aux_sym_c_type_token12] = ACTIONS(9),
    [aux_sym_c_type_token13] = ACTIONS(9),
    [aux_sym_c_type_token14] = ACTIONS(9),
    [aux_sym_c_type_token15] = ACTIONS(9),
    [aux_sym_c_type_token16] = ACTIONS(9),
    [aux_sym_c_type_token17] = ACTIONS(9),
    [aux_sym_c_type_token18] = ACTIONS(9),
    [aux_sym_c_type_token19] = ACTIONS(9),
    [aux_sym_c_type_token20] = ACTIONS(9),
    [aux_sym_c_type_token21] = ACTIONS(11),
    [aux_sym_c_type_token22] = ACTIONS(9),
    [aux_sym_c_type_token23] = ACTIONS(9),
    [aux_sym_c_type_token24] = ACTIONS(9),
    [aux_sym_c_type_token25] = ACTIONS(9),
    [aux_sym_c_type_token26] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(13),
  },
  [4] = {
    [aux_sym_identifier_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(34),
    [aux_sym_array_type_token1] = ACTIONS(36),
    [aux_sym_array_type_token2] = ACTIONS(36),
    [aux_sym_array_type_token3] = ACTIONS(36),
    [aux_sym_array_type_token4] = ACTIONS(36),
    [aux_sym_array_type_token5] = ACTIONS(36),
    [aux_sym_array_type_token6] = ACTIONS(36),
    [aux_sym_array_type_token7] = ACTIONS(36),
    [aux_sym_array_type_token8] = ACTIONS(36),
    [aux_sym_array_type_token9] = ACTIONS(36),
    [aux_sym_array_type_token10] = ACTIONS(36),
    [aux_sym_array_type_token11] = ACTIONS(36),
    [aux_sym_array_type_token12] = ACTIONS(36),
    [aux_sym_array_type_token13] = ACTIONS(36),
    [aux_sym_array_type_token14] = ACTIONS(36),
    [aux_sym_array_type_token15] = ACTIONS(36),
    [aux_sym_array_type_token16] = ACTIONS(36),
    [aux_sym_array_type_token17] = ACTIONS(36),
    [aux_sym_array_type_token18] = ACTIONS(36),
    [aux_sym_array_type_token19] = ACTIONS(36),
    [aux_sym_array_type_token20] = ACTIONS(36),
    [aux_sym_array_type_token21] = ACTIONS(36),
    [aux_sym_array_type_token22] = ACTIONS(36),
    [aux_sym_array_type_token23] = ACTIONS(36),
    [aux_sym_array_type_token24] = ACTIONS(36),
    [aux_sym_c_type_token1] = ACTIONS(36),
    [aux_sym_c_type_token2] = ACTIONS(36),
    [aux_sym_c_type_token3] = ACTIONS(36),
    [aux_sym_c_type_token4] = ACTIONS(36),
    [aux_sym_c_type_token5] = ACTIONS(36),
    [aux_sym_c_type_token6] = ACTIONS(36),
    [aux_sym_c_type_token7] = ACTIONS(36),
    [aux_sym_c_type_token8] = ACTIONS(36),
    [aux_sym_c_type_token9] = ACTIONS(36),
    [aux_sym_c_type_token10] = ACTIONS(36),
    [aux_sym_c_type_token11] = ACTIONS(36),
    [aux_sym_c_type_token12] = ACTIONS(36),
    [aux_sym_c_type_token13] = ACTIONS(36),
    [aux_sym_c_type_token14] = ACTIONS(36),
    [aux_sym_c_type_token15] = ACTIONS(36),
    [aux_sym_c_type_token16] = ACTIONS(36),
    [aux_sym_c_type_token17] = ACTIONS(36),
    [aux_sym_c_type_token18] = ACTIONS(36),
    [aux_sym_c_type_token19] = ACTIONS(36),
    [aux_sym_c_type_token20] = ACTIONS(36),
    [aux_sym_c_type_token21] = ACTIONS(36),
    [aux_sym_c_type_token22] = ACTIONS(36),
    [aux_sym_c_type_token23] = ACTIONS(36),
    [aux_sym_c_type_token24] = ACTIONS(36),
    [aux_sym_c_type_token25] = ACTIONS(36),
    [aux_sym_c_type_token26] = ACTIONS(36),
    [aux_sym_identifier_token2] = ACTIONS(38),
    [sym_storage_suffix] = ACTIONS(36),
    [anon_sym_LBRACK] = ACTIONS(36),
  },
  [5] = {
    [aux_sym_identifier_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(41),
    [aux_sym_array_type_token1] = ACTIONS(43),
    [aux_sym_array_type_token2] = ACTIONS(43),
    [aux_sym_array_type_token3] = ACTIONS(43),
    [aux_sym_array_type_token4] = ACTIONS(43),
    [aux_sym_array_type_token5] = ACTIONS(43),
    [aux_sym_array_type_token6] = ACTIONS(43),
    [aux_sym_array_type_token7] = ACTIONS(43),
    [aux_sym_array_type_token8] = ACTIONS(43),
    [aux_sym_array_type_token9] = ACTIONS(43),
    [aux_sym_array_type_token10] = ACTIONS(43),
    [aux_sym_array_type_token11] = ACTIONS(43),
    [aux_sym_array_type_token12] = ACTIONS(43),
    [aux_sym_array_type_token13] = ACTIONS(43),
    [aux_sym_array_type_token14] = ACTIONS(43),
    [aux_sym_array_type_token15] = ACTIONS(43),
    [aux_sym_array_type_token16] = ACTIONS(43),
    [aux_sym_array_type_token17] = ACTIONS(43),
    [aux_sym_array_type_token18] = ACTIONS(43),
    [aux_sym_array_type_token19] = ACTIONS(43),
    [aux_sym_array_type_token20] = ACTIONS(43),
    [aux_sym_array_type_token21] = ACTIONS(43),
    [aux_sym_array_type_token22] = ACTIONS(43),
    [aux_sym_array_type_token23] = ACTIONS(43),
    [aux_sym_array_type_token24] = ACTIONS(43),
    [aux_sym_c_type_token1] = ACTIONS(43),
    [aux_sym_c_type_token2] = ACTIONS(43),
    [aux_sym_c_type_token3] = ACTIONS(43),
    [aux_sym_c_type_token4] = ACTIONS(43),
    [aux_sym_c_type_token5] = ACTIONS(43),
    [aux_sym_c_type_token6] = ACTIONS(43),
    [aux_sym_c_type_token7] = ACTIONS(43),
    [aux_sym_c_type_token8] = ACTIONS(43),
    [aux_sym_c_type_token9] = ACTIONS(43),
    [aux_sym_c_type_token10] = ACTIONS(43),
    [aux_sym_c_type_token11] = ACTIONS(43),
    [aux_sym_c_type_token12] = ACTIONS(43),
    [aux_sym_c_type_token13] = ACTIONS(43),
    [aux_sym_c_type_token14] = ACTIONS(43),
    [aux_sym_c_type_token15] = ACTIONS(43),
    [aux_sym_c_type_token16] = ACTIONS(43),
    [aux_sym_c_type_token17] = ACTIONS(43),
    [aux_sym_c_type_token18] = ACTIONS(43),
    [aux_sym_c_type_token19] = ACTIONS(43),
    [aux_sym_c_type_token20] = ACTIONS(43),
    [aux_sym_c_type_token21] = ACTIONS(43),
    [aux_sym_c_type_token22] = ACTIONS(43),
    [aux_sym_c_type_token23] = ACTIONS(43),
    [aux_sym_c_type_token24] = ACTIONS(43),
    [aux_sym_c_type_token25] = ACTIONS(43),
    [aux_sym_c_type_token26] = ACTIONS(43),
    [aux_sym_identifier_token2] = ACTIONS(45),
    [sym_storage_suffix] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
  },
  [6] = {
    [aux_sym_identifier_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_array_type_token1] = ACTIONS(49),
    [aux_sym_array_type_token2] = ACTIONS(49),
    [aux_sym_array_type_token3] = ACTIONS(49),
    [aux_sym_array_type_token4] = ACTIONS(49),
    [aux_sym_array_type_token5] = ACTIONS(49),
    [aux_sym_array_type_token6] = ACTIONS(49),
    [aux_sym_array_type_token7] = ACTIONS(49),
    [aux_sym_array_type_token8] = ACTIONS(49),
    [aux_sym_array_type_token9] = ACTIONS(49),
    [aux_sym_array_type_token10] = ACTIONS(49),
    [aux_sym_array_type_token11] = ACTIONS(49),
    [aux_sym_array_type_token12] = ACTIONS(49),
    [aux_sym_array_type_token13] = ACTIONS(49),
    [aux_sym_array_type_token14] = ACTIONS(49),
    [aux_sym_array_type_token15] = ACTIONS(49),
    [aux_sym_array_type_token16] = ACTIONS(49),
    [aux_sym_array_type_token17] = ACTIONS(49),
    [aux_sym_array_type_token18] = ACTIONS(49),
    [aux_sym_array_type_token19] = ACTIONS(49),
    [aux_sym_array_type_token20] = ACTIONS(49),
    [aux_sym_array_type_token21] = ACTIONS(49),
    [aux_sym_array_type_token22] = ACTIONS(49),
    [aux_sym_array_type_token23] = ACTIONS(49),
    [aux_sym_array_type_token24] = ACTIONS(49),
    [aux_sym_c_type_token1] = ACTIONS(49),
    [aux_sym_c_type_token2] = ACTIONS(49),
    [aux_sym_c_type_token3] = ACTIONS(49),
    [aux_sym_c_type_token4] = ACTIONS(49),
    [aux_sym_c_type_token5] = ACTIONS(49),
    [aux_sym_c_type_token6] = ACTIONS(49),
    [aux_sym_c_type_token7] = ACTIONS(49),
    [aux_sym_c_type_token8] = ACTIONS(49),
    [aux_sym_c_type_token9] = ACTIONS(49),
    [aux_sym_c_type_token10] = ACTIONS(49),
    [aux_sym_c_type_token11] = ACTIONS(49),
    [aux_sym_c_type_token12] = ACTIONS(49),
    [aux_sym_c_type_token13] = ACTIONS(49),
    [aux_sym_c_type_token14] = ACTIONS(49),
    [aux_sym_c_type_token15] = ACTIONS(49),
    [aux_sym_c_type_token16] = ACTIONS(49),
    [aux_sym_c_type_token17] = ACTIONS(49),
    [aux_sym_c_type_token18] = ACTIONS(49),
    [aux_sym_c_type_token19] = ACTIONS(49),
    [aux_sym_c_type_token20] = ACTIONS(49),
    [aux_sym_c_type_token21] = ACTIONS(49),
    [aux_sym_c_type_token22] = ACTIONS(49),
    [aux_sym_c_type_token23] = ACTIONS(49),
    [aux_sym_c_type_token24] = ACTIONS(49),
    [aux_sym_c_type_token25] = ACTIONS(49),
    [aux_sym_c_type_token26] = ACTIONS(49),
    [aux_sym_identifier_token2] = ACTIONS(51),
    [sym_storage_suffix] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(49),
  },
  [7] = {
    [sym_identifier] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(53),
    [aux_sym_array_type_token1] = ACTIONS(53),
    [aux_sym_array_type_token2] = ACTIONS(53),
    [aux_sym_array_type_token3] = ACTIONS(53),
    [aux_sym_array_type_token4] = ACTIONS(53),
    [aux_sym_array_type_token5] = ACTIONS(53),
    [aux_sym_array_type_token6] = ACTIONS(53),
    [aux_sym_array_type_token7] = ACTIONS(53),
    [aux_sym_array_type_token8] = ACTIONS(53),
    [aux_sym_array_type_token9] = ACTIONS(53),
    [aux_sym_array_type_token10] = ACTIONS(53),
    [aux_sym_array_type_token11] = ACTIONS(53),
    [aux_sym_array_type_token12] = ACTIONS(53),
    [aux_sym_array_type_token13] = ACTIONS(53),
    [aux_sym_array_type_token14] = ACTIONS(53),
    [aux_sym_array_type_token15] = ACTIONS(53),
    [aux_sym_array_type_token16] = ACTIONS(53),
    [aux_sym_array_type_token17] = ACTIONS(53),
    [aux_sym_array_type_token18] = ACTIONS(53),
    [aux_sym_array_type_token19] = ACTIONS(53),
    [aux_sym_array_type_token20] = ACTIONS(53),
    [aux_sym_array_type_token21] = ACTIONS(55),
    [aux_sym_array_type_token22] = ACTIONS(53),
    [aux_sym_array_type_token23] = ACTIONS(53),
    [aux_sym_array_type_token24] = ACTIONS(53),
    [aux_sym_c_type_token1] = ACTIONS(53),
    [aux_sym_c_type_token2] = ACTIONS(53),
    [aux_sym_c_type_token3] = ACTIONS(53),
    [aux_sym_c_type_token4] = ACTIONS(53),
    [aux_sym_c_type_token5] = ACTIONS(53),
    [aux_sym_c_type_token6] = ACTIONS(53),
    [aux_sym_c_type_token7] = ACTIONS(53),
    [aux_sym_c_type_token8] = ACTIONS(53),
    [aux_sym_c_type_token9] = ACTIONS(53),
    [aux_sym_c_type_token10] = ACTIONS(53),
    [aux_sym_c_type_token11] = ACTIONS(55),
    [aux_sym_c_type_token12] = ACTIONS(53),
    [aux_sym_c_type_token13] = ACTIONS(53),
    [aux_sym_c_type_token14] = ACTIONS(53),
    [aux_sym_c_type_token15] = ACTIONS(53),
    [aux_sym_c_type_token16] = ACTIONS(53),
    [aux_sym_c_type_token17] = ACTIONS(53),
    [aux_sym_c_type_token18] = ACTIONS(53),
    [aux_sym_c_type_token19] = ACTIONS(53),
    [aux_sym_c_type_token20] = ACTIONS(53),
    [aux_sym_c_type_token21] = ACTIONS(55),
    [aux_sym_c_type_token22] = ACTIONS(53),
    [aux_sym_c_type_token23] = ACTIONS(53),
    [aux_sym_c_type_token24] = ACTIONS(53),
    [aux_sym_c_type_token25] = ACTIONS(53),
    [aux_sym_c_type_token26] = ACTIONS(53),
    [aux_sym_identifier_token1] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(53),
  },
  [8] = {
    [sym_identifier] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(59),
    [aux_sym_array_type_token1] = ACTIONS(59),
    [aux_sym_array_type_token2] = ACTIONS(59),
    [aux_sym_array_type_token3] = ACTIONS(59),
    [aux_sym_array_type_token4] = ACTIONS(59),
    [aux_sym_array_type_token5] = ACTIONS(59),
    [aux_sym_array_type_token6] = ACTIONS(59),
    [aux_sym_array_type_token7] = ACTIONS(59),
    [aux_sym_array_type_token8] = ACTIONS(59),
    [aux_sym_array_type_token9] = ACTIONS(59),
    [aux_sym_array_type_token10] = ACTIONS(59),
    [aux_sym_array_type_token11] = ACTIONS(59),
    [aux_sym_array_type_token12] = ACTIONS(59),
    [aux_sym_array_type_token13] = ACTIONS(59),
    [aux_sym_array_type_token14] = ACTIONS(59),
    [aux_sym_array_type_token15] = ACTIONS(59),
    [aux_sym_array_type_token16] = ACTIONS(59),
    [aux_sym_array_type_token17] = ACTIONS(59),
    [aux_sym_array_type_token18] = ACTIONS(59),
    [aux_sym_array_type_token19] = ACTIONS(59),
    [aux_sym_array_type_token20] = ACTIONS(59),
    [aux_sym_array_type_token21] = ACTIONS(61),
    [aux_sym_array_type_token22] = ACTIONS(59),
    [aux_sym_array_type_token23] = ACTIONS(59),
    [aux_sym_array_type_token24] = ACTIONS(59),
    [aux_sym_c_type_token1] = ACTIONS(59),
    [aux_sym_c_type_token2] = ACTIONS(59),
    [aux_sym_c_type_token3] = ACTIONS(59),
    [aux_sym_c_type_token4] = ACTIONS(59),
    [aux_sym_c_type_token5] = ACTIONS(59),
    [aux_sym_c_type_token6] = ACTIONS(59),
    [aux_sym_c_type_token7] = ACTIONS(59),
    [aux_sym_c_type_token8] = ACTIONS(59),
    [aux_sym_c_type_token9] = ACTIONS(59),
    [aux_sym_c_type_token10] = ACTIONS(59),
    [aux_sym_c_type_token11] = ACTIONS(61),
    [aux_sym_c_type_token12] = ACTIONS(59),
    [aux_sym_c_type_token13] = ACTIONS(59),
    [aux_sym_c_type_token14] = ACTIONS(59),
    [aux_sym_c_type_token15] = ACTIONS(59),
    [aux_sym_c_type_token16] = ACTIONS(59),
    [aux_sym_c_type_token17] = ACTIONS(59),
    [aux_sym_c_type_token18] = ACTIONS(59),
    [aux_sym_c_type_token19] = ACTIONS(59),
    [aux_sym_c_type_token20] = ACTIONS(59),
    [aux_sym_c_type_token21] = ACTIONS(61),
    [aux_sym_c_type_token22] = ACTIONS(59),
    [aux_sym_c_type_token23] = ACTIONS(59),
    [aux_sym_c_type_token24] = ACTIONS(59),
    [aux_sym_c_type_token25] = ACTIONS(59),
    [aux_sym_c_type_token26] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [aux_sym_array_type_token1] = ACTIONS(63),
    [aux_sym_array_type_token2] = ACTIONS(63),
    [aux_sym_array_type_token3] = ACTIONS(63),
    [aux_sym_array_type_token4] = ACTIONS(63),
    [aux_sym_array_type_token5] = ACTIONS(63),
    [aux_sym_array_type_token6] = ACTIONS(63),
    [aux_sym_array_type_token7] = ACTIONS(63),
    [aux_sym_array_type_token8] = ACTIONS(63),
    [aux_sym_array_type_token9] = ACTIONS(63),
    [aux_sym_array_type_token10] = ACTIONS(63),
    [aux_sym_array_type_token11] = ACTIONS(63),
    [aux_sym_array_type_token12] = ACTIONS(63),
    [aux_sym_array_type_token13] = ACTIONS(63),
    [aux_sym_array_type_token14] = ACTIONS(63),
    [aux_sym_array_type_token15] = ACTIONS(63),
    [aux_sym_array_type_token16] = ACTIONS(63),
    [aux_sym_array_type_token17] = ACTIONS(63),
    [aux_sym_array_type_token18] = ACTIONS(63),
    [aux_sym_array_type_token19] = ACTIONS(63),
    [aux_sym_array_type_token20] = ACTIONS(63),
    [aux_sym_array_type_token21] = ACTIONS(65),
    [aux_sym_array_type_token22] = ACTIONS(63),
    [aux_sym_array_type_token23] = ACTIONS(63),
    [aux_sym_array_type_token24] = ACTIONS(63),
    [aux_sym_c_type_token1] = ACTIONS(63),
    [aux_sym_c_type_token2] = ACTIONS(63),
    [aux_sym_c_type_token3] = ACTIONS(63),
    [aux_sym_c_type_token4] = ACTIONS(63),
    [aux_sym_c_type_token5] = ACTIONS(63),
    [aux_sym_c_type_token6] = ACTIONS(63),
    [aux_sym_c_type_token7] = ACTIONS(63),
    [aux_sym_c_type_token8] = ACTIONS(63),
    [aux_sym_c_type_token9] = ACTIONS(63),
    [aux_sym_c_type_token10] = ACTIONS(63),
    [aux_sym_c_type_token11] = ACTIONS(65),
    [aux_sym_c_type_token12] = ACTIONS(63),
    [aux_sym_c_type_token13] = ACTIONS(63),
    [aux_sym_c_type_token14] = ACTIONS(63),
    [aux_sym_c_type_token15] = ACTIONS(63),
    [aux_sym_c_type_token16] = ACTIONS(63),
    [aux_sym_c_type_token17] = ACTIONS(63),
    [aux_sym_c_type_token18] = ACTIONS(63),
    [aux_sym_c_type_token19] = ACTIONS(63),
    [aux_sym_c_type_token20] = ACTIONS(63),
    [aux_sym_c_type_token21] = ACTIONS(65),
    [aux_sym_c_type_token22] = ACTIONS(63),
    [aux_sym_c_type_token23] = ACTIONS(63),
    [aux_sym_c_type_token24] = ACTIONS(63),
    [aux_sym_c_type_token25] = ACTIONS(63),
    [aux_sym_c_type_token26] = ACTIONS(63),
    [sym_storage_suffix] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(63),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [aux_sym_array_type_token1] = ACTIONS(69),
    [aux_sym_array_type_token2] = ACTIONS(69),
    [aux_sym_array_type_token3] = ACTIONS(69),
    [aux_sym_array_type_token4] = ACTIONS(69),
    [aux_sym_array_type_token5] = ACTIONS(69),
    [aux_sym_array_type_token6] = ACTIONS(69),
    [aux_sym_array_type_token7] = ACTIONS(69),
    [aux_sym_array_type_token8] = ACTIONS(69),
    [aux_sym_array_type_token9] = ACTIONS(69),
    [aux_sym_array_type_token10] = ACTIONS(69),
    [aux_sym_array_type_token11] = ACTIONS(69),
    [aux_sym_array_type_token12] = ACTIONS(69),
    [aux_sym_array_type_token13] = ACTIONS(69),
    [aux_sym_array_type_token14] = ACTIONS(69),
    [aux_sym_array_type_token15] = ACTIONS(69),
    [aux_sym_array_type_token16] = ACTIONS(69),
    [aux_sym_array_type_token17] = ACTIONS(69),
    [aux_sym_array_type_token18] = ACTIONS(69),
    [aux_sym_array_type_token19] = ACTIONS(69),
    [aux_sym_array_type_token20] = ACTIONS(69),
    [aux_sym_array_type_token21] = ACTIONS(71),
    [aux_sym_array_type_token22] = ACTIONS(69),
    [aux_sym_array_type_token23] = ACTIONS(69),
    [aux_sym_array_type_token24] = ACTIONS(69),
    [aux_sym_c_type_token1] = ACTIONS(69),
    [aux_sym_c_type_token2] = ACTIONS(69),
    [aux_sym_c_type_token3] = ACTIONS(69),
    [aux_sym_c_type_token4] = ACTIONS(69),
    [aux_sym_c_type_token5] = ACTIONS(69),
    [aux_sym_c_type_token6] = ACTIONS(69),
    [aux_sym_c_type_token7] = ACTIONS(69),
    [aux_sym_c_type_token8] = ACTIONS(69),
    [aux_sym_c_type_token9] = ACTIONS(69),
    [aux_sym_c_type_token10] = ACTIONS(69),
    [aux_sym_c_type_token11] = ACTIONS(71),
    [aux_sym_c_type_token12] = ACTIONS(69),
    [aux_sym_c_type_token13] = ACTIONS(69),
    [aux_sym_c_type_token14] = ACTIONS(69),
    [aux_sym_c_type_token15] = ACTIONS(69),
    [aux_sym_c_type_token16] = ACTIONS(69),
    [aux_sym_c_type_token17] = ACTIONS(69),
    [aux_sym_c_type_token18] = ACTIONS(69),
    [aux_sym_c_type_token19] = ACTIONS(69),
    [aux_sym_c_type_token20] = ACTIONS(69),
    [aux_sym_c_type_token21] = ACTIONS(71),
    [aux_sym_c_type_token22] = ACTIONS(69),
    [aux_sym_c_type_token23] = ACTIONS(69),
    [aux_sym_c_type_token24] = ACTIONS(69),
    [aux_sym_c_type_token25] = ACTIONS(69),
    [aux_sym_c_type_token26] = ACTIONS(69),
    [sym_storage_suffix] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(69),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [aux_sym_array_type_token1] = ACTIONS(75),
    [aux_sym_array_type_token2] = ACTIONS(75),
    [aux_sym_array_type_token3] = ACTIONS(75),
    [aux_sym_array_type_token4] = ACTIONS(75),
    [aux_sym_array_type_token5] = ACTIONS(75),
    [aux_sym_array_type_token6] = ACTIONS(75),
    [aux_sym_array_type_token7] = ACTIONS(75),
    [aux_sym_array_type_token8] = ACTIONS(75),
    [aux_sym_array_type_token9] = ACTIONS(75),
    [aux_sym_array_type_token10] = ACTIONS(75),
    [aux_sym_array_type_token11] = ACTIONS(75),
    [aux_sym_array_type_token12] = ACTIONS(75),
    [aux_sym_array_type_token13] = ACTIONS(75),
    [aux_sym_array_type_token14] = ACTIONS(75),
    [aux_sym_array_type_token15] = ACTIONS(75),
    [aux_sym_array_type_token16] = ACTIONS(75),
    [aux_sym_array_type_token17] = ACTIONS(75),
    [aux_sym_array_type_token18] = ACTIONS(75),
    [aux_sym_array_type_token19] = ACTIONS(75),
    [aux_sym_array_type_token20] = ACTIONS(75),
    [aux_sym_array_type_token21] = ACTIONS(77),
    [aux_sym_array_type_token22] = ACTIONS(75),
    [aux_sym_array_type_token23] = ACTIONS(75),
    [aux_sym_array_type_token24] = ACTIONS(75),
    [aux_sym_c_type_token1] = ACTIONS(75),
    [aux_sym_c_type_token2] = ACTIONS(75),
    [aux_sym_c_type_token3] = ACTIONS(75),
    [aux_sym_c_type_token4] = ACTIONS(75),
    [aux_sym_c_type_token5] = ACTIONS(75),
    [aux_sym_c_type_token6] = ACTIONS(75),
    [aux_sym_c_type_token7] = ACTIONS(75),
    [aux_sym_c_type_token8] = ACTIONS(75),
    [aux_sym_c_type_token9] = ACTIONS(75),
    [aux_sym_c_type_token10] = ACTIONS(75),
    [aux_sym_c_type_token11] = ACTIONS(77),
    [aux_sym_c_type_token12] = ACTIONS(75),
    [aux_sym_c_type_token13] = ACTIONS(75),
    [aux_sym_c_type_token14] = ACTIONS(75),
    [aux_sym_c_type_token15] = ACTIONS(75),
    [aux_sym_c_type_token16] = ACTIONS(75),
    [aux_sym_c_type_token17] = ACTIONS(75),
    [aux_sym_c_type_token18] = ACTIONS(75),
    [aux_sym_c_type_token19] = ACTIONS(75),
    [aux_sym_c_type_token20] = ACTIONS(75),
    [aux_sym_c_type_token21] = ACTIONS(77),
    [aux_sym_c_type_token22] = ACTIONS(75),
    [aux_sym_c_type_token23] = ACTIONS(75),
    [aux_sym_c_type_token24] = ACTIONS(75),
    [aux_sym_c_type_token25] = ACTIONS(75),
    [aux_sym_c_type_token26] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [aux_sym_array_type_token1] = ACTIONS(79),
    [aux_sym_array_type_token2] = ACTIONS(79),
    [aux_sym_array_type_token3] = ACTIONS(79),
    [aux_sym_array_type_token4] = ACTIONS(79),
    [aux_sym_array_type_token5] = ACTIONS(79),
    [aux_sym_array_type_token6] = ACTIONS(79),
    [aux_sym_array_type_token7] = ACTIONS(79),
    [aux_sym_array_type_token8] = ACTIONS(79),
    [aux_sym_array_type_token9] = ACTIONS(79),
    [aux_sym_array_type_token10] = ACTIONS(79),
    [aux_sym_array_type_token11] = ACTIONS(79),
    [aux_sym_array_type_token12] = ACTIONS(79),
    [aux_sym_array_type_token13] = ACTIONS(79),
    [aux_sym_array_type_token14] = ACTIONS(79),
    [aux_sym_array_type_token15] = ACTIONS(79),
    [aux_sym_array_type_token16] = ACTIONS(79),
    [aux_sym_array_type_token17] = ACTIONS(79),
    [aux_sym_array_type_token18] = ACTIONS(79),
    [aux_sym_array_type_token19] = ACTIONS(79),
    [aux_sym_array_type_token20] = ACTIONS(79),
    [aux_sym_array_type_token21] = ACTIONS(81),
    [aux_sym_array_type_token22] = ACTIONS(79),
    [aux_sym_array_type_token23] = ACTIONS(79),
    [aux_sym_array_type_token24] = ACTIONS(79),
    [aux_sym_c_type_token1] = ACTIONS(79),
    [aux_sym_c_type_token2] = ACTIONS(79),
    [aux_sym_c_type_token3] = ACTIONS(79),
    [aux_sym_c_type_token4] = ACTIONS(79),
    [aux_sym_c_type_token5] = ACTIONS(79),
    [aux_sym_c_type_token6] = ACTIONS(79),
    [aux_sym_c_type_token7] = ACTIONS(79),
    [aux_sym_c_type_token8] = ACTIONS(79),
    [aux_sym_c_type_token9] = ACTIONS(79),
    [aux_sym_c_type_token10] = ACTIONS(79),
    [aux_sym_c_type_token11] = ACTIONS(81),
    [aux_sym_c_type_token12] = ACTIONS(79),
    [aux_sym_c_type_token13] = ACTIONS(79),
    [aux_sym_c_type_token14] = ACTIONS(79),
    [aux_sym_c_type_token15] = ACTIONS(79),
    [aux_sym_c_type_token16] = ACTIONS(79),
    [aux_sym_c_type_token17] = ACTIONS(79),
    [aux_sym_c_type_token18] = ACTIONS(79),
    [aux_sym_c_type_token19] = ACTIONS(79),
    [aux_sym_c_type_token20] = ACTIONS(79),
    [aux_sym_c_type_token21] = ACTIONS(81),
    [aux_sym_c_type_token22] = ACTIONS(79),
    [aux_sym_c_type_token23] = ACTIONS(79),
    [aux_sym_c_type_token24] = ACTIONS(79),
    [aux_sym_c_type_token25] = ACTIONS(79),
    [aux_sym_c_type_token26] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [aux_sym_array_type_token1] = ACTIONS(83),
    [aux_sym_array_type_token2] = ACTIONS(83),
    [aux_sym_array_type_token3] = ACTIONS(83),
    [aux_sym_array_type_token4] = ACTIONS(83),
    [aux_sym_array_type_token5] = ACTIONS(83),
    [aux_sym_array_type_token6] = ACTIONS(83),
    [aux_sym_array_type_token7] = ACTIONS(83),
    [aux_sym_array_type_token8] = ACTIONS(83),
    [aux_sym_array_type_token9] = ACTIONS(83),
    [aux_sym_array_type_token10] = ACTIONS(83),
    [aux_sym_array_type_token11] = ACTIONS(83),
    [aux_sym_array_type_token12] = ACTIONS(83),
    [aux_sym_array_type_token13] = ACTIONS(83),
    [aux_sym_array_type_token14] = ACTIONS(83),
    [aux_sym_array_type_token15] = ACTIONS(83),
    [aux_sym_array_type_token16] = ACTIONS(83),
    [aux_sym_array_type_token17] = ACTIONS(83),
    [aux_sym_array_type_token18] = ACTIONS(83),
    [aux_sym_array_type_token19] = ACTIONS(83),
    [aux_sym_array_type_token20] = ACTIONS(83),
    [aux_sym_array_type_token21] = ACTIONS(85),
    [aux_sym_array_type_token22] = ACTIONS(83),
    [aux_sym_array_type_token23] = ACTIONS(83),
    [aux_sym_array_type_token24] = ACTIONS(83),
    [aux_sym_c_type_token1] = ACTIONS(83),
    [aux_sym_c_type_token2] = ACTIONS(83),
    [aux_sym_c_type_token3] = ACTIONS(83),
    [aux_sym_c_type_token4] = ACTIONS(83),
    [aux_sym_c_type_token5] = ACTIONS(83),
    [aux_sym_c_type_token6] = ACTIONS(83),
    [aux_sym_c_type_token7] = ACTIONS(83),
    [aux_sym_c_type_token8] = ACTIONS(83),
    [aux_sym_c_type_token9] = ACTIONS(83),
    [aux_sym_c_type_token10] = ACTIONS(83),
    [aux_sym_c_type_token11] = ACTIONS(85),
    [aux_sym_c_type_token12] = ACTIONS(83),
    [aux_sym_c_type_token13] = ACTIONS(83),
    [aux_sym_c_type_token14] = ACTIONS(83),
    [aux_sym_c_type_token15] = ACTIONS(83),
    [aux_sym_c_type_token16] = ACTIONS(83),
    [aux_sym_c_type_token17] = ACTIONS(83),
    [aux_sym_c_type_token18] = ACTIONS(83),
    [aux_sym_c_type_token19] = ACTIONS(83),
    [aux_sym_c_type_token20] = ACTIONS(83),
    [aux_sym_c_type_token21] = ACTIONS(85),
    [aux_sym_c_type_token22] = ACTIONS(83),
    [aux_sym_c_type_token23] = ACTIONS(83),
    [aux_sym_c_type_token24] = ACTIONS(83),
    [aux_sym_c_type_token25] = ACTIONS(83),
    [aux_sym_c_type_token26] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [aux_sym_array_type_token1] = ACTIONS(87),
    [aux_sym_array_type_token2] = ACTIONS(87),
    [aux_sym_array_type_token3] = ACTIONS(87),
    [aux_sym_array_type_token4] = ACTIONS(87),
    [aux_sym_array_type_token5] = ACTIONS(87),
    [aux_sym_array_type_token6] = ACTIONS(87),
    [aux_sym_array_type_token7] = ACTIONS(87),
    [aux_sym_array_type_token8] = ACTIONS(87),
    [aux_sym_array_type_token9] = ACTIONS(87),
    [aux_sym_array_type_token10] = ACTIONS(87),
    [aux_sym_array_type_token11] = ACTIONS(87),
    [aux_sym_array_type_token12] = ACTIONS(87),
    [aux_sym_array_type_token13] = ACTIONS(87),
    [aux_sym_array_type_token14] = ACTIONS(87),
    [aux_sym_array_type_token15] = ACTIONS(87),
    [aux_sym_array_type_token16] = ACTIONS(87),
    [aux_sym_array_type_token17] = ACTIONS(87),
    [aux_sym_array_type_token18] = ACTIONS(87),
    [aux_sym_array_type_token19] = ACTIONS(87),
    [aux_sym_array_type_token20] = ACTIONS(87),
    [aux_sym_array_type_token21] = ACTIONS(89),
    [aux_sym_array_type_token22] = ACTIONS(87),
    [aux_sym_array_type_token23] = ACTIONS(87),
    [aux_sym_array_type_token24] = ACTIONS(87),
    [aux_sym_c_type_token1] = ACTIONS(87),
    [aux_sym_c_type_token2] = ACTIONS(87),
    [aux_sym_c_type_token3] = ACTIONS(87),
    [aux_sym_c_type_token4] = ACTIONS(87),
    [aux_sym_c_type_token5] = ACTIONS(87),
    [aux_sym_c_type_token6] = ACTIONS(87),
    [aux_sym_c_type_token7] = ACTIONS(87),
    [aux_sym_c_type_token8] = ACTIONS(87),
    [aux_sym_c_type_token9] = ACTIONS(87),
    [aux_sym_c_type_token10] = ACTIONS(87),
    [aux_sym_c_type_token11] = ACTIONS(89),
    [aux_sym_c_type_token12] = ACTIONS(87),
    [aux_sym_c_type_token13] = ACTIONS(87),
    [aux_sym_c_type_token14] = ACTIONS(87),
    [aux_sym_c_type_token15] = ACTIONS(87),
    [aux_sym_c_type_token16] = ACTIONS(87),
    [aux_sym_c_type_token17] = ACTIONS(87),
    [aux_sym_c_type_token18] = ACTIONS(87),
    [aux_sym_c_type_token19] = ACTIONS(87),
    [aux_sym_c_type_token20] = ACTIONS(87),
    [aux_sym_c_type_token21] = ACTIONS(89),
    [aux_sym_c_type_token22] = ACTIONS(87),
    [aux_sym_c_type_token23] = ACTIONS(87),
    [aux_sym_c_type_token24] = ACTIONS(87),
    [aux_sym_c_type_token25] = ACTIONS(87),
    [aux_sym_c_type_token26] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [aux_sym_array_type_token1] = ACTIONS(91),
    [aux_sym_array_type_token2] = ACTIONS(91),
    [aux_sym_array_type_token3] = ACTIONS(91),
    [aux_sym_array_type_token4] = ACTIONS(91),
    [aux_sym_array_type_token5] = ACTIONS(91),
    [aux_sym_array_type_token6] = ACTIONS(91),
    [aux_sym_array_type_token7] = ACTIONS(91),
    [aux_sym_array_type_token8] = ACTIONS(91),
    [aux_sym_array_type_token9] = ACTIONS(91),
    [aux_sym_array_type_token10] = ACTIONS(91),
    [aux_sym_array_type_token11] = ACTIONS(91),
    [aux_sym_array_type_token12] = ACTIONS(91),
    [aux_sym_array_type_token13] = ACTIONS(91),
    [aux_sym_array_type_token14] = ACTIONS(91),
    [aux_sym_array_type_token15] = ACTIONS(91),
    [aux_sym_array_type_token16] = ACTIONS(91),
    [aux_sym_array_type_token17] = ACTIONS(91),
    [aux_sym_array_type_token18] = ACTIONS(91),
    [aux_sym_array_type_token19] = ACTIONS(91),
    [aux_sym_array_type_token20] = ACTIONS(91),
    [aux_sym_array_type_token21] = ACTIONS(93),
    [aux_sym_array_type_token22] = ACTIONS(91),
    [aux_sym_array_type_token23] = ACTIONS(91),
    [aux_sym_array_type_token24] = ACTIONS(91),
    [aux_sym_c_type_token1] = ACTIONS(91),
    [aux_sym_c_type_token2] = ACTIONS(91),
    [aux_sym_c_type_token3] = ACTIONS(91),
    [aux_sym_c_type_token4] = ACTIONS(91),
    [aux_sym_c_type_token5] = ACTIONS(91),
    [aux_sym_c_type_token6] = ACTIONS(91),
    [aux_sym_c_type_token7] = ACTIONS(91),
    [aux_sym_c_type_token8] = ACTIONS(91),
    [aux_sym_c_type_token9] = ACTIONS(91),
    [aux_sym_c_type_token10] = ACTIONS(91),
    [aux_sym_c_type_token11] = ACTIONS(93),
    [aux_sym_c_type_token12] = ACTIONS(91),
    [aux_sym_c_type_token13] = ACTIONS(91),
    [aux_sym_c_type_token14] = ACTIONS(91),
    [aux_sym_c_type_token15] = ACTIONS(91),
    [aux_sym_c_type_token16] = ACTIONS(91),
    [aux_sym_c_type_token17] = ACTIONS(91),
    [aux_sym_c_type_token18] = ACTIONS(91),
    [aux_sym_c_type_token19] = ACTIONS(91),
    [aux_sym_c_type_token20] = ACTIONS(91),
    [aux_sym_c_type_token21] = ACTIONS(93),
    [aux_sym_c_type_token22] = ACTIONS(91),
    [aux_sym_c_type_token23] = ACTIONS(91),
    [aux_sym_c_type_token24] = ACTIONS(91),
    [aux_sym_c_type_token25] = ACTIONS(91),
    [aux_sym_c_type_token26] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [aux_sym_array_type_token1] = ACTIONS(63),
    [aux_sym_array_type_token2] = ACTIONS(63),
    [aux_sym_array_type_token3] = ACTIONS(63),
    [aux_sym_array_type_token4] = ACTIONS(63),
    [aux_sym_array_type_token5] = ACTIONS(63),
    [aux_sym_array_type_token6] = ACTIONS(63),
    [aux_sym_array_type_token7] = ACTIONS(63),
    [aux_sym_array_type_token8] = ACTIONS(63),
    [aux_sym_array_type_token9] = ACTIONS(63),
    [aux_sym_array_type_token10] = ACTIONS(63),
    [aux_sym_array_type_token11] = ACTIONS(63),
    [aux_sym_array_type_token12] = ACTIONS(63),
    [aux_sym_array_type_token13] = ACTIONS(63),
    [aux_sym_array_type_token14] = ACTIONS(63),
    [aux_sym_array_type_token15] = ACTIONS(63),
    [aux_sym_array_type_token16] = ACTIONS(63),
    [aux_sym_array_type_token17] = ACTIONS(63),
    [aux_sym_array_type_token18] = ACTIONS(63),
    [aux_sym_array_type_token19] = ACTIONS(63),
    [aux_sym_array_type_token20] = ACTIONS(63),
    [aux_sym_array_type_token21] = ACTIONS(65),
    [aux_sym_array_type_token22] = ACTIONS(63),
    [aux_sym_array_type_token23] = ACTIONS(63),
    [aux_sym_array_type_token24] = ACTIONS(63),
    [aux_sym_c_type_token1] = ACTIONS(63),
    [aux_sym_c_type_token2] = ACTIONS(63),
    [aux_sym_c_type_token3] = ACTIONS(63),
    [aux_sym_c_type_token4] = ACTIONS(63),
    [aux_sym_c_type_token5] = ACTIONS(63),
    [aux_sym_c_type_token6] = ACTIONS(63),
    [aux_sym_c_type_token7] = ACTIONS(63),
    [aux_sym_c_type_token8] = ACTIONS(63),
    [aux_sym_c_type_token9] = ACTIONS(63),
    [aux_sym_c_type_token10] = ACTIONS(63),
    [aux_sym_c_type_token11] = ACTIONS(65),
    [aux_sym_c_type_token12] = ACTIONS(63),
    [aux_sym_c_type_token13] = ACTIONS(63),
    [aux_sym_c_type_token14] = ACTIONS(63),
    [aux_sym_c_type_token15] = ACTIONS(63),
    [aux_sym_c_type_token16] = ACTIONS(63),
    [aux_sym_c_type_token17] = ACTIONS(63),
    [aux_sym_c_type_token18] = ACTIONS(63),
    [aux_sym_c_type_token19] = ACTIONS(63),
    [aux_sym_c_type_token20] = ACTIONS(63),
    [aux_sym_c_type_token21] = ACTIONS(65),
    [aux_sym_c_type_token22] = ACTIONS(63),
    [aux_sym_c_type_token23] = ACTIONS(63),
    [aux_sym_c_type_token24] = ACTIONS(63),
    [aux_sym_c_type_token25] = ACTIONS(63),
    [aux_sym_c_type_token26] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [aux_sym_array_type_token1] = ACTIONS(95),
    [aux_sym_array_type_token2] = ACTIONS(95),
    [aux_sym_array_type_token3] = ACTIONS(95),
    [aux_sym_array_type_token4] = ACTIONS(95),
    [aux_sym_array_type_token5] = ACTIONS(95),
    [aux_sym_array_type_token6] = ACTIONS(95),
    [aux_sym_array_type_token7] = ACTIONS(95),
    [aux_sym_array_type_token8] = ACTIONS(95),
    [aux_sym_array_type_token9] = ACTIONS(95),
    [aux_sym_array_type_token10] = ACTIONS(95),
    [aux_sym_array_type_token11] = ACTIONS(95),
    [aux_sym_array_type_token12] = ACTIONS(95),
    [aux_sym_array_type_token13] = ACTIONS(95),
    [aux_sym_array_type_token14] = ACTIONS(95),
    [aux_sym_array_type_token15] = ACTIONS(95),
    [aux_sym_array_type_token16] = ACTIONS(95),
    [aux_sym_array_type_token17] = ACTIONS(95),
    [aux_sym_array_type_token18] = ACTIONS(95),
    [aux_sym_array_type_token19] = ACTIONS(95),
    [aux_sym_array_type_token20] = ACTIONS(95),
    [aux_sym_array_type_token21] = ACTIONS(97),
    [aux_sym_array_type_token22] = ACTIONS(95),
    [aux_sym_array_type_token23] = ACTIONS(95),
    [aux_sym_array_type_token24] = ACTIONS(95),
    [aux_sym_c_type_token1] = ACTIONS(95),
    [aux_sym_c_type_token2] = ACTIONS(95),
    [aux_sym_c_type_token3] = ACTIONS(95),
    [aux_sym_c_type_token4] = ACTIONS(95),
    [aux_sym_c_type_token5] = ACTIONS(95),
    [aux_sym_c_type_token6] = ACTIONS(95),
    [aux_sym_c_type_token7] = ACTIONS(95),
    [aux_sym_c_type_token8] = ACTIONS(95),
    [aux_sym_c_type_token9] = ACTIONS(95),
    [aux_sym_c_type_token10] = ACTIONS(95),
    [aux_sym_c_type_token11] = ACTIONS(97),
    [aux_sym_c_type_token12] = ACTIONS(95),
    [aux_sym_c_type_token13] = ACTIONS(95),
    [aux_sym_c_type_token14] = ACTIONS(95),
    [aux_sym_c_type_token15] = ACTIONS(95),
    [aux_sym_c_type_token16] = ACTIONS(95),
    [aux_sym_c_type_token17] = ACTIONS(95),
    [aux_sym_c_type_token18] = ACTIONS(95),
    [aux_sym_c_type_token19] = ACTIONS(95),
    [aux_sym_c_type_token20] = ACTIONS(95),
    [aux_sym_c_type_token21] = ACTIONS(97),
    [aux_sym_c_type_token22] = ACTIONS(95),
    [aux_sym_c_type_token23] = ACTIONS(95),
    [aux_sym_c_type_token24] = ACTIONS(95),
    [aux_sym_c_type_token25] = ACTIONS(95),
    [aux_sym_c_type_token26] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [aux_sym_array_type_token1] = ACTIONS(99),
    [aux_sym_array_type_token2] = ACTIONS(99),
    [aux_sym_array_type_token3] = ACTIONS(99),
    [aux_sym_array_type_token4] = ACTIONS(99),
    [aux_sym_array_type_token5] = ACTIONS(99),
    [aux_sym_array_type_token6] = ACTIONS(99),
    [aux_sym_array_type_token7] = ACTIONS(99),
    [aux_sym_array_type_token8] = ACTIONS(99),
    [aux_sym_array_type_token9] = ACTIONS(99),
    [aux_sym_array_type_token10] = ACTIONS(99),
    [aux_sym_array_type_token11] = ACTIONS(99),
    [aux_sym_array_type_token12] = ACTIONS(99),
    [aux_sym_array_type_token13] = ACTIONS(99),
    [aux_sym_array_type_token14] = ACTIONS(99),
    [aux_sym_array_type_token15] = ACTIONS(99),
    [aux_sym_array_type_token16] = ACTIONS(99),
    [aux_sym_array_type_token17] = ACTIONS(99),
    [aux_sym_array_type_token18] = ACTIONS(99),
    [aux_sym_array_type_token19] = ACTIONS(99),
    [aux_sym_array_type_token20] = ACTIONS(99),
    [aux_sym_array_type_token21] = ACTIONS(101),
    [aux_sym_array_type_token22] = ACTIONS(99),
    [aux_sym_array_type_token23] = ACTIONS(99),
    [aux_sym_array_type_token24] = ACTIONS(99),
    [aux_sym_c_type_token1] = ACTIONS(99),
    [aux_sym_c_type_token2] = ACTIONS(99),
    [aux_sym_c_type_token3] = ACTIONS(99),
    [aux_sym_c_type_token4] = ACTIONS(99),
    [aux_sym_c_type_token5] = ACTIONS(99),
    [aux_sym_c_type_token6] = ACTIONS(99),
    [aux_sym_c_type_token7] = ACTIONS(99),
    [aux_sym_c_type_token8] = ACTIONS(99),
    [aux_sym_c_type_token9] = ACTIONS(99),
    [aux_sym_c_type_token10] = ACTIONS(99),
    [aux_sym_c_type_token11] = ACTIONS(101),
    [aux_sym_c_type_token12] = ACTIONS(99),
    [aux_sym_c_type_token13] = ACTIONS(99),
    [aux_sym_c_type_token14] = ACTIONS(99),
    [aux_sym_c_type_token15] = ACTIONS(99),
    [aux_sym_c_type_token16] = ACTIONS(99),
    [aux_sym_c_type_token17] = ACTIONS(99),
    [aux_sym_c_type_token18] = ACTIONS(99),
    [aux_sym_c_type_token19] = ACTIONS(99),
    [aux_sym_c_type_token20] = ACTIONS(99),
    [aux_sym_c_type_token21] = ACTIONS(101),
    [aux_sym_c_type_token22] = ACTIONS(99),
    [aux_sym_c_type_token23] = ACTIONS(99),
    [aux_sym_c_type_token24] = ACTIONS(99),
    [aux_sym_c_type_token25] = ACTIONS(99),
    [aux_sym_c_type_token26] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [aux_sym_array_type_token1] = ACTIONS(103),
    [aux_sym_array_type_token2] = ACTIONS(103),
    [aux_sym_array_type_token3] = ACTIONS(103),
    [aux_sym_array_type_token4] = ACTIONS(103),
    [aux_sym_array_type_token5] = ACTIONS(103),
    [aux_sym_array_type_token6] = ACTIONS(103),
    [aux_sym_array_type_token7] = ACTIONS(103),
    [aux_sym_array_type_token8] = ACTIONS(103),
    [aux_sym_array_type_token9] = ACTIONS(103),
    [aux_sym_array_type_token10] = ACTIONS(103),
    [aux_sym_array_type_token11] = ACTIONS(103),
    [aux_sym_array_type_token12] = ACTIONS(103),
    [aux_sym_array_type_token13] = ACTIONS(103),
    [aux_sym_array_type_token14] = ACTIONS(103),
    [aux_sym_array_type_token15] = ACTIONS(103),
    [aux_sym_array_type_token16] = ACTIONS(103),
    [aux_sym_array_type_token17] = ACTIONS(103),
    [aux_sym_array_type_token18] = ACTIONS(103),
    [aux_sym_array_type_token19] = ACTIONS(103),
    [aux_sym_array_type_token20] = ACTIONS(103),
    [aux_sym_array_type_token21] = ACTIONS(105),
    [aux_sym_array_type_token22] = ACTIONS(103),
    [aux_sym_array_type_token23] = ACTIONS(103),
    [aux_sym_array_type_token24] = ACTIONS(103),
    [aux_sym_c_type_token1] = ACTIONS(103),
    [aux_sym_c_type_token2] = ACTIONS(103),
    [aux_sym_c_type_token3] = ACTIONS(103),
    [aux_sym_c_type_token4] = ACTIONS(103),
    [aux_sym_c_type_token5] = ACTIONS(103),
    [aux_sym_c_type_token6] = ACTIONS(103),
    [aux_sym_c_type_token7] = ACTIONS(103),
    [aux_sym_c_type_token8] = ACTIONS(103),
    [aux_sym_c_type_token9] = ACTIONS(103),
    [aux_sym_c_type_token10] = ACTIONS(103),
    [aux_sym_c_type_token11] = ACTIONS(105),
    [aux_sym_c_type_token12] = ACTIONS(103),
    [aux_sym_c_type_token13] = ACTIONS(103),
    [aux_sym_c_type_token14] = ACTIONS(103),
    [aux_sym_c_type_token15] = ACTIONS(103),
    [aux_sym_c_type_token16] = ACTIONS(103),
    [aux_sym_c_type_token17] = ACTIONS(103),
    [aux_sym_c_type_token18] = ACTIONS(103),
    [aux_sym_c_type_token19] = ACTIONS(103),
    [aux_sym_c_type_token20] = ACTIONS(103),
    [aux_sym_c_type_token21] = ACTIONS(105),
    [aux_sym_c_type_token22] = ACTIONS(103),
    [aux_sym_c_type_token23] = ACTIONS(103),
    [aux_sym_c_type_token24] = ACTIONS(103),
    [aux_sym_c_type_token25] = ACTIONS(103),
    [aux_sym_c_type_token26] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
  },
  [20] = {
    [sym_declaration_argument] = STATE(48),
    [sym_identifier] = STATE(42),
    [sym_interprocess_variable] = STATE(42),
    [sym_local_variable] = STATE(42),
    [sym_parameter] = STATE(42),
    [sym_integer_constant] = STATE(48),
    [aux_sym_identifier_token1] = ACTIONS(107),
    [anon_sym_LT_GT] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(111),
    [aux_sym_parameter_token1] = ACTIONS(113),
  },
  [21] = {
    [sym_declaration_argument_list] = STATE(49),
    [sym_declaration_argument] = STATE(31),
    [sym_identifier] = STATE(42),
    [sym_interprocess_variable] = STATE(42),
    [sym_local_variable] = STATE(42),
    [sym_parameter] = STATE(42),
    [anon_sym_RPAREN] = ACTIONS(115),
    [aux_sym_identifier_token1] = ACTIONS(107),
    [anon_sym_LT_GT] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(111),
  },
  [22] = {
    [sym_declaration_argument] = STATE(45),
    [sym_identifier] = STATE(42),
    [sym_interprocess_variable] = STATE(42),
    [sym_local_variable] = STATE(42),
    [sym_parameter] = STATE(42),
    [aux_sym_identifier_token1] = ACTIONS(107),
    [anon_sym_LT_GT] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(111),
  },
  [23] = {
    [sym_declaration_argument] = STATE(40),
    [sym_identifier] = STATE(42),
    [sym_interprocess_variable] = STATE(42),
    [sym_local_variable] = STATE(42),
    [sym_parameter] = STATE(42),
    [aux_sym_identifier_token1] = ACTIONS(107),
    [anon_sym_LT_GT] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(111),
  },
  [24] = {
    [aux_sym_identifier_repeat1] = STATE(26),
    [anon_sym_RPAREN] = ACTIONS(49),
    [sym_argument_separator] = ACTIONS(49),
    [aux_sym_identifier_token2] = ACTIONS(117),
    [sym_storage_suffix] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(49),
  },
  [25] = {
    [aux_sym_identifier_repeat1] = STATE(25),
    [anon_sym_RPAREN] = ACTIONS(36),
    [sym_argument_separator] = ACTIONS(36),
    [aux_sym_identifier_token2] = ACTIONS(119),
    [sym_storage_suffix] = ACTIONS(36),
    [anon_sym_RBRACK] = ACTIONS(36),
  },
  [26] = {
    [aux_sym_identifier_repeat1] = STATE(25),
    [anon_sym_RPAREN] = ACTIONS(43),
    [sym_argument_separator] = ACTIONS(43),
    [aux_sym_identifier_token2] = ACTIONS(122),
    [sym_storage_suffix] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
  },
  [27] = {
    [sym_identifier] = STATE(35),
    [aux_sym_identifier_token1] = ACTIONS(107),
    [aux_sym_parameter_token1] = ACTIONS(124),
  },
  [28] = {
    [sym_array_declaration_arguments] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(126),
    [sym_command_suffix] = ACTIONS(128),
  },
  [29] = {
    [sym_c_declaration_arguments] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(130),
    [sym_command_suffix] = ACTIONS(132),
  },
  [30] = {
    [aux_sym_declaration_argument_list_repeat1] = STATE(30),
    [anon_sym_RPAREN] = ACTIONS(134),
    [sym_argument_separator] = ACTIONS(136),
  },
  [31] = {
    [aux_sym_declaration_argument_list_repeat1] = STATE(32),
    [anon_sym_RPAREN] = ACTIONS(139),
    [sym_argument_separator] = ACTIONS(141),
  },
  [32] = {
    [aux_sym_declaration_argument_list_repeat1] = STATE(30),
    [anon_sym_RPAREN] = ACTIONS(143),
    [sym_argument_separator] = ACTIONS(141),
  },
  [33] = {
    [sym_array_declaration_arguments] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(126),
  },
  [34] = {
    [anon_sym_RPAREN] = ACTIONS(145),
    [sym_argument_separator] = ACTIONS(145),
  },
  [35] = {
    [anon_sym_RPAREN] = ACTIONS(147),
    [sym_argument_separator] = ACTIONS(147),
  },
  [36] = {
    [sym_c_declaration_arguments] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(130),
  },
  [37] = {
    [anon_sym_RPAREN] = ACTIONS(149),
    [sym_argument_separator] = ACTIONS(149),
  },
  [38] = {
    [sym_storage_suffix] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(153),
  },
  [39] = {
    [sym_identifier] = STATE(37),
    [aux_sym_identifier_token1] = ACTIONS(107),
  },
  [40] = {
    [anon_sym_RPAREN] = ACTIONS(134),
    [sym_argument_separator] = ACTIONS(134),
  },
  [41] = {
    [anon_sym_LPAREN] = ACTIONS(155),
    [sym_command_suffix] = ACTIONS(155),
  },
  [42] = {
    [anon_sym_RPAREN] = ACTIONS(157),
    [sym_argument_separator] = ACTIONS(157),
  },
  [43] = {
    [sym_identifier] = STATE(38),
    [aux_sym_identifier_token1] = ACTIONS(107),
  },
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(159),
    [sym_command_suffix] = ACTIONS(159),
  },
  [45] = {
    [sym_argument_separator] = ACTIONS(161),
  },
  [46] = {
    [anon_sym_RBRACK] = ACTIONS(163),
  },
  [47] = {
    [anon_sym_RPAREN] = ACTIONS(165),
  },
  [48] = {
    [anon_sym_RPAREN] = ACTIONS(167),
  },
  [49] = {
    [anon_sym_RPAREN] = ACTIONS(169),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(171),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_code, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(41),
  [7] = {.count = 1, .reusable = false}, SHIFT(41),
  [9] = {.count = 1, .reusable = true}, SHIFT(44),
  [11] = {.count = 1, .reusable = false}, SHIFT(44),
  [13] = {.count = 1, .reusable = true}, SHIFT(43),
  [15] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2),
  [17] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(41),
  [20] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(41),
  [23] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(44),
  [26] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(44),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(43),
  [32] = {.count = 1, .reusable = true}, REDUCE(sym_source_code, 1),
  [34] = {.count = 1, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2),
  [36] = {.count = 1, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2),
  [38] = {.count = 2, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(4),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 2),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 2),
  [45] = {.count = 1, .reusable = false}, SHIFT(4),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [51] = {.count = 1, .reusable = false}, SHIFT(5),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_table, 3),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_table, 3),
  [57] = {.count = 1, .reusable = false}, SHIFT(6),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_table, 4),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_table, 4),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_field, 5),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_field, 5),
  [67] = {.count = 1, .reusable = true}, SHIFT(18),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_field, 4),
  [73] = {.count = 1, .reusable = true}, SHIFT(16),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_array_declaration_arguments, 5),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_array_declaration_arguments, 5),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_array_declaration, 2),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_array_declaration, 2),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_array_declaration, 3),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_array_declaration, 3),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration, 2),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration, 2),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration_arguments, 3),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration_arguments, 3),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration, 3),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration, 3),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_field, 6),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_field, 6),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration_arguments, 2),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration_arguments, 2),
  [107] = {.count = 1, .reusable = true}, SHIFT(24),
  [109] = {.count = 1, .reusable = true}, SHIFT(39),
  [111] = {.count = 1, .reusable = true}, SHIFT(27),
  [113] = {.count = 1, .reusable = true}, SHIFT(47),
  [115] = {.count = 1, .reusable = true}, SHIFT(19),
  [117] = {.count = 1, .reusable = true}, SHIFT(26),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(25),
  [122] = {.count = 1, .reusable = true}, SHIFT(25),
  [124] = {.count = 1, .reusable = true}, SHIFT(34),
  [126] = {.count = 1, .reusable = true}, SHIFT(22),
  [128] = {.count = 1, .reusable = true}, SHIFT(33),
  [130] = {.count = 1, .reusable = true}, SHIFT(21),
  [132] = {.count = 1, .reusable = true}, SHIFT(36),
  [134] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_argument_list_repeat1, 2),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_argument_list_repeat1, 2), SHIFT_REPEAT(23),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_argument_list, 1),
  [141] = {.count = 1, .reusable = true}, SHIFT(23),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_argument_list, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_local_variable, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_interprocess_variable, 2),
  [151] = {.count = 1, .reusable = true}, SHIFT(46),
  [153] = {.count = 1, .reusable = true}, SHIFT(7),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_array_type, 1),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_argument, 1),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_c_type, 1),
  [161] = {.count = 1, .reusable = true}, SHIFT(20),
  [163] = {.count = 1, .reusable = true}, SHIFT(8),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_integer_constant, 1),
  [167] = {.count = 1, .reusable = true}, SHIFT(11),
  [169] = {.count = 1, .reusable = true}, SHIFT(15),
  [171] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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

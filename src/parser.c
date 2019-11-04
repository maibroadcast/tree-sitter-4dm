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
#define STATE_COUNT 38
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
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
  aux_sym_array_declaration_arguments_token1 = 52,
  anon_sym_RPAREN = 53,
  sym_argument_separator = 54,
  aux_sym_identifier_token1 = 55,
  aux_sym_identifier_token2 = 56,
  anon_sym_LT_GT = 57,
  anon_sym_DOLLAR = 58,
  sym_command_suffix = 59,
  sym_source_code = 60,
  sym__token = 61,
  sym_array_declaration = 62,
  sym_c_declaration = 63,
  sym_array_type = 64,
  sym_c_type = 65,
  sym_array_declaration_arguments = 66,
  sym_c_declaration_arguments = 67,
  sym_declaration_argument_list = 68,
  sym_declaration_argument = 69,
  sym_identifier = 70,
  sym_interprocess_variable = 71,
  sym_local_variable = 72,
  sym_parameter = 73,
  aux_sym_source_code_repeat1 = 74,
  aux_sym_declaration_argument_list_repeat1 = 75,
  aux_sym_identifier_repeat1 = 76,
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
  [aux_sym_array_declaration_arguments_token1] = "array_declaration_arguments_token1",
  [anon_sym_RPAREN] = ")",
  [sym_argument_separator] = "argument_separator",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_token2] = "identifier_token2",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_DOLLAR] = "$",
  [sym_command_suffix] = "command_suffix",
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
  [aux_sym_array_declaration_arguments_token1] = {
    .visible = false,
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
  [sym_command_suffix] = {
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
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '$') ADVANCE(303);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') ADVANCE(298);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(244);
      if (lookahead == '_') ADVANCE(167);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(9);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(301);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == ';') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(302);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(243);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(134);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(161);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(224);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(11);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(129);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(169);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(38);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(106);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(53);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 37:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(128);
      END_STATE();
    case 38:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 39:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(276);
      END_STATE();
    case 40:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(251);
      END_STATE();
    case 41:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(262);
      END_STATE();
    case 42:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(130);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(43);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(119);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 43:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(122);
      END_STATE();
    case 44:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(133);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(92);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(45);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(179);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 45:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(121);
      END_STATE();
    case 46:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(139);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(207);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 93:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 94:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 95:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(268);
      END_STATE();
    case 96:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(260);
      END_STATE();
    case 97:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 98:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 99:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 100:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 101:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 102:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 103:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(289);
      END_STATE();
    case 104:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 105:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
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
          lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 120:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(56);
      END_STATE();
    case 121:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(82);
      END_STATE();
    case 122:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(90);
      END_STATE();
    case 123:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 124:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 125:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 126:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 127:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 128:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 129:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(170);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 130:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(171);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 131:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 132:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 133:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 134:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 135:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 136:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 137:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 141:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 142:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 143:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 144:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 145:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 150:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
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
          lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 156:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 167:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 168:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 169:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 171:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 172:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 173:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 174:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 175:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 176:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 177:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 178:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 179:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 180:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 181:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 182:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 183:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 184:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(272);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 186:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 187:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 189:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 190:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 191:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 192:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 194:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 195:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 205:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(229);
      END_STATE();
    case 206:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      END_STATE();
    case 207:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 208:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(275);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(249);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(256);
      END_STATE();
    case 214:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 215:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      END_STATE();
    case 216:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 217:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 218:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 219:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 220:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      END_STATE();
    case 221:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 222:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 223:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 224:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      END_STATE();
    case 225:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 226:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 227:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 228:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 229:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
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
          lookahead == 'u') ADVANCE(191);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_array_type_token1);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_array_type_token2);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_array_type_token3);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_array_type_token4);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_array_type_token5);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_array_type_token6);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_array_type_token7);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_array_type_token8);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_array_type_token9);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_array_type_token10);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_array_type_token11);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_array_type_token12);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_array_type_token13);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_array_type_token14);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_array_type_token15);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_array_type_token16);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_array_type_token17);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_array_type_token18);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_array_type_token19);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_array_type_token20);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_array_type_token21);
      if (lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_array_type_token22);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_array_type_token23);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_array_type_token24);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_c_type_token1);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_c_type_token2);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_c_type_token3);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_c_type_token4);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_c_type_token5);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_c_type_token6);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_c_type_token7);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_c_type_token8);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_c_type_token9);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_c_type_token10);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_c_type_token11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_c_type_token12);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_c_type_token13);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_c_type_token14);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_c_type_token15);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_c_type_token16);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_c_type_token17);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_c_type_token18);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_c_type_token19);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_c_type_token20);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_c_type_token21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_c_type_token22);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_c_type_token23);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_c_type_token24);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_c_type_token25);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_c_type_token26);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_array_declaration_arguments_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
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
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == ' ') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_command_suffix);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
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
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym_array_declaration_arguments_token1] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_argument_separator] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_command_suffix] = ACTIONS(1),
  },
  [1] = {
    [sym_source_code] = STATE(37),
    [sym__token] = STATE(2),
    [sym_array_declaration] = STATE(2),
    [sym_c_declaration] = STATE(2),
    [sym_array_type] = STATE(22),
    [sym_c_type] = STATE(21),
    [aux_sym_source_code_repeat1] = STATE(2),
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
  },
  [2] = {
    [sym__token] = STATE(3),
    [sym_array_declaration] = STATE(3),
    [sym_c_declaration] = STATE(3),
    [sym_array_type] = STATE(22),
    [sym_c_type] = STATE(21),
    [aux_sym_source_code_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
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
  },
  [3] = {
    [sym__token] = STATE(3),
    [sym_array_declaration] = STATE(3),
    [sym_c_declaration] = STATE(3),
    [sym_array_type] = STATE(22),
    [sym_c_type] = STATE(21),
    [aux_sym_source_code_repeat1] = STATE(3),
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
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_array_type_token1] = ACTIONS(29),
    [aux_sym_array_type_token2] = ACTIONS(29),
    [aux_sym_array_type_token3] = ACTIONS(29),
    [aux_sym_array_type_token4] = ACTIONS(29),
    [aux_sym_array_type_token5] = ACTIONS(29),
    [aux_sym_array_type_token6] = ACTIONS(29),
    [aux_sym_array_type_token7] = ACTIONS(29),
    [aux_sym_array_type_token8] = ACTIONS(29),
    [aux_sym_array_type_token9] = ACTIONS(29),
    [aux_sym_array_type_token10] = ACTIONS(29),
    [aux_sym_array_type_token11] = ACTIONS(29),
    [aux_sym_array_type_token12] = ACTIONS(29),
    [aux_sym_array_type_token13] = ACTIONS(29),
    [aux_sym_array_type_token14] = ACTIONS(29),
    [aux_sym_array_type_token15] = ACTIONS(29),
    [aux_sym_array_type_token16] = ACTIONS(29),
    [aux_sym_array_type_token17] = ACTIONS(29),
    [aux_sym_array_type_token18] = ACTIONS(29),
    [aux_sym_array_type_token19] = ACTIONS(29),
    [aux_sym_array_type_token20] = ACTIONS(29),
    [aux_sym_array_type_token21] = ACTIONS(31),
    [aux_sym_array_type_token22] = ACTIONS(29),
    [aux_sym_array_type_token23] = ACTIONS(29),
    [aux_sym_array_type_token24] = ACTIONS(29),
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
    [aux_sym_c_type_token11] = ACTIONS(31),
    [aux_sym_c_type_token12] = ACTIONS(29),
    [aux_sym_c_type_token13] = ACTIONS(29),
    [aux_sym_c_type_token14] = ACTIONS(29),
    [aux_sym_c_type_token15] = ACTIONS(29),
    [aux_sym_c_type_token16] = ACTIONS(29),
    [aux_sym_c_type_token17] = ACTIONS(29),
    [aux_sym_c_type_token18] = ACTIONS(29),
    [aux_sym_c_type_token19] = ACTIONS(29),
    [aux_sym_c_type_token20] = ACTIONS(29),
    [aux_sym_c_type_token21] = ACTIONS(31),
    [aux_sym_c_type_token22] = ACTIONS(29),
    [aux_sym_c_type_token23] = ACTIONS(29),
    [aux_sym_c_type_token24] = ACTIONS(29),
    [aux_sym_c_type_token25] = ACTIONS(29),
    [aux_sym_c_type_token26] = ACTIONS(29),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_array_type_token1] = ACTIONS(33),
    [aux_sym_array_type_token2] = ACTIONS(33),
    [aux_sym_array_type_token3] = ACTIONS(33),
    [aux_sym_array_type_token4] = ACTIONS(33),
    [aux_sym_array_type_token5] = ACTIONS(33),
    [aux_sym_array_type_token6] = ACTIONS(33),
    [aux_sym_array_type_token7] = ACTIONS(33),
    [aux_sym_array_type_token8] = ACTIONS(33),
    [aux_sym_array_type_token9] = ACTIONS(33),
    [aux_sym_array_type_token10] = ACTIONS(33),
    [aux_sym_array_type_token11] = ACTIONS(33),
    [aux_sym_array_type_token12] = ACTIONS(33),
    [aux_sym_array_type_token13] = ACTIONS(33),
    [aux_sym_array_type_token14] = ACTIONS(33),
    [aux_sym_array_type_token15] = ACTIONS(33),
    [aux_sym_array_type_token16] = ACTIONS(33),
    [aux_sym_array_type_token17] = ACTIONS(33),
    [aux_sym_array_type_token18] = ACTIONS(33),
    [aux_sym_array_type_token19] = ACTIONS(33),
    [aux_sym_array_type_token20] = ACTIONS(33),
    [aux_sym_array_type_token21] = ACTIONS(35),
    [aux_sym_array_type_token22] = ACTIONS(33),
    [aux_sym_array_type_token23] = ACTIONS(33),
    [aux_sym_array_type_token24] = ACTIONS(33),
    [aux_sym_c_type_token1] = ACTIONS(33),
    [aux_sym_c_type_token2] = ACTIONS(33),
    [aux_sym_c_type_token3] = ACTIONS(33),
    [aux_sym_c_type_token4] = ACTIONS(33),
    [aux_sym_c_type_token5] = ACTIONS(33),
    [aux_sym_c_type_token6] = ACTIONS(33),
    [aux_sym_c_type_token7] = ACTIONS(33),
    [aux_sym_c_type_token8] = ACTIONS(33),
    [aux_sym_c_type_token9] = ACTIONS(33),
    [aux_sym_c_type_token10] = ACTIONS(33),
    [aux_sym_c_type_token11] = ACTIONS(35),
    [aux_sym_c_type_token12] = ACTIONS(33),
    [aux_sym_c_type_token13] = ACTIONS(33),
    [aux_sym_c_type_token14] = ACTIONS(33),
    [aux_sym_c_type_token15] = ACTIONS(33),
    [aux_sym_c_type_token16] = ACTIONS(33),
    [aux_sym_c_type_token17] = ACTIONS(33),
    [aux_sym_c_type_token18] = ACTIONS(33),
    [aux_sym_c_type_token19] = ACTIONS(33),
    [aux_sym_c_type_token20] = ACTIONS(33),
    [aux_sym_c_type_token21] = ACTIONS(35),
    [aux_sym_c_type_token22] = ACTIONS(33),
    [aux_sym_c_type_token23] = ACTIONS(33),
    [aux_sym_c_type_token24] = ACTIONS(33),
    [aux_sym_c_type_token25] = ACTIONS(33),
    [aux_sym_c_type_token26] = ACTIONS(33),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_array_type_token1] = ACTIONS(37),
    [aux_sym_array_type_token2] = ACTIONS(37),
    [aux_sym_array_type_token3] = ACTIONS(37),
    [aux_sym_array_type_token4] = ACTIONS(37),
    [aux_sym_array_type_token5] = ACTIONS(37),
    [aux_sym_array_type_token6] = ACTIONS(37),
    [aux_sym_array_type_token7] = ACTIONS(37),
    [aux_sym_array_type_token8] = ACTIONS(37),
    [aux_sym_array_type_token9] = ACTIONS(37),
    [aux_sym_array_type_token10] = ACTIONS(37),
    [aux_sym_array_type_token11] = ACTIONS(37),
    [aux_sym_array_type_token12] = ACTIONS(37),
    [aux_sym_array_type_token13] = ACTIONS(37),
    [aux_sym_array_type_token14] = ACTIONS(37),
    [aux_sym_array_type_token15] = ACTIONS(37),
    [aux_sym_array_type_token16] = ACTIONS(37),
    [aux_sym_array_type_token17] = ACTIONS(37),
    [aux_sym_array_type_token18] = ACTIONS(37),
    [aux_sym_array_type_token19] = ACTIONS(37),
    [aux_sym_array_type_token20] = ACTIONS(37),
    [aux_sym_array_type_token21] = ACTIONS(39),
    [aux_sym_array_type_token22] = ACTIONS(37),
    [aux_sym_array_type_token23] = ACTIONS(37),
    [aux_sym_array_type_token24] = ACTIONS(37),
    [aux_sym_c_type_token1] = ACTIONS(37),
    [aux_sym_c_type_token2] = ACTIONS(37),
    [aux_sym_c_type_token3] = ACTIONS(37),
    [aux_sym_c_type_token4] = ACTIONS(37),
    [aux_sym_c_type_token5] = ACTIONS(37),
    [aux_sym_c_type_token6] = ACTIONS(37),
    [aux_sym_c_type_token7] = ACTIONS(37),
    [aux_sym_c_type_token8] = ACTIONS(37),
    [aux_sym_c_type_token9] = ACTIONS(37),
    [aux_sym_c_type_token10] = ACTIONS(37),
    [aux_sym_c_type_token11] = ACTIONS(39),
    [aux_sym_c_type_token12] = ACTIONS(37),
    [aux_sym_c_type_token13] = ACTIONS(37),
    [aux_sym_c_type_token14] = ACTIONS(37),
    [aux_sym_c_type_token15] = ACTIONS(37),
    [aux_sym_c_type_token16] = ACTIONS(37),
    [aux_sym_c_type_token17] = ACTIONS(37),
    [aux_sym_c_type_token18] = ACTIONS(37),
    [aux_sym_c_type_token19] = ACTIONS(37),
    [aux_sym_c_type_token20] = ACTIONS(37),
    [aux_sym_c_type_token21] = ACTIONS(39),
    [aux_sym_c_type_token22] = ACTIONS(37),
    [aux_sym_c_type_token23] = ACTIONS(37),
    [aux_sym_c_type_token24] = ACTIONS(37),
    [aux_sym_c_type_token25] = ACTIONS(37),
    [aux_sym_c_type_token26] = ACTIONS(37),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [aux_sym_array_type_token1] = ACTIONS(41),
    [aux_sym_array_type_token2] = ACTIONS(41),
    [aux_sym_array_type_token3] = ACTIONS(41),
    [aux_sym_array_type_token4] = ACTIONS(41),
    [aux_sym_array_type_token5] = ACTIONS(41),
    [aux_sym_array_type_token6] = ACTIONS(41),
    [aux_sym_array_type_token7] = ACTIONS(41),
    [aux_sym_array_type_token8] = ACTIONS(41),
    [aux_sym_array_type_token9] = ACTIONS(41),
    [aux_sym_array_type_token10] = ACTIONS(41),
    [aux_sym_array_type_token11] = ACTIONS(41),
    [aux_sym_array_type_token12] = ACTIONS(41),
    [aux_sym_array_type_token13] = ACTIONS(41),
    [aux_sym_array_type_token14] = ACTIONS(41),
    [aux_sym_array_type_token15] = ACTIONS(41),
    [aux_sym_array_type_token16] = ACTIONS(41),
    [aux_sym_array_type_token17] = ACTIONS(41),
    [aux_sym_array_type_token18] = ACTIONS(41),
    [aux_sym_array_type_token19] = ACTIONS(41),
    [aux_sym_array_type_token20] = ACTIONS(41),
    [aux_sym_array_type_token21] = ACTIONS(43),
    [aux_sym_array_type_token22] = ACTIONS(41),
    [aux_sym_array_type_token23] = ACTIONS(41),
    [aux_sym_array_type_token24] = ACTIONS(41),
    [aux_sym_c_type_token1] = ACTIONS(41),
    [aux_sym_c_type_token2] = ACTIONS(41),
    [aux_sym_c_type_token3] = ACTIONS(41),
    [aux_sym_c_type_token4] = ACTIONS(41),
    [aux_sym_c_type_token5] = ACTIONS(41),
    [aux_sym_c_type_token6] = ACTIONS(41),
    [aux_sym_c_type_token7] = ACTIONS(41),
    [aux_sym_c_type_token8] = ACTIONS(41),
    [aux_sym_c_type_token9] = ACTIONS(41),
    [aux_sym_c_type_token10] = ACTIONS(41),
    [aux_sym_c_type_token11] = ACTIONS(43),
    [aux_sym_c_type_token12] = ACTIONS(41),
    [aux_sym_c_type_token13] = ACTIONS(41),
    [aux_sym_c_type_token14] = ACTIONS(41),
    [aux_sym_c_type_token15] = ACTIONS(41),
    [aux_sym_c_type_token16] = ACTIONS(41),
    [aux_sym_c_type_token17] = ACTIONS(41),
    [aux_sym_c_type_token18] = ACTIONS(41),
    [aux_sym_c_type_token19] = ACTIONS(41),
    [aux_sym_c_type_token20] = ACTIONS(41),
    [aux_sym_c_type_token21] = ACTIONS(43),
    [aux_sym_c_type_token22] = ACTIONS(41),
    [aux_sym_c_type_token23] = ACTIONS(41),
    [aux_sym_c_type_token24] = ACTIONS(41),
    [aux_sym_c_type_token25] = ACTIONS(41),
    [aux_sym_c_type_token26] = ACTIONS(41),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(45),
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
    [aux_sym_array_type_token21] = ACTIONS(47),
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
    [aux_sym_c_type_token11] = ACTIONS(47),
    [aux_sym_c_type_token12] = ACTIONS(45),
    [aux_sym_c_type_token13] = ACTIONS(45),
    [aux_sym_c_type_token14] = ACTIONS(45),
    [aux_sym_c_type_token15] = ACTIONS(45),
    [aux_sym_c_type_token16] = ACTIONS(45),
    [aux_sym_c_type_token17] = ACTIONS(45),
    [aux_sym_c_type_token18] = ACTIONS(45),
    [aux_sym_c_type_token19] = ACTIONS(45),
    [aux_sym_c_type_token20] = ACTIONS(45),
    [aux_sym_c_type_token21] = ACTIONS(47),
    [aux_sym_c_type_token22] = ACTIONS(45),
    [aux_sym_c_type_token23] = ACTIONS(45),
    [aux_sym_c_type_token24] = ACTIONS(45),
    [aux_sym_c_type_token25] = ACTIONS(45),
    [aux_sym_c_type_token26] = ACTIONS(45),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(49),
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
    [aux_sym_array_type_token21] = ACTIONS(51),
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
    [aux_sym_c_type_token11] = ACTIONS(51),
    [aux_sym_c_type_token12] = ACTIONS(49),
    [aux_sym_c_type_token13] = ACTIONS(49),
    [aux_sym_c_type_token14] = ACTIONS(49),
    [aux_sym_c_type_token15] = ACTIONS(49),
    [aux_sym_c_type_token16] = ACTIONS(49),
    [aux_sym_c_type_token17] = ACTIONS(49),
    [aux_sym_c_type_token18] = ACTIONS(49),
    [aux_sym_c_type_token19] = ACTIONS(49),
    [aux_sym_c_type_token20] = ACTIONS(49),
    [aux_sym_c_type_token21] = ACTIONS(51),
    [aux_sym_c_type_token22] = ACTIONS(49),
    [aux_sym_c_type_token23] = ACTIONS(49),
    [aux_sym_c_type_token24] = ACTIONS(49),
    [aux_sym_c_type_token25] = ACTIONS(49),
    [aux_sym_c_type_token26] = ACTIONS(49),
  },
  [10] = {
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
  },
  [11] = {
    [sym_declaration_argument_list] = STATE(34),
    [sym_declaration_argument] = STATE(23),
    [sym_identifier] = STATE(28),
    [sym_interprocess_variable] = STATE(28),
    [sym_local_variable] = STATE(28),
    [sym_parameter] = STATE(28),
    [anon_sym_RPAREN] = ACTIONS(57),
    [aux_sym_identifier_token1] = ACTIONS(59),
    [anon_sym_LT_GT] = ACTIONS(61),
    [anon_sym_DOLLAR] = ACTIONS(63),
  },
  [12] = {
    [sym_declaration_argument] = STATE(36),
    [sym_identifier] = STATE(28),
    [sym_interprocess_variable] = STATE(28),
    [sym_local_variable] = STATE(28),
    [sym_parameter] = STATE(28),
    [aux_sym_array_declaration_arguments_token1] = ACTIONS(65),
    [aux_sym_identifier_token1] = ACTIONS(59),
    [anon_sym_LT_GT] = ACTIONS(61),
    [anon_sym_DOLLAR] = ACTIONS(63),
  },
  [13] = {
    [sym_declaration_argument] = STATE(32),
    [sym_identifier] = STATE(28),
    [sym_interprocess_variable] = STATE(28),
    [sym_local_variable] = STATE(28),
    [sym_parameter] = STATE(28),
    [aux_sym_identifier_token1] = ACTIONS(59),
    [anon_sym_LT_GT] = ACTIONS(61),
    [anon_sym_DOLLAR] = ACTIONS(63),
  },
  [14] = {
    [sym_declaration_argument] = STATE(35),
    [sym_identifier] = STATE(28),
    [sym_interprocess_variable] = STATE(28),
    [sym_local_variable] = STATE(28),
    [sym_parameter] = STATE(28),
    [aux_sym_identifier_token1] = ACTIONS(59),
    [anon_sym_LT_GT] = ACTIONS(61),
    [anon_sym_DOLLAR] = ACTIONS(63),
  },
  [15] = {
    [aux_sym_identifier_repeat1] = STATE(16),
    [anon_sym_RPAREN] = ACTIONS(67),
    [sym_argument_separator] = ACTIONS(67),
    [aux_sym_identifier_token2] = ACTIONS(69),
  },
  [16] = {
    [aux_sym_identifier_repeat1] = STATE(17),
    [anon_sym_RPAREN] = ACTIONS(71),
    [sym_argument_separator] = ACTIONS(71),
    [aux_sym_identifier_token2] = ACTIONS(73),
  },
  [17] = {
    [aux_sym_identifier_repeat1] = STATE(17),
    [anon_sym_RPAREN] = ACTIONS(75),
    [sym_argument_separator] = ACTIONS(75),
    [aux_sym_identifier_token2] = ACTIONS(77),
  },
  [18] = {
    [aux_sym_declaration_argument_list_repeat1] = STATE(18),
    [anon_sym_RPAREN] = ACTIONS(80),
    [sym_argument_separator] = ACTIONS(82),
  },
  [19] = {
    [sym_identifier] = STATE(27),
    [aux_sym_array_declaration_arguments_token1] = ACTIONS(85),
    [aux_sym_identifier_token1] = ACTIONS(59),
  },
  [20] = {
    [aux_sym_declaration_argument_list_repeat1] = STATE(18),
    [anon_sym_RPAREN] = ACTIONS(87),
    [sym_argument_separator] = ACTIONS(89),
  },
  [21] = {
    [sym_c_declaration_arguments] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(91),
    [sym_command_suffix] = ACTIONS(93),
  },
  [22] = {
    [sym_array_declaration_arguments] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(95),
    [sym_command_suffix] = ACTIONS(97),
  },
  [23] = {
    [aux_sym_declaration_argument_list_repeat1] = STATE(20),
    [anon_sym_RPAREN] = ACTIONS(99),
    [sym_argument_separator] = ACTIONS(89),
  },
  [24] = {
    [anon_sym_RPAREN] = ACTIONS(101),
    [sym_argument_separator] = ACTIONS(101),
  },
  [25] = {
    [anon_sym_RPAREN] = ACTIONS(103),
    [sym_argument_separator] = ACTIONS(103),
  },
  [26] = {
    [anon_sym_LPAREN] = ACTIONS(105),
    [sym_command_suffix] = ACTIONS(105),
  },
  [27] = {
    [anon_sym_RPAREN] = ACTIONS(107),
    [sym_argument_separator] = ACTIONS(107),
  },
  [28] = {
    [anon_sym_RPAREN] = ACTIONS(109),
    [sym_argument_separator] = ACTIONS(109),
  },
  [29] = {
    [sym_identifier] = STATE(25),
    [aux_sym_identifier_token1] = ACTIONS(59),
  },
  [30] = {
    [sym_c_declaration_arguments] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(91),
  },
  [31] = {
    [sym_array_declaration_arguments] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(95),
  },
  [32] = {
    [anon_sym_RPAREN] = ACTIONS(80),
    [sym_argument_separator] = ACTIONS(80),
  },
  [33] = {
    [anon_sym_LPAREN] = ACTIONS(111),
    [sym_command_suffix] = ACTIONS(111),
  },
  [34] = {
    [anon_sym_RPAREN] = ACTIONS(113),
  },
  [35] = {
    [sym_argument_separator] = ACTIONS(115),
  },
  [36] = {
    [anon_sym_RPAREN] = ACTIONS(117),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(119),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_code, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(26),
  [7] = {.count = 1, .reusable = false}, SHIFT(26),
  [9] = {.count = 1, .reusable = true}, SHIFT(33),
  [11] = {.count = 1, .reusable = false}, SHIFT(33),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_source_code, 1),
  [15] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2),
  [17] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(26),
  [20] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(26),
  [23] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(33),
  [26] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(33),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration, 2),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration, 2),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_array_declaration_arguments, 5),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_array_declaration_arguments, 5),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration, 3),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration, 3),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration_arguments, 2),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration_arguments, 2),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_array_declaration, 3),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_array_declaration, 3),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_c_declaration_arguments, 3),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_c_declaration_arguments, 3),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_array_declaration, 2),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_array_declaration, 2),
  [57] = {.count = 1, .reusable = true}, SHIFT(7),
  [59] = {.count = 1, .reusable = true}, SHIFT(15),
  [61] = {.count = 1, .reusable = true}, SHIFT(29),
  [63] = {.count = 1, .reusable = true}, SHIFT(19),
  [65] = {.count = 1, .reusable = true}, SHIFT(36),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(16),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 2),
  [73] = {.count = 1, .reusable = true}, SHIFT(17),
  [75] = {.count = 1, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(17),
  [80] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_argument_list_repeat1, 2),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_argument_list_repeat1, 2), SHIFT_REPEAT(13),
  [85] = {.count = 1, .reusable = true}, SHIFT(24),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_argument_list, 2),
  [89] = {.count = 1, .reusable = true}, SHIFT(13),
  [91] = {.count = 1, .reusable = true}, SHIFT(11),
  [93] = {.count = 1, .reusable = true}, SHIFT(30),
  [95] = {.count = 1, .reusable = true}, SHIFT(14),
  [97] = {.count = 1, .reusable = true}, SHIFT(31),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_argument_list, 1),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_interprocess_variable, 2),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_array_type, 1),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_local_variable, 2),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_argument, 1),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_c_type, 1),
  [113] = {.count = 1, .reusable = true}, SHIFT(9),
  [115] = {.count = 1, .reusable = true}, SHIFT(12),
  [117] = {.count = 1, .reusable = true}, SHIFT(5),
  [119] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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

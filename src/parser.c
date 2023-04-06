#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_ATstartyaml = 1,
  anon_sym_ATendyaml = 2,
  aux_sym__commandyaml_token1 = 3,
  anon_sym_ATstartuml = 4,
  anon_sym_ATenduml = 5,
  anon_sym_LF = 6,
  anon_sym_LPAREN_RPAREN = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_DOT = 10,
  anon_sym_GT = 11,
  anon_sym_LT = 12,
  anon_sym__ = 13,
  anon_sym_COLON = 14,
  anon_sym_STAR = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_POUND = 18,
  anon_sym_PIPE = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_RPAREN = 22,
  anon_sym_LPAREN = 23,
  anon_sym_DQUOTE = 24,
  aux_sym_string_token1 = 25,
  sym_escape_sequence = 26,
  sym_identifier = 27,
  sym__signallinecomment = 28,
  anon_sym_SLASH_SQUOTE = 29,
  aux_sym__mutilinecomment_token1 = 30,
  anon_sym_SQUOTE_SLASH = 31,
  anon_sym_ATstartjson = 32,
  anon_sym_ATendjson = 33,
  sym_plantuml = 34,
  sym_yamluml = 35,
  sym__commandyaml = 36,
  sym_baseuml = 37,
  sym_command = 38,
  sym__command_unit = 39,
  sym_method = 40,
  sym_block = 41,
  sym_uniqkey = 42,
  sym_bracket = 43,
  sym_string = 44,
  sym_color = 45,
  sym_colorleader = 46,
  sym_comment = 47,
  sym__mutilinecomment = 48,
  sym_jsonuml = 49,
  sym__commandjson = 50,
  aux_sym_yamluml_repeat1 = 51,
  aux_sym_baseuml_repeat1 = 52,
  aux_sym_command_repeat1 = 53,
  aux_sym_string_repeat1 = 54,
  aux_sym__mutilinecomment_repeat1 = 55,
  aux_sym_jsonuml_repeat1 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATstartyaml] = "@startyaml",
  [anon_sym_ATendyaml] = "@endyaml",
  [aux_sym__commandyaml_token1] = "_commandyaml_token1",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [anon_sym_LF] = "\n",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT] = ".",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym__] = "_",
  [anon_sym_COLON] = ":",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_POUND] = "#",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LPAREN] = "(",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_identifier] = "identifier",
  [sym__signallinecomment] = "_signallinecomment",
  [anon_sym_SLASH_SQUOTE] = "/'",
  [aux_sym__mutilinecomment_token1] = "_mutilinecomment_token1",
  [anon_sym_SQUOTE_SLASH] = "'/",
  [anon_sym_ATstartjson] = "@startjson",
  [anon_sym_ATendjson] = "@endjson",
  [sym_plantuml] = "plantuml",
  [sym_yamluml] = "yamluml",
  [sym__commandyaml] = "_commandyaml",
  [sym_baseuml] = "baseuml",
  [sym_command] = "command",
  [sym__command_unit] = "_command_unit",
  [sym_method] = "method",
  [sym_block] = "block",
  [sym_uniqkey] = "uniqkey",
  [sym_bracket] = "bracket",
  [sym_string] = "string",
  [sym_color] = "color",
  [sym_colorleader] = "colorleader",
  [sym_comment] = "comment",
  [sym__mutilinecomment] = "_mutilinecomment",
  [sym_jsonuml] = "jsonuml",
  [sym__commandjson] = "_commandjson",
  [aux_sym_yamluml_repeat1] = "yamluml_repeat1",
  [aux_sym_baseuml_repeat1] = "baseuml_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__mutilinecomment_repeat1] = "_mutilinecomment_repeat1",
  [aux_sym_jsonuml_repeat1] = "jsonuml_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATstartyaml] = anon_sym_ATstartyaml,
  [anon_sym_ATendyaml] = anon_sym_ATendyaml,
  [aux_sym__commandyaml_token1] = aux_sym__commandyaml_token1,
  [anon_sym_ATstartuml] = anon_sym_ATstartuml,
  [anon_sym_ATenduml] = anon_sym_ATenduml,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym__] = anon_sym__,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_identifier] = sym_identifier,
  [sym__signallinecomment] = sym__signallinecomment,
  [anon_sym_SLASH_SQUOTE] = anon_sym_SLASH_SQUOTE,
  [aux_sym__mutilinecomment_token1] = aux_sym__mutilinecomment_token1,
  [anon_sym_SQUOTE_SLASH] = anon_sym_SQUOTE_SLASH,
  [anon_sym_ATstartjson] = anon_sym_ATstartjson,
  [anon_sym_ATendjson] = anon_sym_ATendjson,
  [sym_plantuml] = sym_plantuml,
  [sym_yamluml] = sym_yamluml,
  [sym__commandyaml] = sym__commandyaml,
  [sym_baseuml] = sym_baseuml,
  [sym_command] = sym_command,
  [sym__command_unit] = sym__command_unit,
  [sym_method] = sym_method,
  [sym_block] = sym_block,
  [sym_uniqkey] = sym_uniqkey,
  [sym_bracket] = sym_bracket,
  [sym_string] = sym_string,
  [sym_color] = sym_color,
  [sym_colorleader] = sym_colorleader,
  [sym_comment] = sym_comment,
  [sym__mutilinecomment] = sym__mutilinecomment,
  [sym_jsonuml] = sym_jsonuml,
  [sym__commandjson] = sym__commandjson,
  [aux_sym_yamluml_repeat1] = aux_sym_yamluml_repeat1,
  [aux_sym_baseuml_repeat1] = aux_sym_baseuml_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym__mutilinecomment_repeat1] = aux_sym__mutilinecomment_repeat1,
  [aux_sym_jsonuml_repeat1] = aux_sym_jsonuml_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATstartyaml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendyaml] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__commandyaml_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATstartuml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATenduml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__signallinecomment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__mutilinecomment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATstartjson] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendjson] = {
    .visible = true,
    .named = false,
  },
  [sym_plantuml] = {
    .visible = true,
    .named = true,
  },
  [sym_yamluml] = {
    .visible = true,
    .named = true,
  },
  [sym__commandyaml] = {
    .visible = false,
    .named = true,
  },
  [sym_baseuml] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__command_unit] = {
    .visible = false,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_uniqkey] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym_colorleader] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__mutilinecomment] = {
    .visible = false,
    .named = true,
  },
  [sym_jsonuml] = {
    .visible = true,
    .named = true,
  },
  [sym__commandjson] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_yamluml_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_baseuml_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mutilinecomment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_jsonuml_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_json = 1,
  field_yaml = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_json] = "json",
  [field_yaml] = "yaml",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_yaml, 1},
  [1] =
    {field_json, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '^') ADVANCE(100);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(98);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(101);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'j') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'j') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == 'y') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(95);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == '{') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == '}') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'j') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'y') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(72);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__signallinecomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__mutilinecomment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__mutilinecomment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SLASH);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATstartyaml] = ACTIONS(1),
    [anon_sym_ATendyaml] = ACTIONS(1),
    [anon_sym_ATstartuml] = ACTIONS(1),
    [anon_sym_ATenduml] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SLASH] = ACTIONS(1),
    [anon_sym_ATstartjson] = ACTIONS(1),
    [anon_sym_ATendjson] = ACTIONS(1),
  },
  [1] = {
    [sym_plantuml] = STATE(43),
    [sym_yamluml] = STATE(42),
    [sym_baseuml] = STATE(42),
    [sym_jsonuml] = STATE(42),
    [anon_sym_ATstartyaml] = ACTIONS(3),
    [anon_sym_ATstartuml] = ACTIONS(5),
    [anon_sym_ATstartjson] = ACTIONS(7),
  },
  [2] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(7),
    [sym_method] = STATE(7),
    [sym_block] = STATE(7),
    [sym_uniqkey] = STATE(7),
    [sym_bracket] = STATE(7),
    [sym_string] = STATE(7),
    [sym_color] = STATE(7),
    [sym_colorleader] = STATE(37),
    [sym_comment] = STATE(7),
    [sym__mutilinecomment] = STATE(17),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(7),
    [anon_sym_ATenduml] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(14),
    [anon_sym_GT] = ACTIONS(14),
    [anon_sym_LT] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [anon_sym_COLON] = ACTIONS(14),
    [anon_sym_STAR] = ACTIONS(14),
    [anon_sym_PLUS] = ACTIONS(14),
    [anon_sym_DASH] = ACTIONS(14),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(14),
    [anon_sym_LBRACK] = ACTIONS(20),
    [anon_sym_RBRACK] = ACTIONS(20),
    [anon_sym_RPAREN] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_identifier] = ACTIONS(26),
    [sym__signallinecomment] = ACTIONS(29),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(32),
  },
  [3] = {
    [sym_command] = STATE(5),
    [sym__command_unit] = STATE(7),
    [sym_method] = STATE(7),
    [sym_block] = STATE(7),
    [sym_uniqkey] = STATE(7),
    [sym_bracket] = STATE(7),
    [sym_string] = STATE(7),
    [sym_color] = STATE(7),
    [sym_colorleader] = STATE(37),
    [sym_comment] = STATE(7),
    [sym__mutilinecomment] = STATE(17),
    [aux_sym_baseuml_repeat1] = STATE(5),
    [aux_sym_command_repeat1] = STATE(7),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym__signallinecomment] = ACTIONS(49),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(51),
  },
  [4] = {
    [sym_command] = STATE(6),
    [sym__command_unit] = STATE(7),
    [sym_method] = STATE(7),
    [sym_block] = STATE(7),
    [sym_uniqkey] = STATE(7),
    [sym_bracket] = STATE(7),
    [sym_string] = STATE(7),
    [sym_color] = STATE(7),
    [sym_colorleader] = STATE(37),
    [sym_comment] = STATE(7),
    [sym__mutilinecomment] = STATE(17),
    [aux_sym_baseuml_repeat1] = STATE(6),
    [aux_sym_command_repeat1] = STATE(7),
    [anon_sym_ATenduml] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym__signallinecomment] = ACTIONS(49),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(51),
  },
  [5] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(7),
    [sym_method] = STATE(7),
    [sym_block] = STATE(7),
    [sym_uniqkey] = STATE(7),
    [sym_bracket] = STATE(7),
    [sym_string] = STATE(7),
    [sym_color] = STATE(7),
    [sym_colorleader] = STATE(37),
    [sym_comment] = STATE(7),
    [sym__mutilinecomment] = STATE(17),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(7),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym__signallinecomment] = ACTIONS(49),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(51),
  },
  [6] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(7),
    [sym_method] = STATE(7),
    [sym_block] = STATE(7),
    [sym_uniqkey] = STATE(7),
    [sym_bracket] = STATE(7),
    [sym_string] = STATE(7),
    [sym_color] = STATE(7),
    [sym_colorleader] = STATE(37),
    [sym_comment] = STATE(7),
    [sym__mutilinecomment] = STATE(17),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(7),
    [anon_sym_ATenduml] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym__signallinecomment] = ACTIONS(49),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(51),
  },
  [7] = {
    [sym__command_unit] = STATE(8),
    [sym_method] = STATE(8),
    [sym_block] = STATE(8),
    [sym_uniqkey] = STATE(8),
    [sym_bracket] = STATE(8),
    [sym_string] = STATE(8),
    [sym_color] = STATE(8),
    [sym_colorleader] = STATE(37),
    [sym_comment] = STATE(8),
    [sym__mutilinecomment] = STATE(17),
    [aux_sym_command_repeat1] = STATE(8),
    [anon_sym_LF] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym__signallinecomment] = ACTIONS(73),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(75),
  },
  [8] = {
    [sym__command_unit] = STATE(8),
    [sym_method] = STATE(8),
    [sym_block] = STATE(8),
    [sym_uniqkey] = STATE(8),
    [sym_bracket] = STATE(8),
    [sym_string] = STATE(8),
    [sym_color] = STATE(8),
    [sym_colorleader] = STATE(37),
    [sym_comment] = STATE(8),
    [sym__mutilinecomment] = STATE(17),
    [aux_sym_command_repeat1] = STATE(8),
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_DOT] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym__] = ACTIONS(82),
    [anon_sym_COLON] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [anon_sym_POUND] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_RBRACK] = ACTIONS(88),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_identifier] = ACTIONS(94),
    [sym__signallinecomment] = ACTIONS(97),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(100),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(103), 1,
      anon_sym_LF,
    ACTIONS(105), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(107), 19,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [28] = 1,
    ACTIONS(109), 21,
      anon_sym_ATenduml,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [52] = 2,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(113), 19,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [77] = 2,
    ACTIONS(115), 1,
      anon_sym_LF,
    ACTIONS(117), 19,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [102] = 3,
    ACTIONS(115), 1,
      anon_sym_LF,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(117), 18,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [129] = 2,
    ACTIONS(122), 1,
      anon_sym_LF,
    ACTIONS(124), 19,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [154] = 2,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(128), 19,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [179] = 2,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(132), 19,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [204] = 2,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(136), 19,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [229] = 2,
    ACTIONS(138), 1,
      anon_sym_LF,
    ACTIONS(140), 19,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [254] = 2,
    ACTIONS(142), 1,
      anon_sym_LF,
    ACTIONS(144), 19,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [279] = 2,
    ACTIONS(146), 1,
      anon_sym_LF,
    ACTIONS(148), 19,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [304] = 2,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(152), 19,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [329] = 2,
    ACTIONS(154), 1,
      anon_sym_LF,
    ACTIONS(156), 19,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [354] = 3,
    ACTIONS(158), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(160), 1,
      anon_sym_ATendjson,
    STATE(29), 2,
      sym__commandjson,
      aux_sym_jsonuml_repeat1,
  [365] = 3,
    ACTIONS(162), 1,
      anon_sym_ATendyaml,
    ACTIONS(164), 1,
      aux_sym__commandyaml_token1,
    STATE(24), 2,
      sym__commandyaml,
      aux_sym_yamluml_repeat1,
  [376] = 3,
    ACTIONS(167), 1,
      anon_sym_ATendyaml,
    ACTIONS(169), 1,
      aux_sym__commandyaml_token1,
    STATE(28), 2,
      sym__commandyaml,
      aux_sym_yamluml_repeat1,
  [387] = 3,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_string_repeat1,
    ACTIONS(173), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [398] = 3,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_string_repeat1,
    ACTIONS(177), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [409] = 3,
    ACTIONS(179), 1,
      anon_sym_ATendyaml,
    ACTIONS(181), 1,
      aux_sym__commandyaml_token1,
    STATE(24), 2,
      sym__commandyaml,
      aux_sym_yamluml_repeat1,
  [420] = 3,
    ACTIONS(183), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(186), 1,
      anon_sym_ATendjson,
    STATE(29), 2,
      sym__commandjson,
      aux_sym_jsonuml_repeat1,
  [431] = 3,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_string_repeat1,
    ACTIONS(190), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [442] = 3,
    ACTIONS(193), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(195), 1,
      anon_sym_ATendjson,
    STATE(23), 2,
      sym__commandjson,
      aux_sym_jsonuml_repeat1,
  [453] = 3,
    ACTIONS(197), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(33), 1,
      aux_sym__mutilinecomment_repeat1,
  [463] = 3,
    ACTIONS(201), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(203), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(34), 1,
      aux_sym__mutilinecomment_repeat1,
  [473] = 3,
    ACTIONS(205), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(208), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(34), 1,
      aux_sym__mutilinecomment_repeat1,
  [483] = 1,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
  [487] = 1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
  [491] = 1,
    ACTIONS(214), 1,
      sym_identifier,
  [495] = 1,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
  [499] = 1,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
  [503] = 1,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
  [507] = 1,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
  [511] = 1,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
  [515] = 1,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 28,
  [SMALL_STATE(11)] = 52,
  [SMALL_STATE(12)] = 77,
  [SMALL_STATE(13)] = 102,
  [SMALL_STATE(14)] = 129,
  [SMALL_STATE(15)] = 154,
  [SMALL_STATE(16)] = 179,
  [SMALL_STATE(17)] = 204,
  [SMALL_STATE(18)] = 229,
  [SMALL_STATE(19)] = 254,
  [SMALL_STATE(20)] = 279,
  [SMALL_STATE(21)] = 304,
  [SMALL_STATE(22)] = 329,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 365,
  [SMALL_STATE(25)] = 376,
  [SMALL_STATE(26)] = 387,
  [SMALL_STATE(27)] = 398,
  [SMALL_STATE(28)] = 409,
  [SMALL_STATE(29)] = 420,
  [SMALL_STATE(30)] = 431,
  [SMALL_STATE(31)] = 442,
  [SMALL_STATE(32)] = 453,
  [SMALL_STATE(33)] = 463,
  [SMALL_STATE(34)] = 473,
  [SMALL_STATE(35)] = 483,
  [SMALL_STATE(36)] = 487,
  [SMALL_STATE(37)] = 491,
  [SMALL_STATE(38)] = 495,
  [SMALL_STATE(39)] = 499,
  [SMALL_STATE(40)] = 503,
  [SMALL_STATE(41)] = 507,
  [SMALL_STATE(42)] = 511,
  [SMALL_STATE(43)] = 515,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(3),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(12),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(13),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(14),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(27),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(9),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(17),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(32),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(12),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(13),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(14),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(27),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(9),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(17),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(32),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_unit, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_unit, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uniqkey, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uniqkey, 1),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_uniqkey, 1), REDUCE(sym_colorleader, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutilinecomment, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutilinecomment, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutilinecomment, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutilinecomment, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_yamluml_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yamluml_repeat1, 2), SHIFT_REPEAT(24),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_jsonuml_repeat1, 2), SHIFT_REPEAT(29),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_jsonuml_repeat1, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(30),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutilinecomment_repeat1, 2), SHIFT_REPEAT(34),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mutilinecomment_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yamluml, 3, .production_id = 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yamluml, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 3, .production_id = 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plantuml, 1),
  [226] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_plantuml(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_ATstartyaml = 1,
  anon_sym_ATendyaml = 2,
  aux_sym__commandyaml_token1 = 3,
  anon_sym_ATstartuml = 4,
  anon_sym_ATenduml = 5,
  anon_sym_LF = 6,
  anon_sym_LPAREN_RPAREN = 7,
  anon_sym_DOLLAR = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_DOT = 13,
  anon_sym_GT = 14,
  anon_sym_LT = 15,
  anon_sym__ = 16,
  anon_sym_COLON = 17,
  anon_sym_STAR = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  anon_sym_POUND = 21,
  anon_sym_BANG = 22,
  anon_sym_SLASH = 23,
  anon_sym_PIPE = 24,
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  anon_sym_DQUOTE = 27,
  aux_sym_string_token1 = 28,
  sym_escape_sequence = 29,
  sym_identifier = 30,
  sym__signallinecomment = 31,
  anon_sym_SLASH_SQUOTE = 32,
  aux_sym__mutilinecomment_token1 = 33,
  anon_sym_SQUOTE_SLASH = 34,
  anon_sym_ATstartjson = 35,
  anon_sym_ATendjson = 36,
  sym_plantuml = 37,
  sym_yamluml = 38,
  sym__commandyaml = 39,
  sym_baseuml = 40,
  sym_command = 41,
  sym__command_unit = 42,
  sym_method = 43,
  sym_message = 44,
  sym_block = 45,
  sym_uniqkey = 46,
  sym_bracket = 47,
  sym_string = 48,
  sym_color = 49,
  sym_colorleader = 50,
  sym_comment = 51,
  sym__mutilinecomment = 52,
  sym_jsonuml = 53,
  sym__commandjson = 54,
  aux_sym_yamluml_repeat1 = 55,
  aux_sym_baseuml_repeat1 = 56,
  aux_sym_command_repeat1 = 57,
  aux_sym_string_repeat1 = 58,
  aux_sym__mutilinecomment_repeat1 = 59,
  aux_sym_jsonuml_repeat1 = 60,
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
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_BANG] = "!",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym_message] = "message",
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
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_message] = sym_message,
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
  [anon_sym_DOLLAR] = {
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
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
  [sym_message] = {
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
  [30] = 28,
  [31] = 26,
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
  [50] = 22,
  [51] = 11,
  [52] = 52,
  [53] = 53,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '@') ADVANCE(14);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '|') ADVANCE(89);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '|') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '|') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '^') ADVANCE(102);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '|') ADVANCE(89);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(103);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'j') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'y') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'j') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(18);
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
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(97);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == '{') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == '}') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '@') ADVANCE(14);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '|') ADVANCE(89);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'j') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'y') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(71);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(100);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__signallinecomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__mutilinecomment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__mutilinecomment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SLASH);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
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
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATstartyaml] = ACTIONS(1),
    [anon_sym_ATendyaml] = ACTIONS(1),
    [anon_sym_ATstartuml] = ACTIONS(1),
    [anon_sym_ATenduml] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SLASH] = ACTIONS(1),
    [anon_sym_ATstartjson] = ACTIONS(1),
    [anon_sym_ATendjson] = ACTIONS(1),
  },
  [1] = {
    [sym_plantuml] = STATE(47),
    [sym_yamluml] = STATE(46),
    [sym_baseuml] = STATE(46),
    [sym_jsonuml] = STATE(46),
    [anon_sym_ATstartyaml] = ACTIONS(3),
    [anon_sym_ATstartuml] = ACTIONS(5),
    [anon_sym_ATstartjson] = ACTIONS(7),
  },
  [2] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(7),
    [sym_method] = STATE(7),
    [sym_message] = STATE(7),
    [sym_block] = STATE(7),
    [sym_uniqkey] = STATE(7),
    [sym_bracket] = STATE(7),
    [sym_string] = STATE(7),
    [sym_color] = STATE(7),
    [sym_colorleader] = STATE(52),
    [sym_comment] = STATE(7),
    [sym__mutilinecomment] = STATE(17),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(7),
    [anon_sym_ATenduml] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(20),
    [anon_sym_GT] = ACTIONS(20),
    [anon_sym_LT] = ACTIONS(20),
    [anon_sym__] = ACTIONS(20),
    [anon_sym_COLON] = ACTIONS(20),
    [anon_sym_STAR] = ACTIONS(20),
    [anon_sym_PLUS] = ACTIONS(20),
    [anon_sym_DASH] = ACTIONS(20),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(20),
    [anon_sym_SLASH] = ACTIONS(26),
    [anon_sym_PIPE] = ACTIONS(20),
    [anon_sym_LBRACK] = ACTIONS(14),
    [anon_sym_RBRACK] = ACTIONS(14),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(32),
    [sym__signallinecomment] = ACTIONS(35),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(38),
  },
  [3] = {
    [sym_command] = STATE(4),
    [sym__command_unit] = STATE(7),
    [sym_method] = STATE(7),
    [sym_message] = STATE(7),
    [sym_block] = STATE(7),
    [sym_uniqkey] = STATE(7),
    [sym_bracket] = STATE(7),
    [sym_string] = STATE(7),
    [sym_color] = STATE(7),
    [sym_colorleader] = STATE(52),
    [sym_comment] = STATE(7),
    [sym__mutilinecomment] = STATE(17),
    [aux_sym_baseuml_repeat1] = STATE(4),
    [aux_sym_command_repeat1] = STATE(7),
    [anon_sym_DOLLAR] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym__] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym__signallinecomment] = ACTIONS(59),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(61),
  },
  [4] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(7),
    [sym_method] = STATE(7),
    [sym_message] = STATE(7),
    [sym_block] = STATE(7),
    [sym_uniqkey] = STATE(7),
    [sym_bracket] = STATE(7),
    [sym_string] = STATE(7),
    [sym_color] = STATE(7),
    [sym_colorleader] = STATE(52),
    [sym_comment] = STATE(7),
    [sym__mutilinecomment] = STATE(17),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(7),
    [anon_sym_DOLLAR] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym__] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym__signallinecomment] = ACTIONS(59),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(61),
  },
  [5] = {
    [sym_command] = STATE(6),
    [sym__command_unit] = STATE(7),
    [sym_method] = STATE(7),
    [sym_message] = STATE(7),
    [sym_block] = STATE(7),
    [sym_uniqkey] = STATE(7),
    [sym_bracket] = STATE(7),
    [sym_string] = STATE(7),
    [sym_color] = STATE(7),
    [sym_colorleader] = STATE(52),
    [sym_comment] = STATE(7),
    [sym__mutilinecomment] = STATE(17),
    [aux_sym_baseuml_repeat1] = STATE(6),
    [aux_sym_command_repeat1] = STATE(7),
    [anon_sym_ATenduml] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym__] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym__signallinecomment] = ACTIONS(59),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(61),
  },
  [6] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(7),
    [sym_method] = STATE(7),
    [sym_message] = STATE(7),
    [sym_block] = STATE(7),
    [sym_uniqkey] = STATE(7),
    [sym_bracket] = STATE(7),
    [sym_string] = STATE(7),
    [sym_color] = STATE(7),
    [sym_colorleader] = STATE(52),
    [sym_comment] = STATE(7),
    [sym__mutilinecomment] = STATE(17),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(7),
    [anon_sym_ATenduml] = ACTIONS(67),
    [anon_sym_DOLLAR] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym__] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym__signallinecomment] = ACTIONS(59),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(61),
  },
  [7] = {
    [sym__command_unit] = STATE(8),
    [sym_method] = STATE(8),
    [sym_message] = STATE(8),
    [sym_block] = STATE(8),
    [sym_uniqkey] = STATE(8),
    [sym_bracket] = STATE(8),
    [sym_string] = STATE(8),
    [sym_color] = STATE(8),
    [sym_colorleader] = STATE(52),
    [sym_comment] = STATE(8),
    [sym__mutilinecomment] = STATE(17),
    [aux_sym_command_repeat1] = STATE(8),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_DOLLAR] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym__] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
    [sym__signallinecomment] = ACTIONS(83),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(85),
  },
  [8] = {
    [sym__command_unit] = STATE(8),
    [sym_method] = STATE(8),
    [sym_message] = STATE(8),
    [sym_block] = STATE(8),
    [sym_uniqkey] = STATE(8),
    [sym_bracket] = STATE(8),
    [sym_string] = STATE(8),
    [sym_color] = STATE(8),
    [sym_colorleader] = STATE(52),
    [sym_comment] = STATE(8),
    [sym__mutilinecomment] = STATE(17),
    [aux_sym_command_repeat1] = STATE(8),
    [anon_sym_LF] = ACTIONS(87),
    [anon_sym_DOLLAR] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_GT] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_POUND] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [sym_identifier] = ACTIONS(107),
    [sym__signallinecomment] = ACTIONS(110),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(113),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(118), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(120), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [31] = 2,
    ACTIONS(124), 1,
      anon_sym_SLASH,
    ACTIONS(122), 23,
      anon_sym_ATenduml,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [60] = 2,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(128), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [88] = 2,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(132), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [116] = 2,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(136), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [144] = 3,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(136), 21,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [174] = 2,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(143), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [202] = 2,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(147), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [230] = 2,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(151), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [258] = 2,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(155), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [286] = 2,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(159), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [314] = 2,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(163), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [342] = 2,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(167), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [370] = 2,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(171), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [398] = 2,
    ACTIONS(173), 1,
      anon_sym_LF,
    ACTIONS(175), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [426] = 2,
    ACTIONS(177), 1,
      anon_sym_LF,
    ACTIONS(179), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [454] = 3,
    ACTIONS(181), 1,
      anon_sym_ATendyaml,
    ACTIONS(183), 1,
      aux_sym__commandyaml_token1,
    STATE(25), 2,
      sym__commandyaml,
      aux_sym_yamluml_repeat1,
  [465] = 3,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_string_repeat1,
    ACTIONS(188), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [476] = 3,
    ACTIONS(190), 1,
      anon_sym_ATendyaml,
    ACTIONS(192), 1,
      aux_sym__commandyaml_token1,
    STATE(34), 2,
      sym__commandyaml,
      aux_sym_yamluml_repeat1,
  [487] = 3,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_string_repeat1,
    ACTIONS(196), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [498] = 3,
    ACTIONS(198), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(200), 1,
      anon_sym_ATendjson,
    STATE(35), 2,
      sym__commandjson,
      aux_sym_jsonuml_repeat1,
  [509] = 3,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_string_repeat1,
    ACTIONS(196), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [520] = 3,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_repeat1,
    ACTIONS(206), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [531] = 3,
    ACTIONS(208), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(210), 1,
      anon_sym_ATendjson,
    STATE(29), 2,
      sym__commandjson,
      aux_sym_jsonuml_repeat1,
  [542] = 3,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_string_repeat1,
    ACTIONS(214), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [553] = 3,
    ACTIONS(217), 1,
      anon_sym_ATendyaml,
    ACTIONS(219), 1,
      aux_sym__commandyaml_token1,
    STATE(25), 2,
      sym__commandyaml,
      aux_sym_yamluml_repeat1,
  [564] = 3,
    ACTIONS(221), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(224), 1,
      anon_sym_ATendjson,
    STATE(35), 2,
      sym__commandjson,
      aux_sym_jsonuml_repeat1,
  [575] = 3,
    ACTIONS(226), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(228), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(39), 1,
      aux_sym__mutilinecomment_repeat1,
  [585] = 3,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_string,
  [595] = 3,
    ACTIONS(234), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(236), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(36), 1,
      aux_sym__mutilinecomment_repeat1,
  [605] = 3,
    ACTIONS(238), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(241), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(39), 1,
      aux_sym__mutilinecomment_repeat1,
  [615] = 1,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
  [619] = 1,
    ACTIONS(245), 1,
      sym_identifier,
  [623] = 1,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
  [627] = 1,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
  [631] = 1,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
  [635] = 1,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
  [639] = 1,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
  [643] = 1,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
  [647] = 1,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
  [651] = 1,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
  [655] = 1,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
  [659] = 1,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
  [663] = 1,
    ACTIONS(263), 1,
      sym_identifier,
  [667] = 1,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 31,
  [SMALL_STATE(11)] = 60,
  [SMALL_STATE(12)] = 88,
  [SMALL_STATE(13)] = 116,
  [SMALL_STATE(14)] = 144,
  [SMALL_STATE(15)] = 174,
  [SMALL_STATE(16)] = 202,
  [SMALL_STATE(17)] = 230,
  [SMALL_STATE(18)] = 258,
  [SMALL_STATE(19)] = 286,
  [SMALL_STATE(20)] = 314,
  [SMALL_STATE(21)] = 342,
  [SMALL_STATE(22)] = 370,
  [SMALL_STATE(23)] = 398,
  [SMALL_STATE(24)] = 426,
  [SMALL_STATE(25)] = 454,
  [SMALL_STATE(26)] = 465,
  [SMALL_STATE(27)] = 476,
  [SMALL_STATE(28)] = 487,
  [SMALL_STATE(29)] = 498,
  [SMALL_STATE(30)] = 509,
  [SMALL_STATE(31)] = 520,
  [SMALL_STATE(32)] = 531,
  [SMALL_STATE(33)] = 542,
  [SMALL_STATE(34)] = 553,
  [SMALL_STATE(35)] = 564,
  [SMALL_STATE(36)] = 575,
  [SMALL_STATE(37)] = 585,
  [SMALL_STATE(38)] = 595,
  [SMALL_STATE(39)] = 605,
  [SMALL_STATE(40)] = 615,
  [SMALL_STATE(41)] = 619,
  [SMALL_STATE(42)] = 623,
  [SMALL_STATE(43)] = 627,
  [SMALL_STATE(44)] = 631,
  [SMALL_STATE(45)] = 635,
  [SMALL_STATE(46)] = 639,
  [SMALL_STATE(47)] = 643,
  [SMALL_STATE(48)] = 647,
  [SMALL_STATE(49)] = 651,
  [SMALL_STATE(50)] = 655,
  [SMALL_STATE(51)] = 659,
  [SMALL_STATE(52)] = 663,
  [SMALL_STATE(53)] = 667,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(41),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(12),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(3),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(13),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(14),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(13),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(26),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(9),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(17),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(38),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(41),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(12),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(13),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(14),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(9),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(17),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(38),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_unit, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_unit, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uniqkey, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uniqkey, 1),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_uniqkey, 1), REDUCE(sym_colorleader, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 5),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutilinecomment, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutilinecomment, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutilinecomment, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutilinecomment, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_yamluml_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yamluml_repeat1, 2), SHIFT_REPEAT(25),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(33),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_jsonuml_repeat1, 2), SHIFT_REPEAT(35),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_jsonuml_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutilinecomment_repeat1, 2), SHIFT_REPEAT(39),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mutilinecomment_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 3, .production_id = 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yamluml, 3, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yamluml, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plantuml, 1),
  [257] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 2),
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

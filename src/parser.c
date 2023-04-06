#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 63
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
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_DOT = 15,
  anon_sym_GT = 16,
  anon_sym_LT = 17,
  anon_sym__ = 18,
  anon_sym_COLON = 19,
  anon_sym_STAR = 20,
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  anon_sym_POUND = 23,
  anon_sym_BANG = 24,
  anon_sym_SLASH = 25,
  anon_sym_PIPE = 26,
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
  sym__block_1 = 46,
  sym__block_2 = 47,
  sym__block_3 = 48,
  sym_uniqkey = 49,
  sym_string = 50,
  sym_color = 51,
  sym_colorleader = 52,
  sym_comment = 53,
  sym__mutilinecomment = 54,
  sym_jsonuml = 55,
  sym__commandjson = 56,
  aux_sym_yamluml_repeat1 = 57,
  aux_sym_baseuml_repeat1 = 58,
  aux_sym_command_repeat1 = 59,
  aux_sym_string_repeat1 = 60,
  aux_sym__mutilinecomment_repeat1 = 61,
  aux_sym_jsonuml_repeat1 = 62,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym__block_1] = "_block_1",
  [sym__block_2] = "_block_2",
  [sym__block_3] = "_block_3",
  [sym_uniqkey] = "uniqkey",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym__block_1] = sym__block_1,
  [sym__block_2] = sym__block_2,
  [sym__block_3] = sym__block_3,
  [sym_uniqkey] = sym_uniqkey,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym__block_1] = {
    .visible = false,
    .named = true,
  },
  [sym__block_2] = {
    .visible = false,
    .named = true,
  },
  [sym__block_3] = {
    .visible = false,
    .named = true,
  },
  [sym_uniqkey] = {
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
  [36] = 34,
  [37] = 35,
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
  [58] = 30,
  [59] = 23,
  [60] = 60,
  [61] = 61,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      if (lookahead == '!') ADVANCE(89);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '@') ADVANCE(14);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '|') ADVANCE(91);
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
      if (lookahead == '!') ADVANCE(89);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '!') ADVANCE(89);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '|') ADVANCE(91);
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
      if (lookahead == '!') ADVANCE(89);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '|') ADVANCE(91);
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
      if (lookahead == '!') ADVANCE(89);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '@') ADVANCE(14);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '|') ADVANCE(91);
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
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'd') ADVANCE(66);
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
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(100);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PIPE);
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
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 1},
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
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SLASH] = ACTIONS(1),
    [anon_sym_ATstartjson] = ACTIONS(1),
    [anon_sym_ATendjson] = ACTIONS(1),
  },
  [1] = {
    [sym_plantuml] = STATE(49),
    [sym_yamluml] = STATE(48),
    [sym_baseuml] = STATE(48),
    [sym_jsonuml] = STATE(48),
    [anon_sym_ATstartyaml] = ACTIONS(3),
    [anon_sym_ATstartuml] = ACTIONS(5),
    [anon_sym_ATstartjson] = ACTIONS(7),
  },
  [2] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(12),
    [sym_method] = STATE(12),
    [sym_message] = STATE(12),
    [sym_block] = STATE(12),
    [sym__block_1] = STATE(21),
    [sym__block_2] = STATE(21),
    [sym__block_3] = STATE(21),
    [sym_uniqkey] = STATE(12),
    [sym_string] = STATE(12),
    [sym_color] = STATE(12),
    [sym_colorleader] = STATE(55),
    [sym_comment] = STATE(12),
    [sym__mutilinecomment] = STATE(19),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_ATenduml] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(20),
    [anon_sym_RBRACK] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym__] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym_identifier] = ACTIONS(35),
    [sym__signallinecomment] = ACTIONS(38),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(41),
  },
  [3] = {
    [sym_command] = STATE(10),
    [sym__command_unit] = STATE(12),
    [sym_method] = STATE(12),
    [sym_message] = STATE(12),
    [sym_block] = STATE(12),
    [sym__block_1] = STATE(21),
    [sym__block_2] = STATE(21),
    [sym__block_3] = STATE(21),
    [sym_uniqkey] = STATE(12),
    [sym_string] = STATE(12),
    [sym_color] = STATE(12),
    [sym_colorleader] = STATE(55),
    [sym_comment] = STATE(12),
    [sym__mutilinecomment] = STATE(19),
    [aux_sym_baseuml_repeat1] = STATE(10),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_ATenduml] = ACTIONS(44),
    [anon_sym_DOLLAR] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_DOT] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym__] = ACTIONS(54),
    [anon_sym_COLON] = ACTIONS(54),
    [anon_sym_STAR] = ACTIONS(54),
    [anon_sym_PLUS] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(54),
    [anon_sym_POUND] = ACTIONS(56),
    [anon_sym_BANG] = ACTIONS(54),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym__signallinecomment] = ACTIONS(64),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(66),
  },
  [4] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(12),
    [sym_method] = STATE(12),
    [sym_message] = STATE(12),
    [sym_block] = STATE(12),
    [sym__block_1] = STATE(21),
    [sym__block_2] = STATE(21),
    [sym__block_3] = STATE(21),
    [sym_uniqkey] = STATE(12),
    [sym_string] = STATE(12),
    [sym_color] = STATE(12),
    [sym_colorleader] = STATE(55),
    [sym_comment] = STATE(12),
    [sym__mutilinecomment] = STATE(19),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_DOLLAR] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_RBRACK] = ACTIONS(68),
    [anon_sym_DOT] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym__] = ACTIONS(54),
    [anon_sym_COLON] = ACTIONS(54),
    [anon_sym_STAR] = ACTIONS(54),
    [anon_sym_PLUS] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(54),
    [anon_sym_POUND] = ACTIONS(56),
    [anon_sym_BANG] = ACTIONS(54),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym__signallinecomment] = ACTIONS(64),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(66),
  },
  [5] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(12),
    [sym_method] = STATE(12),
    [sym_message] = STATE(12),
    [sym_block] = STATE(12),
    [sym__block_1] = STATE(21),
    [sym__block_2] = STATE(21),
    [sym__block_3] = STATE(21),
    [sym_uniqkey] = STATE(12),
    [sym_string] = STATE(12),
    [sym_color] = STATE(12),
    [sym_colorleader] = STATE(55),
    [sym_comment] = STATE(12),
    [sym__mutilinecomment] = STATE(19),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_DOLLAR] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_DOT] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym__] = ACTIONS(54),
    [anon_sym_COLON] = ACTIONS(54),
    [anon_sym_STAR] = ACTIONS(54),
    [anon_sym_PLUS] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(54),
    [anon_sym_POUND] = ACTIONS(56),
    [anon_sym_BANG] = ACTIONS(54),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym__signallinecomment] = ACTIONS(64),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(66),
  },
  [6] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(12),
    [sym_method] = STATE(12),
    [sym_message] = STATE(12),
    [sym_block] = STATE(12),
    [sym__block_1] = STATE(21),
    [sym__block_2] = STATE(21),
    [sym__block_3] = STATE(21),
    [sym_uniqkey] = STATE(12),
    [sym_string] = STATE(12),
    [sym_color] = STATE(12),
    [sym_colorleader] = STATE(55),
    [sym_comment] = STATE(12),
    [sym__mutilinecomment] = STATE(19),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_DOLLAR] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_DOT] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym__] = ACTIONS(54),
    [anon_sym_COLON] = ACTIONS(54),
    [anon_sym_STAR] = ACTIONS(54),
    [anon_sym_PLUS] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(54),
    [anon_sym_POUND] = ACTIONS(56),
    [anon_sym_BANG] = ACTIONS(54),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym__signallinecomment] = ACTIONS(64),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(66),
  },
  [7] = {
    [sym_command] = STATE(6),
    [sym__command_unit] = STATE(12),
    [sym_method] = STATE(12),
    [sym_message] = STATE(12),
    [sym_block] = STATE(12),
    [sym__block_1] = STATE(21),
    [sym__block_2] = STATE(21),
    [sym__block_3] = STATE(21),
    [sym_uniqkey] = STATE(12),
    [sym_string] = STATE(12),
    [sym_color] = STATE(12),
    [sym_colorleader] = STATE(55),
    [sym_comment] = STATE(12),
    [sym__mutilinecomment] = STATE(19),
    [aux_sym_baseuml_repeat1] = STATE(6),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_DOLLAR] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_DOT] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym__] = ACTIONS(54),
    [anon_sym_COLON] = ACTIONS(54),
    [anon_sym_STAR] = ACTIONS(54),
    [anon_sym_PLUS] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(54),
    [anon_sym_POUND] = ACTIONS(56),
    [anon_sym_BANG] = ACTIONS(54),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym__signallinecomment] = ACTIONS(64),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(66),
  },
  [8] = {
    [sym_command] = STATE(5),
    [sym__command_unit] = STATE(12),
    [sym_method] = STATE(12),
    [sym_message] = STATE(12),
    [sym_block] = STATE(12),
    [sym__block_1] = STATE(21),
    [sym__block_2] = STATE(21),
    [sym__block_3] = STATE(21),
    [sym_uniqkey] = STATE(12),
    [sym_string] = STATE(12),
    [sym_color] = STATE(12),
    [sym_colorleader] = STATE(55),
    [sym_comment] = STATE(12),
    [sym__mutilinecomment] = STATE(19),
    [aux_sym_baseuml_repeat1] = STATE(5),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_DOLLAR] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_DOT] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym__] = ACTIONS(54),
    [anon_sym_COLON] = ACTIONS(54),
    [anon_sym_STAR] = ACTIONS(54),
    [anon_sym_PLUS] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(54),
    [anon_sym_POUND] = ACTIONS(56),
    [anon_sym_BANG] = ACTIONS(54),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym__signallinecomment] = ACTIONS(64),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(66),
  },
  [9] = {
    [sym_command] = STATE(4),
    [sym__command_unit] = STATE(12),
    [sym_method] = STATE(12),
    [sym_message] = STATE(12),
    [sym_block] = STATE(12),
    [sym__block_1] = STATE(21),
    [sym__block_2] = STATE(21),
    [sym__block_3] = STATE(21),
    [sym_uniqkey] = STATE(12),
    [sym_string] = STATE(12),
    [sym_color] = STATE(12),
    [sym_colorleader] = STATE(55),
    [sym_comment] = STATE(12),
    [sym__mutilinecomment] = STATE(19),
    [aux_sym_baseuml_repeat1] = STATE(4),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_DOLLAR] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym__] = ACTIONS(54),
    [anon_sym_COLON] = ACTIONS(54),
    [anon_sym_STAR] = ACTIONS(54),
    [anon_sym_PLUS] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(54),
    [anon_sym_POUND] = ACTIONS(56),
    [anon_sym_BANG] = ACTIONS(54),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym__signallinecomment] = ACTIONS(64),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(66),
  },
  [10] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(12),
    [sym_method] = STATE(12),
    [sym_message] = STATE(12),
    [sym_block] = STATE(12),
    [sym__block_1] = STATE(21),
    [sym__block_2] = STATE(21),
    [sym__block_3] = STATE(21),
    [sym_uniqkey] = STATE(12),
    [sym_string] = STATE(12),
    [sym_color] = STATE(12),
    [sym_colorleader] = STATE(55),
    [sym_comment] = STATE(12),
    [sym__mutilinecomment] = STATE(19),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_ATenduml] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_DOT] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym__] = ACTIONS(54),
    [anon_sym_COLON] = ACTIONS(54),
    [anon_sym_STAR] = ACTIONS(54),
    [anon_sym_PLUS] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(54),
    [anon_sym_POUND] = ACTIONS(56),
    [anon_sym_BANG] = ACTIONS(54),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym__signallinecomment] = ACTIONS(64),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(66),
  },
  [11] = {
    [sym__command_unit] = STATE(11),
    [sym_method] = STATE(11),
    [sym_message] = STATE(11),
    [sym_block] = STATE(11),
    [sym__block_1] = STATE(21),
    [sym__block_2] = STATE(21),
    [sym__block_3] = STATE(21),
    [sym_uniqkey] = STATE(11),
    [sym_string] = STATE(11),
    [sym_color] = STATE(11),
    [sym_colorleader] = STATE(55),
    [sym_comment] = STATE(11),
    [sym__mutilinecomment] = STATE(19),
    [aux_sym_command_repeat1] = STATE(11),
    [anon_sym_LF] = ACTIONS(82),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_POUND] = ACTIONS(99),
    [anon_sym_BANG] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [sym_identifier] = ACTIONS(105),
    [sym__signallinecomment] = ACTIONS(108),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(111),
  },
  [12] = {
    [sym__command_unit] = STATE(11),
    [sym_method] = STATE(11),
    [sym_message] = STATE(11),
    [sym_block] = STATE(11),
    [sym__block_1] = STATE(21),
    [sym__block_2] = STATE(21),
    [sym__block_3] = STATE(21),
    [sym_uniqkey] = STATE(11),
    [sym_string] = STATE(11),
    [sym_color] = STATE(11),
    [sym_colorleader] = STATE(55),
    [sym_comment] = STATE(11),
    [sym__mutilinecomment] = STATE(19),
    [aux_sym_command_repeat1] = STATE(11),
    [anon_sym_LF] = ACTIONS(114),
    [anon_sym_DOLLAR] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(58),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_STAR] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_BANG] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(58),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [sym_identifier] = ACTIONS(128),
    [sym__signallinecomment] = ACTIONS(130),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(132),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(136), 1,
      anon_sym_SLASH,
    ACTIONS(134), 23,
      anon_sym_ATenduml,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [29] = 3,
    ACTIONS(138), 1,
      anon_sym_LF,
    ACTIONS(140), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(142), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [58] = 2,
    ACTIONS(144), 1,
      anon_sym_LF,
    ACTIONS(146), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [84] = 2,
    ACTIONS(148), 1,
      anon_sym_LF,
    ACTIONS(150), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [110] = 3,
    ACTIONS(152), 1,
      anon_sym_LF,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(154), 19,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [138] = 2,
    ACTIONS(159), 1,
      anon_sym_LF,
    ACTIONS(161), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [164] = 2,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(165), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [190] = 2,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(169), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [216] = 2,
    ACTIONS(171), 1,
      anon_sym_LF,
    ACTIONS(173), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [242] = 2,
    ACTIONS(175), 1,
      anon_sym_LF,
    ACTIONS(177), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [268] = 2,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(181), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [294] = 2,
    ACTIONS(183), 1,
      anon_sym_LF,
    ACTIONS(185), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [320] = 2,
    ACTIONS(152), 1,
      anon_sym_LF,
    ACTIONS(154), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [346] = 2,
    ACTIONS(187), 1,
      anon_sym_LF,
    ACTIONS(189), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [372] = 2,
    ACTIONS(191), 1,
      anon_sym_LF,
    ACTIONS(193), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [398] = 2,
    ACTIONS(195), 1,
      anon_sym_LF,
    ACTIONS(197), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [424] = 2,
    ACTIONS(199), 1,
      anon_sym_LF,
    ACTIONS(201), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [450] = 2,
    ACTIONS(203), 1,
      anon_sym_LF,
    ACTIONS(205), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [476] = 2,
    ACTIONS(207), 1,
      anon_sym_LF,
    ACTIONS(209), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [502] = 2,
    ACTIONS(211), 1,
      anon_sym_LF,
    ACTIONS(213), 20,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
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
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [528] = 3,
    ACTIONS(215), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(217), 1,
      anon_sym_ATendjson,
    STATE(41), 2,
      sym__commandjson,
      aux_sym_jsonuml_repeat1,
  [539] = 3,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_string_repeat1,
    ACTIONS(221), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [550] = 3,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_string_repeat1,
    ACTIONS(225), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [561] = 3,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_string_repeat1,
    ACTIONS(221), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [572] = 3,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      aux_sym_string_repeat1,
    ACTIONS(231), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [583] = 3,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_string_repeat1,
    ACTIONS(235), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [594] = 3,
    ACTIONS(238), 1,
      anon_sym_ATendyaml,
    ACTIONS(240), 1,
      aux_sym__commandyaml_token1,
    STATE(42), 2,
      sym__commandyaml,
      aux_sym_yamluml_repeat1,
  [605] = 3,
    ACTIONS(242), 1,
      anon_sym_ATendyaml,
    ACTIONS(244), 1,
      aux_sym__commandyaml_token1,
    STATE(40), 2,
      sym__commandyaml,
      aux_sym_yamluml_repeat1,
  [616] = 3,
    ACTIONS(247), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(249), 1,
      anon_sym_ATendjson,
    STATE(43), 2,
      sym__commandjson,
      aux_sym_jsonuml_repeat1,
  [627] = 3,
    ACTIONS(251), 1,
      anon_sym_ATendyaml,
    ACTIONS(253), 1,
      aux_sym__commandyaml_token1,
    STATE(40), 2,
      sym__commandyaml,
      aux_sym_yamluml_repeat1,
  [638] = 3,
    ACTIONS(255), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(258), 1,
      anon_sym_ATendjson,
    STATE(43), 2,
      sym__commandjson,
      aux_sym_jsonuml_repeat1,
  [649] = 3,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_string,
  [659] = 3,
    ACTIONS(264), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(266), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(46), 1,
      aux_sym__mutilinecomment_repeat1,
  [669] = 3,
    ACTIONS(268), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(271), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(46), 1,
      aux_sym__mutilinecomment_repeat1,
  [679] = 3,
    ACTIONS(273), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(275), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(45), 1,
      aux_sym__mutilinecomment_repeat1,
  [689] = 1,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
  [693] = 1,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
  [697] = 1,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
  [701] = 1,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
  [705] = 1,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
  [709] = 1,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
  [713] = 1,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
  [717] = 1,
    ACTIONS(291), 1,
      sym_identifier,
  [721] = 1,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
  [725] = 1,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
  [729] = 1,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
  [733] = 1,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
  [737] = 1,
    ACTIONS(297), 1,
      sym_identifier,
  [741] = 1,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 29,
  [SMALL_STATE(15)] = 58,
  [SMALL_STATE(16)] = 84,
  [SMALL_STATE(17)] = 110,
  [SMALL_STATE(18)] = 138,
  [SMALL_STATE(19)] = 164,
  [SMALL_STATE(20)] = 190,
  [SMALL_STATE(21)] = 216,
  [SMALL_STATE(22)] = 242,
  [SMALL_STATE(23)] = 268,
  [SMALL_STATE(24)] = 294,
  [SMALL_STATE(25)] = 320,
  [SMALL_STATE(26)] = 346,
  [SMALL_STATE(27)] = 372,
  [SMALL_STATE(28)] = 398,
  [SMALL_STATE(29)] = 424,
  [SMALL_STATE(30)] = 450,
  [SMALL_STATE(31)] = 476,
  [SMALL_STATE(32)] = 502,
  [SMALL_STATE(33)] = 528,
  [SMALL_STATE(34)] = 539,
  [SMALL_STATE(35)] = 550,
  [SMALL_STATE(36)] = 561,
  [SMALL_STATE(37)] = 572,
  [SMALL_STATE(38)] = 583,
  [SMALL_STATE(39)] = 594,
  [SMALL_STATE(40)] = 605,
  [SMALL_STATE(41)] = 616,
  [SMALL_STATE(42)] = 627,
  [SMALL_STATE(43)] = 638,
  [SMALL_STATE(44)] = 649,
  [SMALL_STATE(45)] = 659,
  [SMALL_STATE(46)] = 669,
  [SMALL_STATE(47)] = 679,
  [SMALL_STATE(48)] = 689,
  [SMALL_STATE(49)] = 693,
  [SMALL_STATE(50)] = 697,
  [SMALL_STATE(51)] = 701,
  [SMALL_STATE(52)] = 705,
  [SMALL_STATE(53)] = 709,
  [SMALL_STATE(54)] = 713,
  [SMALL_STATE(55)] = 717,
  [SMALL_STATE(56)] = 721,
  [SMALL_STATE(57)] = 725,
  [SMALL_STATE(58)] = 729,
  [SMALL_STATE(59)] = 733,
  [SMALL_STATE(60)] = 737,
  [SMALL_STATE(61)] = 741,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(60),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(7),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(8),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(9),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(25),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(17),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(25),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(37),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(14),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(19),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(47),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(60),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(7),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(9),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(17),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(37),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(14),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(19),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(47),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_unit, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_unit, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_3, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_3, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_1, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_1, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uniqkey, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uniqkey, 1),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_uniqkey, 1), REDUCE(sym_colorleader, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutilinecomment, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutilinecomment, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_2, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_2, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_3, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_3, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutilinecomment, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutilinecomment, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_1, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_1, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_2, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_2, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(38),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_yamluml_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yamluml_repeat1, 2), SHIFT_REPEAT(40),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_jsonuml_repeat1, 2), SHIFT_REPEAT(43),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_jsonuml_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutilinecomment_repeat1, 2), SHIFT_REPEAT(46),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mutilinecomment_repeat1, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plantuml, 1),
  [279] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 3, .production_id = 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yamluml, 3, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yamluml, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 2),
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

#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 20
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
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
  anon_sym_COMMA = 26,
  anon_sym_PIPE = 27,
  anon_sym_DQUOTE = 28,
  aux_sym_string_token1 = 29,
  sym_escape_sequence = 30,
  sym_identifier = 31,
  sym__signallinecomment = 32,
  anon_sym_SLASH_SQUOTE = 33,
  aux_sym__mutilinecomment_token1 = 34,
  anon_sym_SQUOTE_SLASH = 35,
  anon_sym_ATstartjson = 36,
  anon_sym_ATendjson = 37,
  sym_plantuml = 38,
  sym_yamluml = 39,
  sym__commandyaml = 40,
  sym_baseuml = 41,
  sym_command = 42,
  sym__command_unit = 43,
  sym_method = 44,
  sym_message = 45,
  sym_block = 46,
  sym__block_1 = 47,
  sym__block_2 = 48,
  sym__block_3 = 49,
  sym_uniqkey = 50,
  sym_string = 51,
  sym_color = 52,
  sym_colorleader = 53,
  sym_comment = 54,
  sym__mutilinecomment = 55,
  sym_jsonuml = 56,
  sym__commandjson = 57,
  aux_sym_yamluml_repeat1 = 58,
  aux_sym_baseuml_repeat1 = 59,
  aux_sym_command_repeat1 = 60,
  aux_sym_string_repeat1 = 61,
  aux_sym__mutilinecomment_repeat1 = 62,
  aux_sym_jsonuml_repeat1 = 63,
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
  [anon_sym_COMMA] = ",",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_COMMA] = {
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
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 9,
  [15] = 11,
  [16] = 16,
  [17] = 13,
  [18] = 12,
  [19] = 10,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 20,
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
  [41] = 21,
  [42] = 35,
  [43] = 37,
  [44] = 40,
  [45] = 36,
  [46] = 31,
  [47] = 34,
  [48] = 30,
  [49] = 29,
  [50] = 28,
  [51] = 27,
  [52] = 33,
  [53] = 26,
  [54] = 32,
  [55] = 25,
  [56] = 39,
  [57] = 24,
  [58] = 38,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 61,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 60,
  [70] = 70,
  [71] = 71,
  [72] = 70,
  [73] = 73,
  [74] = 74,
  [75] = 73,
  [76] = 74,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 77,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 81,
  [91] = 88,
  [92] = 87,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
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
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '^') ADVANCE(104);
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
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(105);
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
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(106);
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
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(99);
      if (lookahead != 0) ADVANCE(97);
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
      if (lookahead == '}') ADVANCE(97);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
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
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
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
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'd') ADVANCE(59);
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
      if (lookahead == 'n') ADVANCE(108);
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
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(72);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__signallinecomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__mutilinecomment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__mutilinecomment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SLASH);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 108:
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
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 0},
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
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_plantuml] = STATE(85),
    [sym_yamluml] = STATE(84),
    [sym_baseuml] = STATE(84),
    [sym_jsonuml] = STATE(84),
    [anon_sym_ATstartyaml] = ACTIONS(3),
    [anon_sym_ATstartuml] = ACTIONS(5),
    [anon_sym_ATstartjson] = ACTIONS(7),
  },
  [2] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(16),
    [sym_method] = STATE(16),
    [sym_message] = STATE(16),
    [sym_block] = STATE(16),
    [sym__block_1] = STATE(43),
    [sym__block_2] = STATE(43),
    [sym__block_3] = STATE(43),
    [sym_uniqkey] = STATE(16),
    [sym_string] = STATE(16),
    [sym_color] = STATE(16),
    [sym_colorleader] = STATE(77),
    [sym_comment] = STATE(16),
    [sym__mutilinecomment] = STATE(58),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_ATenduml] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(20),
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
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym_identifier] = ACTIONS(35),
    [sym__signallinecomment] = ACTIONS(38),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(41),
  },
  [3] = {
    [sym_command] = STATE(6),
    [sym__command_unit] = STATE(16),
    [sym_method] = STATE(16),
    [sym_message] = STATE(16),
    [sym_block] = STATE(16),
    [sym__block_1] = STATE(43),
    [sym__block_2] = STATE(43),
    [sym__block_3] = STATE(43),
    [sym_uniqkey] = STATE(16),
    [sym_string] = STATE(16),
    [sym_color] = STATE(16),
    [sym_colorleader] = STATE(77),
    [sym_comment] = STATE(16),
    [sym__mutilinecomment] = STATE(58),
    [aux_sym_baseuml_repeat1] = STATE(6),
    [aux_sym_command_repeat1] = STATE(16),
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
    [anon_sym_COMMA] = ACTIONS(54),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym__signallinecomment] = ACTIONS(64),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(66),
  },
  [4] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(16),
    [sym_method] = STATE(16),
    [sym_message] = STATE(16),
    [sym_block] = STATE(16),
    [sym__block_1] = STATE(43),
    [sym__block_2] = STATE(43),
    [sym__block_3] = STATE(43),
    [sym_uniqkey] = STATE(16),
    [sym_string] = STATE(16),
    [sym_color] = STATE(16),
    [sym_colorleader] = STATE(77),
    [sym_comment] = STATE(16),
    [sym__mutilinecomment] = STATE(58),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_DOLLAR] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(68),
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
    [anon_sym_COMMA] = ACTIONS(54),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym__signallinecomment] = ACTIONS(64),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(66),
  },
  [5] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(16),
    [sym_method] = STATE(16),
    [sym_message] = STATE(16),
    [sym_block] = STATE(16),
    [sym__block_1] = STATE(43),
    [sym__block_2] = STATE(43),
    [sym__block_3] = STATE(43),
    [sym_uniqkey] = STATE(16),
    [sym_string] = STATE(16),
    [sym_color] = STATE(16),
    [sym_colorleader] = STATE(77),
    [sym_comment] = STATE(16),
    [sym__mutilinecomment] = STATE(58),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(16),
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
    [anon_sym_COMMA] = ACTIONS(54),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym__signallinecomment] = ACTIONS(64),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(66),
  },
  [6] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(16),
    [sym_method] = STATE(16),
    [sym_message] = STATE(16),
    [sym_block] = STATE(16),
    [sym__block_1] = STATE(43),
    [sym__block_2] = STATE(43),
    [sym__block_3] = STATE(43),
    [sym_uniqkey] = STATE(16),
    [sym_string] = STATE(16),
    [sym_color] = STATE(16),
    [sym_colorleader] = STATE(77),
    [sym_comment] = STATE(16),
    [sym__mutilinecomment] = STATE(58),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_ATenduml] = ACTIONS(72),
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
    [anon_sym_COMMA] = ACTIONS(54),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym__signallinecomment] = ACTIONS(64),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(66),
  },
  [7] = {
    [sym_command] = STATE(4),
    [sym__command_unit] = STATE(16),
    [sym_method] = STATE(16),
    [sym_message] = STATE(16),
    [sym_block] = STATE(16),
    [sym__block_1] = STATE(43),
    [sym__block_2] = STATE(43),
    [sym__block_3] = STATE(43),
    [sym_uniqkey] = STATE(16),
    [sym_string] = STATE(16),
    [sym_color] = STATE(16),
    [sym_colorleader] = STATE(77),
    [sym_comment] = STATE(16),
    [sym__mutilinecomment] = STATE(58),
    [aux_sym_baseuml_repeat1] = STATE(4),
    [aux_sym_command_repeat1] = STATE(16),
    [anon_sym_DOLLAR] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(74),
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
    [anon_sym_COMMA] = ACTIONS(54),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym__signallinecomment] = ACTIONS(64),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(66),
  },
  [8] = {
    [sym_command] = STATE(5),
    [sym__command_unit] = STATE(16),
    [sym_method] = STATE(16),
    [sym_message] = STATE(16),
    [sym_block] = STATE(16),
    [sym__block_1] = STATE(43),
    [sym__block_2] = STATE(43),
    [sym__block_3] = STATE(43),
    [sym_uniqkey] = STATE(16),
    [sym_string] = STATE(16),
    [sym_color] = STATE(16),
    [sym_colorleader] = STATE(77),
    [sym_comment] = STATE(16),
    [sym__mutilinecomment] = STATE(58),
    [aux_sym_baseuml_repeat1] = STATE(5),
    [aux_sym_command_repeat1] = STATE(16),
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
    [anon_sym_COMMA] = ACTIONS(54),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym__signallinecomment] = ACTIONS(64),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(66),
  },
  [9] = {
    [sym__command_unit] = STATE(9),
    [sym_method] = STATE(9),
    [sym_message] = STATE(9),
    [sym_block] = STATE(9),
    [sym__block_1] = STATE(37),
    [sym__block_2] = STATE(37),
    [sym__block_3] = STATE(37),
    [sym_uniqkey] = STATE(9),
    [sym_string] = STATE(9),
    [sym_color] = STATE(9),
    [sym_colorleader] = STATE(83),
    [sym_comment] = STATE(9),
    [sym__mutilinecomment] = STATE(38),
    [aux_sym_command_repeat1] = STATE(9),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(92),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym__] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_POUND] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_identifier] = ACTIONS(104),
    [sym__signallinecomment] = ACTIONS(107),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(110),
  },
  [10] = {
    [sym__command_unit] = STATE(9),
    [sym_method] = STATE(9),
    [sym_message] = STATE(9),
    [sym_block] = STATE(9),
    [sym__block_1] = STATE(37),
    [sym__block_2] = STATE(37),
    [sym__block_3] = STATE(37),
    [sym_uniqkey] = STATE(9),
    [sym_string] = STATE(9),
    [sym_color] = STATE(9),
    [sym_colorleader] = STATE(83),
    [sym_comment] = STATE(9),
    [sym__mutilinecomment] = STATE(38),
    [aux_sym_command_repeat1] = STATE(9),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym__] = ACTIONS(123),
    [anon_sym_COLON] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
    [sym__signallinecomment] = ACTIONS(133),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(135),
  },
  [11] = {
    [sym__command_unit] = STATE(19),
    [sym_method] = STATE(19),
    [sym_message] = STATE(19),
    [sym_block] = STATE(19),
    [sym__block_1] = STATE(37),
    [sym__block_2] = STATE(37),
    [sym__block_3] = STATE(37),
    [sym_uniqkey] = STATE(19),
    [sym_string] = STATE(19),
    [sym_color] = STATE(19),
    [sym_colorleader] = STATE(83),
    [sym_comment] = STATE(19),
    [sym__mutilinecomment] = STATE(38),
    [aux_sym_command_repeat1] = STATE(19),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym__] = ACTIONS(123),
    [anon_sym_COLON] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
    [sym__signallinecomment] = ACTIONS(133),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(135),
  },
  [12] = {
    [sym__command_unit] = STATE(9),
    [sym_method] = STATE(9),
    [sym_message] = STATE(9),
    [sym_block] = STATE(9),
    [sym__block_1] = STATE(37),
    [sym__block_2] = STATE(37),
    [sym__block_3] = STATE(37),
    [sym_uniqkey] = STATE(9),
    [sym_string] = STATE(9),
    [sym_color] = STATE(9),
    [sym_colorleader] = STATE(83),
    [sym_comment] = STATE(9),
    [sym__mutilinecomment] = STATE(38),
    [aux_sym_command_repeat1] = STATE(9),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym__] = ACTIONS(123),
    [anon_sym_COLON] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
    [sym__signallinecomment] = ACTIONS(133),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(135),
  },
  [13] = {
    [sym__command_unit] = STATE(18),
    [sym_method] = STATE(18),
    [sym_message] = STATE(18),
    [sym_block] = STATE(18),
    [sym__block_1] = STATE(37),
    [sym__block_2] = STATE(37),
    [sym__block_3] = STATE(37),
    [sym_uniqkey] = STATE(18),
    [sym_string] = STATE(18),
    [sym_color] = STATE(18),
    [sym_colorleader] = STATE(83),
    [sym_comment] = STATE(18),
    [sym__mutilinecomment] = STATE(38),
    [aux_sym_command_repeat1] = STATE(18),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym__] = ACTIONS(123),
    [anon_sym_COLON] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
    [sym__signallinecomment] = ACTIONS(133),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(135),
  },
  [14] = {
    [sym__command_unit] = STATE(14),
    [sym_method] = STATE(14),
    [sym_message] = STATE(14),
    [sym_block] = STATE(14),
    [sym__block_1] = STATE(43),
    [sym__block_2] = STATE(43),
    [sym__block_3] = STATE(43),
    [sym_uniqkey] = STATE(14),
    [sym_string] = STATE(14),
    [sym_color] = STATE(14),
    [sym_colorleader] = STATE(77),
    [sym_comment] = STATE(14),
    [sym__mutilinecomment] = STATE(58),
    [aux_sym_command_repeat1] = STATE(14),
    [anon_sym_LF] = ACTIONS(84),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym__] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_POUND] = ACTIONS(158),
    [anon_sym_BANG] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym_identifier] = ACTIONS(164),
    [sym__signallinecomment] = ACTIONS(167),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(170),
  },
  [15] = {
    [sym__command_unit] = STATE(10),
    [sym_method] = STATE(10),
    [sym_message] = STATE(10),
    [sym_block] = STATE(10),
    [sym__block_1] = STATE(37),
    [sym__block_2] = STATE(37),
    [sym__block_3] = STATE(37),
    [sym_uniqkey] = STATE(10),
    [sym_string] = STATE(10),
    [sym_color] = STATE(10),
    [sym_colorleader] = STATE(83),
    [sym_comment] = STATE(10),
    [sym__mutilinecomment] = STATE(38),
    [aux_sym_command_repeat1] = STATE(10),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym__] = ACTIONS(123),
    [anon_sym_COLON] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
    [sym__signallinecomment] = ACTIONS(133),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(135),
  },
  [16] = {
    [sym__command_unit] = STATE(14),
    [sym_method] = STATE(14),
    [sym_message] = STATE(14),
    [sym_block] = STATE(14),
    [sym__block_1] = STATE(43),
    [sym__block_2] = STATE(43),
    [sym__block_3] = STATE(43),
    [sym_uniqkey] = STATE(14),
    [sym_string] = STATE(14),
    [sym_color] = STATE(14),
    [sym_colorleader] = STATE(77),
    [sym_comment] = STATE(14),
    [sym__mutilinecomment] = STATE(58),
    [aux_sym_command_repeat1] = STATE(14),
    [anon_sym_LF] = ACTIONS(175),
    [anon_sym_DOLLAR] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(58),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_STAR] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(185),
    [anon_sym_BANG] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(58),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [sym_identifier] = ACTIONS(189),
    [sym__signallinecomment] = ACTIONS(191),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(193),
  },
  [17] = {
    [sym__command_unit] = STATE(12),
    [sym_method] = STATE(12),
    [sym_message] = STATE(12),
    [sym_block] = STATE(12),
    [sym__block_1] = STATE(37),
    [sym__block_2] = STATE(37),
    [sym__block_3] = STATE(37),
    [sym_uniqkey] = STATE(12),
    [sym_string] = STATE(12),
    [sym_color] = STATE(12),
    [sym_colorleader] = STATE(83),
    [sym_comment] = STATE(12),
    [sym__mutilinecomment] = STATE(38),
    [aux_sym_command_repeat1] = STATE(12),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym__] = ACTIONS(123),
    [anon_sym_COLON] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
    [sym__signallinecomment] = ACTIONS(133),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(135),
  },
  [18] = {
    [sym__command_unit] = STATE(9),
    [sym_method] = STATE(9),
    [sym_message] = STATE(9),
    [sym_block] = STATE(9),
    [sym__block_1] = STATE(37),
    [sym__block_2] = STATE(37),
    [sym__block_3] = STATE(37),
    [sym_uniqkey] = STATE(9),
    [sym_string] = STATE(9),
    [sym_color] = STATE(9),
    [sym_colorleader] = STATE(83),
    [sym_comment] = STATE(9),
    [sym__mutilinecomment] = STATE(38),
    [aux_sym_command_repeat1] = STATE(9),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym__] = ACTIONS(123),
    [anon_sym_COLON] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
    [sym__signallinecomment] = ACTIONS(133),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(135),
  },
  [19] = {
    [sym__command_unit] = STATE(9),
    [sym_method] = STATE(9),
    [sym_message] = STATE(9),
    [sym_block] = STATE(9),
    [sym__block_1] = STATE(37),
    [sym__block_2] = STATE(37),
    [sym__block_3] = STATE(37),
    [sym_uniqkey] = STATE(9),
    [sym_string] = STATE(9),
    [sym_color] = STATE(9),
    [sym_colorleader] = STATE(83),
    [sym_comment] = STATE(9),
    [sym__mutilinecomment] = STATE(38),
    [aux_sym_command_repeat1] = STATE(9),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym__] = ACTIONS(123),
    [anon_sym_COLON] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
    [sym__signallinecomment] = ACTIONS(133),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(135),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(201), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(205), 2,
      anon_sym_LPAREN,
      anon_sym_SLASH,
    ACTIONS(203), 21,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [31] = 2,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(207), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [59] = 2,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    ACTIONS(211), 22,
      anon_sym_ATenduml,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [87] = 3,
    ACTIONS(203), 1,
      anon_sym_LF,
    ACTIONS(215), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(205), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [117] = 2,
    ACTIONS(219), 1,
      anon_sym_SLASH,
    ACTIONS(217), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [145] = 2,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(221), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [173] = 2,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    ACTIONS(225), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [201] = 2,
    ACTIONS(231), 1,
      anon_sym_SLASH,
    ACTIONS(229), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [229] = 2,
    ACTIONS(235), 1,
      anon_sym_SLASH,
    ACTIONS(233), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [257] = 2,
    ACTIONS(239), 1,
      anon_sym_SLASH,
    ACTIONS(237), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [285] = 2,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    ACTIONS(241), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [313] = 2,
    ACTIONS(247), 1,
      anon_sym_SLASH,
    ACTIONS(245), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [341] = 2,
    ACTIONS(251), 1,
      anon_sym_SLASH,
    ACTIONS(249), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [369] = 2,
    ACTIONS(255), 1,
      anon_sym_SLASH,
    ACTIONS(253), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [397] = 2,
    ACTIONS(259), 1,
      anon_sym_SLASH,
    ACTIONS(257), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [425] = 2,
    ACTIONS(263), 1,
      anon_sym_SLASH,
    ACTIONS(261), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [453] = 2,
    ACTIONS(267), 1,
      anon_sym_SLASH,
    ACTIONS(265), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [481] = 2,
    ACTIONS(271), 1,
      anon_sym_SLASH,
    ACTIONS(269), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [509] = 2,
    ACTIONS(275), 1,
      anon_sym_SLASH,
    ACTIONS(273), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [537] = 3,
    ACTIONS(279), 1,
      anon_sym_SLASH,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(277), 21,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [567] = 2,
    ACTIONS(279), 1,
      anon_sym_SLASH,
    ACTIONS(277), 22,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [595] = 2,
    ACTIONS(207), 1,
      anon_sym_LF,
    ACTIONS(209), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [622] = 2,
    ACTIONS(261), 1,
      anon_sym_LF,
    ACTIONS(263), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [649] = 2,
    ACTIONS(269), 1,
      anon_sym_LF,
    ACTIONS(271), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [676] = 2,
    ACTIONS(277), 1,
      anon_sym_LF,
    ACTIONS(279), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [703] = 2,
    ACTIONS(265), 1,
      anon_sym_LF,
    ACTIONS(267), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [730] = 2,
    ACTIONS(245), 1,
      anon_sym_LF,
    ACTIONS(247), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [757] = 2,
    ACTIONS(257), 1,
      anon_sym_LF,
    ACTIONS(259), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [784] = 2,
    ACTIONS(241), 1,
      anon_sym_LF,
    ACTIONS(243), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [811] = 2,
    ACTIONS(237), 1,
      anon_sym_LF,
    ACTIONS(239), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [838] = 2,
    ACTIONS(233), 1,
      anon_sym_LF,
    ACTIONS(235), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [865] = 2,
    ACTIONS(229), 1,
      anon_sym_LF,
    ACTIONS(231), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [892] = 2,
    ACTIONS(253), 1,
      anon_sym_LF,
    ACTIONS(255), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [919] = 2,
    ACTIONS(225), 1,
      anon_sym_LF,
    ACTIONS(227), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [946] = 2,
    ACTIONS(249), 1,
      anon_sym_LF,
    ACTIONS(251), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [973] = 2,
    ACTIONS(221), 1,
      anon_sym_LF,
    ACTIONS(223), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [1000] = 3,
    ACTIONS(277), 1,
      anon_sym_LF,
    ACTIONS(284), 1,
      sym_identifier,
    ACTIONS(279), 20,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [1029] = 2,
    ACTIONS(217), 1,
      anon_sym_LF,
    ACTIONS(219), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [1056] = 2,
    ACTIONS(273), 1,
      anon_sym_LF,
    ACTIONS(275), 21,
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
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [1083] = 3,
    ACTIONS(287), 1,
      anon_sym_ATendyaml,
    ACTIONS(289), 1,
      aux_sym__commandyaml_token1,
    STATE(67), 2,
      sym__commandyaml,
      aux_sym_yamluml_repeat1,
  [1094] = 3,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      aux_sym_string_repeat1,
    ACTIONS(293), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1105] = 3,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_string_repeat1,
    ACTIONS(297), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1116] = 3,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_string_repeat1,
    ACTIONS(301), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1127] = 3,
    ACTIONS(304), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(307), 1,
      anon_sym_ATendjson,
    STATE(63), 2,
      sym__commandjson,
      aux_sym_jsonuml_repeat1,
  [1138] = 3,
    ACTIONS(309), 1,
      anon_sym_ATendyaml,
    ACTIONS(311), 1,
      aux_sym__commandyaml_token1,
    STATE(59), 2,
      sym__commandyaml,
      aux_sym_yamluml_repeat1,
  [1149] = 3,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_string_repeat1,
    ACTIONS(297), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1160] = 3,
    ACTIONS(315), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(317), 1,
      anon_sym_ATendjson,
    STATE(68), 2,
      sym__commandjson,
      aux_sym_jsonuml_repeat1,
  [1171] = 3,
    ACTIONS(319), 1,
      anon_sym_ATendyaml,
    ACTIONS(321), 1,
      aux_sym__commandyaml_token1,
    STATE(67), 2,
      sym__commandyaml,
      aux_sym_yamluml_repeat1,
  [1182] = 3,
    ACTIONS(324), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(326), 1,
      anon_sym_ATendjson,
    STATE(63), 2,
      sym__commandjson,
      aux_sym_jsonuml_repeat1,
  [1193] = 3,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      aux_sym_string_repeat1,
    ACTIONS(330), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1204] = 3,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_string,
  [1214] = 3,
    ACTIONS(334), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(337), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(71), 1,
      aux_sym__mutilinecomment_repeat1,
  [1224] = 3,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_string,
  [1234] = 3,
    ACTIONS(341), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(343), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(71), 1,
      aux_sym__mutilinecomment_repeat1,
  [1244] = 3,
    ACTIONS(345), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(347), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(73), 1,
      aux_sym__mutilinecomment_repeat1,
  [1254] = 3,
    ACTIONS(341), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(71), 1,
      aux_sym__mutilinecomment_repeat1,
  [1264] = 3,
    ACTIONS(351), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(353), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(75), 1,
      aux_sym__mutilinecomment_repeat1,
  [1274] = 1,
    ACTIONS(355), 1,
      sym_identifier,
  [1278] = 1,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
  [1282] = 1,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
  [1286] = 1,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
  [1290] = 1,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
  [1294] = 1,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
  [1298] = 1,
    ACTIONS(367), 1,
      sym_identifier,
  [1302] = 1,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
  [1306] = 1,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
  [1310] = 1,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
  [1314] = 1,
    ACTIONS(375), 1,
      sym_identifier,
  [1318] = 1,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
  [1322] = 1,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
  [1326] = 1,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
  [1330] = 1,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
  [1334] = 1,
    ACTIONS(385), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(20)] = 0,
  [SMALL_STATE(21)] = 31,
  [SMALL_STATE(22)] = 59,
  [SMALL_STATE(23)] = 87,
  [SMALL_STATE(24)] = 117,
  [SMALL_STATE(25)] = 145,
  [SMALL_STATE(26)] = 173,
  [SMALL_STATE(27)] = 201,
  [SMALL_STATE(28)] = 229,
  [SMALL_STATE(29)] = 257,
  [SMALL_STATE(30)] = 285,
  [SMALL_STATE(31)] = 313,
  [SMALL_STATE(32)] = 341,
  [SMALL_STATE(33)] = 369,
  [SMALL_STATE(34)] = 397,
  [SMALL_STATE(35)] = 425,
  [SMALL_STATE(36)] = 453,
  [SMALL_STATE(37)] = 481,
  [SMALL_STATE(38)] = 509,
  [SMALL_STATE(39)] = 537,
  [SMALL_STATE(40)] = 567,
  [SMALL_STATE(41)] = 595,
  [SMALL_STATE(42)] = 622,
  [SMALL_STATE(43)] = 649,
  [SMALL_STATE(44)] = 676,
  [SMALL_STATE(45)] = 703,
  [SMALL_STATE(46)] = 730,
  [SMALL_STATE(47)] = 757,
  [SMALL_STATE(48)] = 784,
  [SMALL_STATE(49)] = 811,
  [SMALL_STATE(50)] = 838,
  [SMALL_STATE(51)] = 865,
  [SMALL_STATE(52)] = 892,
  [SMALL_STATE(53)] = 919,
  [SMALL_STATE(54)] = 946,
  [SMALL_STATE(55)] = 973,
  [SMALL_STATE(56)] = 1000,
  [SMALL_STATE(57)] = 1029,
  [SMALL_STATE(58)] = 1056,
  [SMALL_STATE(59)] = 1083,
  [SMALL_STATE(60)] = 1094,
  [SMALL_STATE(61)] = 1105,
  [SMALL_STATE(62)] = 1116,
  [SMALL_STATE(63)] = 1127,
  [SMALL_STATE(64)] = 1138,
  [SMALL_STATE(65)] = 1149,
  [SMALL_STATE(66)] = 1160,
  [SMALL_STATE(67)] = 1171,
  [SMALL_STATE(68)] = 1182,
  [SMALL_STATE(69)] = 1193,
  [SMALL_STATE(70)] = 1204,
  [SMALL_STATE(71)] = 1214,
  [SMALL_STATE(72)] = 1224,
  [SMALL_STATE(73)] = 1234,
  [SMALL_STATE(74)] = 1244,
  [SMALL_STATE(75)] = 1254,
  [SMALL_STATE(76)] = 1264,
  [SMALL_STATE(77)] = 1274,
  [SMALL_STATE(78)] = 1278,
  [SMALL_STATE(79)] = 1282,
  [SMALL_STATE(80)] = 1286,
  [SMALL_STATE(81)] = 1290,
  [SMALL_STATE(82)] = 1294,
  [SMALL_STATE(83)] = 1298,
  [SMALL_STATE(84)] = 1302,
  [SMALL_STATE(85)] = 1306,
  [SMALL_STATE(86)] = 1310,
  [SMALL_STATE(87)] = 1314,
  [SMALL_STATE(88)] = 1318,
  [SMALL_STATE(89)] = 1322,
  [SMALL_STATE(90)] = 1326,
  [SMALL_STATE(91)] = 1330,
  [SMALL_STATE(92)] = 1334,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(87),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(11),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(8),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(13),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(44),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(56),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(44),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(60),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(23),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(58),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(76),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(92),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(15),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(7),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(17),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(40),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(39),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(40),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(69),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(20),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(38),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(74),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(87),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(11),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(13),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(44),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(56),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(60),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(58),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(76),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_unit, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_unit, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutilinecomment, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutilinecomment, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 5),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutilinecomment, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutilinecomment, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_2, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_2, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_1, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_1, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_3, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_3, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_2, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_2, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_1, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_1, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_3, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_3, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uniqkey, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uniqkey, 1),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_uniqkey, 1), REDUCE(sym_colorleader, 1),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_uniqkey, 1), REDUCE(sym_colorleader, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(62),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_jsonuml_repeat1, 2), SHIFT_REPEAT(63),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_jsonuml_repeat1, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_yamluml_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yamluml_repeat1, 2), SHIFT_REPEAT(67),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutilinecomment_repeat1, 2), SHIFT_REPEAT(71),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mutilinecomment_repeat1, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yamluml, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plantuml, 1),
  [371] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yamluml, 3, .production_id = 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 3, .production_id = 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
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

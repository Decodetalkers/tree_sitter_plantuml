#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 112
#define LARGE_STATE_COUNT 30
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
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
  anon_sym_ATstartsalt = 6,
  anon_sym_ATendsalt = 7,
  anon_sym_ATstartgantt = 8,
  anon_sym_ATendgantt = 9,
  anon_sym_ATstartjson = 10,
  anon_sym_ATendjson = 11,
  anon_sym_LF = 12,
  anon_sym_LPAREN_RPAREN = 13,
  anon_sym_DOLLAR = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_LTstyle_GT = 21,
  anon_sym_LT_SLASHstyle_GT = 22,
  anon_sym_DOT = 23,
  anon_sym_GT = 24,
  anon_sym_LT = 25,
  anon_sym__ = 26,
  anon_sym_COLON = 27,
  anon_sym_STAR = 28,
  anon_sym_PLUS = 29,
  anon_sym_DASH = 30,
  anon_sym_POUND = 31,
  anon_sym_BANG = 32,
  anon_sym_SLASH = 33,
  anon_sym_COMMA = 34,
  anon_sym_PIPE = 35,
  anon_sym_EQ = 36,
  anon_sym_SEMI = 37,
  anon_sym_DQUOTE = 38,
  aux_sym_string_token1 = 39,
  sym_escape_sequence = 40,
  sym_identifier = 41,
  sym__signallinecomment = 42,
  anon_sym_SLASH_SQUOTE = 43,
  aux_sym__mutilinecomment_token1 = 44,
  anon_sym_SQUOTE_SLASH = 45,
  sym_plantuml = 46,
  sym_yamluml = 47,
  sym__commandyaml = 48,
  sym_baseuml = 49,
  sym_saltuml = 50,
  sym_gannttuml = 51,
  sym_jsonuml = 52,
  sym__commandjson = 53,
  sym_command = 54,
  sym__command_unit = 55,
  sym_method = 56,
  sym_message = 57,
  sym_block = 58,
  sym__block_1 = 59,
  sym__block_2 = 60,
  sym__block_3 = 61,
  sym_block_style = 62,
  sym_uniqkey = 63,
  sym_string = 64,
  sym_color = 65,
  sym_colorleader = 66,
  sym_comment = 67,
  sym__mutilinecomment = 68,
  aux_sym_yamluml_repeat1 = 69,
  aux_sym_baseuml_repeat1 = 70,
  aux_sym_jsonuml_repeat1 = 71,
  aux_sym_command_repeat1 = 72,
  aux_sym_string_repeat1 = 73,
  aux_sym__mutilinecomment_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATstartyaml] = "@startyaml",
  [anon_sym_ATendyaml] = "@endyaml",
  [aux_sym__commandyaml_token1] = "_commandyaml_token1",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [anon_sym_ATstartsalt] = "@startsalt",
  [anon_sym_ATendsalt] = "@endsalt",
  [anon_sym_ATstartgantt] = "@startgantt",
  [anon_sym_ATendgantt] = "@endgantt",
  [anon_sym_ATstartjson] = "@startjson",
  [anon_sym_ATendjson] = "@endjson",
  [anon_sym_LF] = "\n",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LTstyle_GT] = "<style>",
  [anon_sym_LT_SLASHstyle_GT] = "</style>",
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
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_identifier] = "identifier",
  [sym__signallinecomment] = "_signallinecomment",
  [anon_sym_SLASH_SQUOTE] = "/'",
  [aux_sym__mutilinecomment_token1] = "_mutilinecomment_token1",
  [anon_sym_SQUOTE_SLASH] = "'/",
  [sym_plantuml] = "plantuml",
  [sym_yamluml] = "yamluml",
  [sym__commandyaml] = "_commandyaml",
  [sym_baseuml] = "baseuml",
  [sym_saltuml] = "saltuml",
  [sym_gannttuml] = "gannttuml",
  [sym_jsonuml] = "jsonuml",
  [sym__commandjson] = "_commandjson",
  [sym_command] = "command",
  [sym__command_unit] = "_command_unit",
  [sym_method] = "method",
  [sym_message] = "message",
  [sym_block] = "block",
  [sym__block_1] = "_block_1",
  [sym__block_2] = "_block_2",
  [sym__block_3] = "_block_3",
  [sym_block_style] = "block_style",
  [sym_uniqkey] = "uniqkey",
  [sym_string] = "string",
  [sym_color] = "color",
  [sym_colorleader] = "colorleader",
  [sym_comment] = "comment",
  [sym__mutilinecomment] = "_mutilinecomment",
  [aux_sym_yamluml_repeat1] = "yamluml_repeat1",
  [aux_sym_baseuml_repeat1] = "baseuml_repeat1",
  [aux_sym_jsonuml_repeat1] = "jsonuml_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__mutilinecomment_repeat1] = "_mutilinecomment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATstartyaml] = anon_sym_ATstartyaml,
  [anon_sym_ATendyaml] = anon_sym_ATendyaml,
  [aux_sym__commandyaml_token1] = aux_sym__commandyaml_token1,
  [anon_sym_ATstartuml] = anon_sym_ATstartuml,
  [anon_sym_ATenduml] = anon_sym_ATenduml,
  [anon_sym_ATstartsalt] = anon_sym_ATstartsalt,
  [anon_sym_ATendsalt] = anon_sym_ATendsalt,
  [anon_sym_ATstartgantt] = anon_sym_ATstartgantt,
  [anon_sym_ATendgantt] = anon_sym_ATendgantt,
  [anon_sym_ATstartjson] = anon_sym_ATstartjson,
  [anon_sym_ATendjson] = anon_sym_ATendjson,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LTstyle_GT] = anon_sym_LTstyle_GT,
  [anon_sym_LT_SLASHstyle_GT] = anon_sym_LT_SLASHstyle_GT,
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_identifier] = sym_identifier,
  [sym__signallinecomment] = sym__signallinecomment,
  [anon_sym_SLASH_SQUOTE] = anon_sym_SLASH_SQUOTE,
  [aux_sym__mutilinecomment_token1] = aux_sym__mutilinecomment_token1,
  [anon_sym_SQUOTE_SLASH] = anon_sym_SQUOTE_SLASH,
  [sym_plantuml] = sym_plantuml,
  [sym_yamluml] = sym_yamluml,
  [sym__commandyaml] = sym__commandyaml,
  [sym_baseuml] = sym_baseuml,
  [sym_saltuml] = sym_saltuml,
  [sym_gannttuml] = sym_gannttuml,
  [sym_jsonuml] = sym_jsonuml,
  [sym__commandjson] = sym__commandjson,
  [sym_command] = sym_command,
  [sym__command_unit] = sym__command_unit,
  [sym_method] = sym_method,
  [sym_message] = sym_message,
  [sym_block] = sym_block,
  [sym__block_1] = sym__block_1,
  [sym__block_2] = sym__block_2,
  [sym__block_3] = sym__block_3,
  [sym_block_style] = sym_block_style,
  [sym_uniqkey] = sym_uniqkey,
  [sym_string] = sym_string,
  [sym_color] = sym_color,
  [sym_colorleader] = sym_colorleader,
  [sym_comment] = sym_comment,
  [sym__mutilinecomment] = sym__mutilinecomment,
  [aux_sym_yamluml_repeat1] = aux_sym_yamluml_repeat1,
  [aux_sym_baseuml_repeat1] = aux_sym_baseuml_repeat1,
  [aux_sym_jsonuml_repeat1] = aux_sym_jsonuml_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym__mutilinecomment_repeat1] = aux_sym__mutilinecomment_repeat1,
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
  [anon_sym_ATstartsalt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendsalt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATstartgantt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendgantt] = {
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
  [anon_sym_LTstyle_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHstyle_GT] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [sym_saltuml] = {
    .visible = true,
    .named = true,
  },
  [sym_gannttuml] = {
    .visible = true,
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
  [sym_block_style] = {
    .visible = true,
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
  [aux_sym_yamluml_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_baseuml_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_jsonuml_repeat1] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
  [13] = 13,
  [14] = 4,
  [15] = 10,
  [16] = 8,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 18,
  [23] = 21,
  [24] = 19,
  [25] = 20,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 27,
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
  [51] = 31,
  [52] = 52,
  [53] = 40,
  [54] = 33,
  [55] = 50,
  [56] = 49,
  [57] = 46,
  [58] = 45,
  [59] = 37,
  [60] = 39,
  [61] = 43,
  [62] = 47,
  [63] = 48,
  [64] = 30,
  [65] = 52,
  [66] = 32,
  [67] = 41,
  [68] = 44,
  [69] = 38,
  [70] = 42,
  [71] = 36,
  [72] = 35,
  [73] = 34,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 76,
  [81] = 81,
  [82] = 82,
  [83] = 74,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 86,
  [88] = 88,
  [89] = 89,
  [90] = 85,
  [91] = 89,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 100,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 93,
  [110] = 99,
  [111] = 105,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(126);
      if (lookahead == '"') ADVANCE(132);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '$') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(109);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(131);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(117);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead == '}') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '!') ADVANCE(126);
      if (lookahead == '"') ADVANCE(132);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '$') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(131);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(117);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '!') ADVANCE(126);
      if (lookahead == '"') ADVANCE(132);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '$') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(131);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(117);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '@') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '^') ADVANCE(142);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '@') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(126);
      if (lookahead == '"') ADVANCE(132);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '$') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(109);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(131);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(117);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(126);
      if (lookahead == '"') ADVANCE(132);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '$') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(109);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(131);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(117);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead == '}') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(126);
      if (lookahead == '"') ADVANCE(132);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '$') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(131);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(117);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(132);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(143);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(114);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(115);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(14);
      if (lookahead == 'j') ADVANCE(50);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(14);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(19);
      if (lookahead == 'j') ADVANCE(51);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 64:
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 65:
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 66:
      if (lookahead == '{') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 67:
      if (lookahead == '}') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(126);
      if (lookahead == '"') ADVANCE(132);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '$') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(109);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(131);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(117);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead == '}') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == '@') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == '@') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'j') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'y') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ATstartsalt);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_ATendsalt);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(105);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LTstyle_GT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LT_SLASHstyle_GT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(140);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__signallinecomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__mutilinecomment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__mutilinecomment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATstartyaml] = ACTIONS(1),
    [anon_sym_ATendyaml] = ACTIONS(1),
    [anon_sym_ATstartuml] = ACTIONS(1),
    [anon_sym_ATenduml] = ACTIONS(1),
    [anon_sym_ATstartsalt] = ACTIONS(1),
    [anon_sym_ATendsalt] = ACTIONS(1),
    [anon_sym_ATstartgantt] = ACTIONS(1),
    [anon_sym_ATendgantt] = ACTIONS(1),
    [anon_sym_ATstartjson] = ACTIONS(1),
    [anon_sym_ATendjson] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LTstyle_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHstyle_GT] = ACTIONS(1),
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_plantuml] = STATE(94),
    [sym_yamluml] = STATE(108),
    [sym_baseuml] = STATE(108),
    [sym_saltuml] = STATE(108),
    [sym_gannttuml] = STATE(108),
    [sym_jsonuml] = STATE(108),
    [anon_sym_ATstartyaml] = ACTIONS(3),
    [anon_sym_ATstartuml] = ACTIONS(5),
    [anon_sym_ATstartsalt] = ACTIONS(7),
    [anon_sym_ATstartgantt] = ACTIONS(9),
    [anon_sym_ATstartjson] = ACTIONS(11),
  },
  [2] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(25),
    [sym_method] = STATE(25),
    [sym_message] = STATE(25),
    [sym_block] = STATE(25),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(25),
    [sym_string] = STATE(25),
    [sym_color] = STATE(25),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(25),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(25),
    [anon_sym_ATenduml] = ACTIONS(13),
    [anon_sym_ATendsalt] = ACTIONS(13),
    [anon_sym_ATendgantt] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(18),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_LTstyle_GT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_GT] = ACTIONS(30),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym__] = ACTIONS(30),
    [anon_sym_COLON] = ACTIONS(30),
    [anon_sym_STAR] = ACTIONS(30),
    [anon_sym_PLUS] = ACTIONS(30),
    [anon_sym_DASH] = ACTIONS(30),
    [anon_sym_POUND] = ACTIONS(36),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(30),
    [anon_sym_PIPE] = ACTIONS(30),
    [anon_sym_EQ] = ACTIONS(30),
    [anon_sym_SEMI] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(42),
    [sym__signallinecomment] = ACTIONS(45),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(48),
  },
  [3] = {
    [sym_command] = STATE(3),
    [sym__command_unit] = STATE(20),
    [sym_method] = STATE(20),
    [sym_message] = STATE(20),
    [sym_block] = STATE(20),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(20),
    [sym_string] = STATE(20),
    [sym_color] = STATE(20),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(20),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_baseuml_repeat1] = STATE(3),
    [aux_sym_command_repeat1] = STATE(20),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(18),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_LTstyle_GT] = ACTIONS(27),
    [anon_sym_LT_SLASHstyle_GT] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_GT] = ACTIONS(30),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym__] = ACTIONS(30),
    [anon_sym_COLON] = ACTIONS(30),
    [anon_sym_STAR] = ACTIONS(30),
    [anon_sym_PLUS] = ACTIONS(30),
    [anon_sym_DASH] = ACTIONS(30),
    [anon_sym_POUND] = ACTIONS(36),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(30),
    [anon_sym_PIPE] = ACTIONS(30),
    [anon_sym_EQ] = ACTIONS(30),
    [anon_sym_SEMI] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(42),
    [sym__signallinecomment] = ACTIONS(45),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(48),
  },
  [4] = {
    [sym_command] = STATE(15),
    [sym__command_unit] = STATE(25),
    [sym_method] = STATE(25),
    [sym_message] = STATE(25),
    [sym_block] = STATE(25),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(25),
    [sym_string] = STATE(25),
    [sym_color] = STATE(25),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(25),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_baseuml_repeat1] = STATE(15),
    [aux_sym_command_repeat1] = STATE(25),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LTstyle_GT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym__signallinecomment] = ACTIONS(73),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(75),
  },
  [5] = {
    [sym_command] = STATE(17),
    [sym__command_unit] = STATE(25),
    [sym_method] = STATE(25),
    [sym_message] = STATE(25),
    [sym_block] = STATE(25),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(25),
    [sym_string] = STATE(25),
    [sym_color] = STATE(25),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(25),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_baseuml_repeat1] = STATE(17),
    [aux_sym_command_repeat1] = STATE(25),
    [anon_sym_ATenduml] = ACTIONS(77),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LTstyle_GT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym__signallinecomment] = ACTIONS(73),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(75),
  },
  [6] = {
    [sym_command] = STATE(13),
    [sym__command_unit] = STATE(25),
    [sym_method] = STATE(25),
    [sym_message] = STATE(25),
    [sym_block] = STATE(25),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(25),
    [sym_string] = STATE(25),
    [sym_color] = STATE(25),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(25),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_baseuml_repeat1] = STATE(13),
    [aux_sym_command_repeat1] = STATE(25),
    [anon_sym_ATendsalt] = ACTIONS(79),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LTstyle_GT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym__signallinecomment] = ACTIONS(73),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(75),
  },
  [7] = {
    [sym_command] = STATE(11),
    [sym__command_unit] = STATE(25),
    [sym_method] = STATE(25),
    [sym_message] = STATE(25),
    [sym_block] = STATE(25),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(25),
    [sym_string] = STATE(25),
    [sym_color] = STATE(25),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(25),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_baseuml_repeat1] = STATE(11),
    [aux_sym_command_repeat1] = STATE(25),
    [anon_sym_ATendgantt] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LTstyle_GT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym__signallinecomment] = ACTIONS(73),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(75),
  },
  [8] = {
    [sym_command] = STATE(12),
    [sym__command_unit] = STATE(20),
    [sym_method] = STATE(20),
    [sym_message] = STATE(20),
    [sym_block] = STATE(20),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(20),
    [sym_string] = STATE(20),
    [sym_color] = STATE(20),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(20),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_baseuml_repeat1] = STATE(12),
    [aux_sym_command_repeat1] = STATE(20),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LTstyle_GT] = ACTIONS(61),
    [anon_sym_LT_SLASHstyle_GT] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym__signallinecomment] = ACTIONS(73),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(75),
  },
  [9] = {
    [sym_command] = STATE(3),
    [sym__command_unit] = STATE(20),
    [sym_method] = STATE(20),
    [sym_message] = STATE(20),
    [sym_block] = STATE(20),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(20),
    [sym_string] = STATE(20),
    [sym_color] = STATE(20),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(20),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_baseuml_repeat1] = STATE(3),
    [aux_sym_command_repeat1] = STATE(20),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LTstyle_GT] = ACTIONS(61),
    [anon_sym_LT_SLASHstyle_GT] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym__signallinecomment] = ACTIONS(73),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(75),
  },
  [10] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(25),
    [sym_method] = STATE(25),
    [sym_message] = STATE(25),
    [sym_block] = STATE(25),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(25),
    [sym_string] = STATE(25),
    [sym_color] = STATE(25),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(25),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(25),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LTstyle_GT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym__signallinecomment] = ACTIONS(73),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(75),
  },
  [11] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(25),
    [sym_method] = STATE(25),
    [sym_message] = STATE(25),
    [sym_block] = STATE(25),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(25),
    [sym_string] = STATE(25),
    [sym_color] = STATE(25),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(25),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(25),
    [anon_sym_ATendgantt] = ACTIONS(89),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LTstyle_GT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym__signallinecomment] = ACTIONS(73),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(75),
  },
  [12] = {
    [sym_command] = STATE(3),
    [sym__command_unit] = STATE(20),
    [sym_method] = STATE(20),
    [sym_message] = STATE(20),
    [sym_block] = STATE(20),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(20),
    [sym_string] = STATE(20),
    [sym_color] = STATE(20),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(20),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_baseuml_repeat1] = STATE(3),
    [aux_sym_command_repeat1] = STATE(20),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LTstyle_GT] = ACTIONS(61),
    [anon_sym_LT_SLASHstyle_GT] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym__signallinecomment] = ACTIONS(73),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(75),
  },
  [13] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(25),
    [sym_method] = STATE(25),
    [sym_message] = STATE(25),
    [sym_block] = STATE(25),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(25),
    [sym_string] = STATE(25),
    [sym_color] = STATE(25),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(25),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(25),
    [anon_sym_ATendsalt] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LTstyle_GT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym__signallinecomment] = ACTIONS(73),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(75),
  },
  [14] = {
    [sym_command] = STATE(10),
    [sym__command_unit] = STATE(25),
    [sym_method] = STATE(25),
    [sym_message] = STATE(25),
    [sym_block] = STATE(25),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(25),
    [sym_string] = STATE(25),
    [sym_color] = STATE(25),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(25),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_baseuml_repeat1] = STATE(10),
    [aux_sym_command_repeat1] = STATE(25),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LTstyle_GT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym__signallinecomment] = ACTIONS(73),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(75),
  },
  [15] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(25),
    [sym_method] = STATE(25),
    [sym_message] = STATE(25),
    [sym_block] = STATE(25),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(25),
    [sym_string] = STATE(25),
    [sym_color] = STATE(25),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(25),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(25),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LTstyle_GT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym__signallinecomment] = ACTIONS(73),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(75),
  },
  [16] = {
    [sym_command] = STATE(9),
    [sym__command_unit] = STATE(20),
    [sym_method] = STATE(20),
    [sym_message] = STATE(20),
    [sym_block] = STATE(20),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(20),
    [sym_string] = STATE(20),
    [sym_color] = STATE(20),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(20),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_baseuml_repeat1] = STATE(9),
    [aux_sym_command_repeat1] = STATE(20),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LTstyle_GT] = ACTIONS(61),
    [anon_sym_LT_SLASHstyle_GT] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym__signallinecomment] = ACTIONS(73),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(75),
  },
  [17] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(25),
    [sym_method] = STATE(25),
    [sym_message] = STATE(25),
    [sym_block] = STATE(25),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(25),
    [sym_string] = STATE(25),
    [sym_color] = STATE(25),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(25),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(25),
    [anon_sym_ATenduml] = ACTIONS(101),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LTstyle_GT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym__signallinecomment] = ACTIONS(73),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(75),
  },
  [18] = {
    [sym__command_unit] = STATE(18),
    [sym_method] = STATE(18),
    [sym_message] = STATE(18),
    [sym_block] = STATE(18),
    [sym__block_1] = STATE(40),
    [sym__block_2] = STATE(40),
    [sym__block_3] = STATE(40),
    [sym_block_style] = STATE(40),
    [sym_uniqkey] = STATE(18),
    [sym_string] = STATE(18),
    [sym_color] = STATE(18),
    [sym_colorleader] = STATE(100),
    [sym_comment] = STATE(18),
    [sym__mutilinecomment] = STATE(32),
    [aux_sym_command_repeat1] = STATE(18),
    [anon_sym_DOLLAR] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_LTstyle_GT] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym__] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_POUND] = ACTIONS(126),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [sym_identifier] = ACTIONS(132),
    [sym__signallinecomment] = ACTIONS(135),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(138),
  },
  [19] = {
    [sym__command_unit] = STATE(18),
    [sym_method] = STATE(18),
    [sym_message] = STATE(18),
    [sym_block] = STATE(18),
    [sym__block_1] = STATE(40),
    [sym__block_2] = STATE(40),
    [sym__block_3] = STATE(40),
    [sym_block_style] = STATE(40),
    [sym_uniqkey] = STATE(18),
    [sym_string] = STATE(18),
    [sym_color] = STATE(18),
    [sym_colorleader] = STATE(100),
    [sym_comment] = STATE(18),
    [sym__mutilinecomment] = STATE(32),
    [aux_sym_command_repeat1] = STATE(18),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_LTstyle_GT] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym__] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [sym__signallinecomment] = ACTIONS(163),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(165),
  },
  [20] = {
    [sym__command_unit] = STATE(22),
    [sym_method] = STATE(22),
    [sym_message] = STATE(22),
    [sym_block] = STATE(22),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(22),
    [sym_string] = STATE(22),
    [sym_color] = STATE(22),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(22),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_command_repeat1] = STATE(22),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_DOLLAR] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_LTstyle_GT] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(179),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [sym__signallinecomment] = ACTIONS(185),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(187),
  },
  [21] = {
    [sym__command_unit] = STATE(19),
    [sym_method] = STATE(19),
    [sym_message] = STATE(19),
    [sym_block] = STATE(19),
    [sym__block_1] = STATE(40),
    [sym__block_2] = STATE(40),
    [sym__block_3] = STATE(40),
    [sym_block_style] = STATE(40),
    [sym_uniqkey] = STATE(19),
    [sym_string] = STATE(19),
    [sym_color] = STATE(19),
    [sym_colorleader] = STATE(100),
    [sym_comment] = STATE(19),
    [sym__mutilinecomment] = STATE(32),
    [aux_sym_command_repeat1] = STATE(19),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_LTstyle_GT] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym__] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [sym__signallinecomment] = ACTIONS(163),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(165),
  },
  [22] = {
    [sym__command_unit] = STATE(22),
    [sym_method] = STATE(22),
    [sym_message] = STATE(22),
    [sym_block] = STATE(22),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(22),
    [sym_string] = STATE(22),
    [sym_color] = STATE(22),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(22),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_command_repeat1] = STATE(22),
    [anon_sym_LF] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(200),
    [anon_sym_LTstyle_GT] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(206),
    [anon_sym_GT] = ACTIONS(206),
    [anon_sym_LT] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [anon_sym_COLON] = ACTIONS(206),
    [anon_sym_STAR] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [anon_sym_POUND] = ACTIONS(209),
    [anon_sym_BANG] = ACTIONS(206),
    [anon_sym_SLASH] = ACTIONS(206),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_EQ] = ACTIONS(206),
    [anon_sym_SEMI] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [sym_identifier] = ACTIONS(215),
    [sym__signallinecomment] = ACTIONS(218),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(221),
  },
  [23] = {
    [sym__command_unit] = STATE(24),
    [sym_method] = STATE(24),
    [sym_message] = STATE(24),
    [sym_block] = STATE(24),
    [sym__block_1] = STATE(40),
    [sym__block_2] = STATE(40),
    [sym__block_3] = STATE(40),
    [sym_block_style] = STATE(40),
    [sym_uniqkey] = STATE(24),
    [sym_string] = STATE(24),
    [sym_color] = STATE(24),
    [sym_colorleader] = STATE(100),
    [sym_comment] = STATE(24),
    [sym__mutilinecomment] = STATE(32),
    [aux_sym_command_repeat1] = STATE(24),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(224),
    [anon_sym_LTstyle_GT] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym__] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [sym__signallinecomment] = ACTIONS(163),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(165),
  },
  [24] = {
    [sym__command_unit] = STATE(18),
    [sym_method] = STATE(18),
    [sym_message] = STATE(18),
    [sym_block] = STATE(18),
    [sym__block_1] = STATE(40),
    [sym__block_2] = STATE(40),
    [sym__block_3] = STATE(40),
    [sym_block_style] = STATE(40),
    [sym_uniqkey] = STATE(18),
    [sym_string] = STATE(18),
    [sym_color] = STATE(18),
    [sym_colorleader] = STATE(100),
    [sym_comment] = STATE(18),
    [sym__mutilinecomment] = STATE(32),
    [aux_sym_command_repeat1] = STATE(18),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(226),
    [anon_sym_LTstyle_GT] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym__] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [sym__signallinecomment] = ACTIONS(163),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(165),
  },
  [25] = {
    [sym__command_unit] = STATE(22),
    [sym_method] = STATE(22),
    [sym_message] = STATE(22),
    [sym_block] = STATE(22),
    [sym__block_1] = STATE(53),
    [sym__block_2] = STATE(53),
    [sym__block_3] = STATE(53),
    [sym_block_style] = STATE(53),
    [sym_uniqkey] = STATE(22),
    [sym_string] = STATE(22),
    [sym_color] = STATE(22),
    [sym_colorleader] = STATE(104),
    [sym_comment] = STATE(22),
    [sym__mutilinecomment] = STATE(66),
    [aux_sym_command_repeat1] = STATE(22),
    [anon_sym_LF] = ACTIONS(228),
    [anon_sym_DOLLAR] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_LTstyle_GT] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(179),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [sym__signallinecomment] = ACTIONS(185),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(187),
  },
  [26] = {
    [sym__command_unit] = STATE(18),
    [sym_method] = STATE(18),
    [sym_message] = STATE(18),
    [sym_block] = STATE(18),
    [sym__block_1] = STATE(40),
    [sym__block_2] = STATE(40),
    [sym__block_3] = STATE(40),
    [sym_block_style] = STATE(40),
    [sym_uniqkey] = STATE(18),
    [sym_string] = STATE(18),
    [sym_color] = STATE(18),
    [sym_colorleader] = STATE(100),
    [sym_comment] = STATE(18),
    [sym__mutilinecomment] = STATE(32),
    [aux_sym_command_repeat1] = STATE(18),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_LTstyle_GT] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym__] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [sym__signallinecomment] = ACTIONS(163),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(165),
  },
  [27] = {
    [sym__command_unit] = STATE(26),
    [sym_method] = STATE(26),
    [sym_message] = STATE(26),
    [sym_block] = STATE(26),
    [sym__block_1] = STATE(40),
    [sym__block_2] = STATE(40),
    [sym__block_3] = STATE(40),
    [sym_block_style] = STATE(40),
    [sym_uniqkey] = STATE(26),
    [sym_string] = STATE(26),
    [sym_color] = STATE(26),
    [sym_colorleader] = STATE(100),
    [sym_comment] = STATE(26),
    [sym__mutilinecomment] = STATE(32),
    [aux_sym_command_repeat1] = STATE(26),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_LTstyle_GT] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym__] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [sym__signallinecomment] = ACTIONS(163),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(165),
  },
  [28] = {
    [sym__command_unit] = STATE(18),
    [sym_method] = STATE(18),
    [sym_message] = STATE(18),
    [sym_block] = STATE(18),
    [sym__block_1] = STATE(40),
    [sym__block_2] = STATE(40),
    [sym__block_3] = STATE(40),
    [sym_block_style] = STATE(40),
    [sym_uniqkey] = STATE(18),
    [sym_string] = STATE(18),
    [sym_color] = STATE(18),
    [sym_colorleader] = STATE(100),
    [sym_comment] = STATE(18),
    [sym__mutilinecomment] = STATE(32),
    [aux_sym_command_repeat1] = STATE(18),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_LTstyle_GT] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym__] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [sym__signallinecomment] = ACTIONS(163),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(165),
  },
  [29] = {
    [sym__command_unit] = STATE(28),
    [sym_method] = STATE(28),
    [sym_message] = STATE(28),
    [sym_block] = STATE(28),
    [sym__block_1] = STATE(40),
    [sym__block_2] = STATE(40),
    [sym__block_3] = STATE(40),
    [sym_block_style] = STATE(40),
    [sym_uniqkey] = STATE(28),
    [sym_string] = STATE(28),
    [sym_color] = STATE(28),
    [sym_colorleader] = STATE(100),
    [sym_comment] = STATE(28),
    [sym__mutilinecomment] = STATE(32),
    [aux_sym_command_repeat1] = STATE(28),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_LTstyle_GT] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym__] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [sym__signallinecomment] = ACTIONS(163),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(165),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(240), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(238), 26,
      anon_sym_ATenduml,
      anon_sym_ATendsalt,
      anon_sym_ATendgantt,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [33] = 3,
    ACTIONS(242), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(246), 3,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(244), 23,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [67] = 2,
    ACTIONS(250), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(248), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [98] = 2,
    ACTIONS(254), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(252), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [129] = 2,
    ACTIONS(258), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(256), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [160] = 2,
    ACTIONS(262), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(260), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [191] = 2,
    ACTIONS(266), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(264), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [222] = 2,
    ACTIONS(270), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(268), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [253] = 2,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(272), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [284] = 2,
    ACTIONS(278), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(276), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [315] = 2,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(280), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [346] = 2,
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(284), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [377] = 2,
    ACTIONS(290), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(288), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [408] = 2,
    ACTIONS(294), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(292), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [439] = 2,
    ACTIONS(298), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(296), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [470] = 3,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(302), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(300), 23,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [503] = 2,
    ACTIONS(302), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(300), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [534] = 2,
    ACTIONS(309), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(307), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [565] = 2,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(311), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [596] = 2,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(315), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [627] = 2,
    ACTIONS(321), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(319), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [658] = 3,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(323), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(246), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [691] = 2,
    ACTIONS(327), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(325), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [722] = 2,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(282), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [752] = 2,
    ACTIONS(252), 1,
      anon_sym_LF,
    ACTIONS(254), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [782] = 2,
    ACTIONS(319), 1,
      anon_sym_LF,
    ACTIONS(321), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [812] = 2,
    ACTIONS(315), 1,
      anon_sym_LF,
    ACTIONS(317), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [842] = 2,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(302), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [872] = 3,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(302), 23,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [904] = 2,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(270), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [934] = 2,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(278), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [964] = 2,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(294), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [994] = 2,
    ACTIONS(307), 1,
      anon_sym_LF,
    ACTIONS(309), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [1024] = 2,
    ACTIONS(311), 1,
      anon_sym_LF,
    ACTIONS(313), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [1054] = 2,
    ACTIONS(240), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(238), 23,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
      anon_sym_LT_SLASHstyle_GT,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [1084] = 2,
    ACTIONS(325), 1,
      anon_sym_LF,
    ACTIONS(327), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [1114] = 2,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(250), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [1144] = 2,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(286), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [1174] = 2,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(298), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [1204] = 2,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(274), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [1234] = 2,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(290), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [1264] = 2,
    ACTIONS(264), 1,
      anon_sym_LF,
    ACTIONS(266), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [1294] = 2,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(262), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [1324] = 2,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(258), 24,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LTstyle_GT,
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
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__signallinecomment,
      anon_sym_SLASH_SQUOTE,
  [1354] = 3,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym_string_repeat1,
    ACTIONS(334), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1365] = 3,
    ACTIONS(336), 1,
      anon_sym_ATendyaml,
    ACTIONS(338), 1,
      aux_sym__commandyaml_token1,
    STATE(82), 2,
      sym__commandyaml,
      aux_sym_yamluml_repeat1,
  [1376] = 3,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      aux_sym_string_repeat1,
    ACTIONS(342), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1387] = 3,
    ACTIONS(344), 1,
      anon_sym_ATendyaml,
    ACTIONS(346), 1,
      aux_sym__commandyaml_token1,
    STATE(77), 2,
      sym__commandyaml,
      aux_sym_yamluml_repeat1,
  [1398] = 3,
    ACTIONS(349), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(351), 1,
      anon_sym_ATendjson,
    STATE(81), 2,
      sym__commandjson,
      aux_sym_jsonuml_repeat1,
  [1409] = 3,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym_string_repeat1,
    ACTIONS(355), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1420] = 3,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_string_repeat1,
    ACTIONS(360), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1431] = 3,
    ACTIONS(362), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(365), 1,
      anon_sym_ATendjson,
    STATE(81), 2,
      sym__commandjson,
      aux_sym_jsonuml_repeat1,
  [1442] = 3,
    ACTIONS(367), 1,
      anon_sym_ATendyaml,
    ACTIONS(369), 1,
      aux_sym__commandyaml_token1,
    STATE(77), 2,
      sym__commandyaml,
      aux_sym_yamluml_repeat1,
  [1453] = 3,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym_string_repeat1,
    ACTIONS(334), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1464] = 3,
    ACTIONS(373), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(375), 1,
      anon_sym_ATendjson,
    STATE(78), 2,
      sym__commandjson,
      aux_sym_jsonuml_repeat1,
  [1475] = 3,
    ACTIONS(377), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(379), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(88), 1,
      aux_sym__mutilinecomment_repeat1,
  [1485] = 3,
    ACTIONS(381), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(383), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(90), 1,
      aux_sym__mutilinecomment_repeat1,
  [1495] = 3,
    ACTIONS(385), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(387), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(85), 1,
      aux_sym__mutilinecomment_repeat1,
  [1505] = 3,
    ACTIONS(389), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(392), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(88), 1,
      aux_sym__mutilinecomment_repeat1,
  [1515] = 3,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_string,
  [1525] = 3,
    ACTIONS(377), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(396), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(88), 1,
      aux_sym__mutilinecomment_repeat1,
  [1535] = 3,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_string,
  [1545] = 1,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
  [1549] = 1,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
  [1553] = 1,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
  [1557] = 1,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
  [1561] = 1,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
  [1565] = 1,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
  [1569] = 1,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
  [1573] = 1,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
  [1577] = 1,
    ACTIONS(416), 1,
      sym_identifier,
  [1581] = 1,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
  [1585] = 1,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
  [1589] = 1,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
  [1593] = 1,
    ACTIONS(424), 1,
      sym_identifier,
  [1597] = 1,
    ACTIONS(426), 1,
      sym_identifier,
  [1601] = 1,
    ACTIONS(428), 1,
      ts_builtin_sym_end,
  [1605] = 1,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
  [1609] = 1,
    ACTIONS(432), 1,
      ts_builtin_sym_end,
  [1613] = 1,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
  [1617] = 1,
    ACTIONS(436), 1,
      anon_sym_LPAREN,
  [1621] = 1,
    ACTIONS(438), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(30)] = 0,
  [SMALL_STATE(31)] = 33,
  [SMALL_STATE(32)] = 67,
  [SMALL_STATE(33)] = 98,
  [SMALL_STATE(34)] = 129,
  [SMALL_STATE(35)] = 160,
  [SMALL_STATE(36)] = 191,
  [SMALL_STATE(37)] = 222,
  [SMALL_STATE(38)] = 253,
  [SMALL_STATE(39)] = 284,
  [SMALL_STATE(40)] = 315,
  [SMALL_STATE(41)] = 346,
  [SMALL_STATE(42)] = 377,
  [SMALL_STATE(43)] = 408,
  [SMALL_STATE(44)] = 439,
  [SMALL_STATE(45)] = 470,
  [SMALL_STATE(46)] = 503,
  [SMALL_STATE(47)] = 534,
  [SMALL_STATE(48)] = 565,
  [SMALL_STATE(49)] = 596,
  [SMALL_STATE(50)] = 627,
  [SMALL_STATE(51)] = 658,
  [SMALL_STATE(52)] = 691,
  [SMALL_STATE(53)] = 722,
  [SMALL_STATE(54)] = 752,
  [SMALL_STATE(55)] = 782,
  [SMALL_STATE(56)] = 812,
  [SMALL_STATE(57)] = 842,
  [SMALL_STATE(58)] = 872,
  [SMALL_STATE(59)] = 904,
  [SMALL_STATE(60)] = 934,
  [SMALL_STATE(61)] = 964,
  [SMALL_STATE(62)] = 994,
  [SMALL_STATE(63)] = 1024,
  [SMALL_STATE(64)] = 1054,
  [SMALL_STATE(65)] = 1084,
  [SMALL_STATE(66)] = 1114,
  [SMALL_STATE(67)] = 1144,
  [SMALL_STATE(68)] = 1174,
  [SMALL_STATE(69)] = 1204,
  [SMALL_STATE(70)] = 1234,
  [SMALL_STATE(71)] = 1264,
  [SMALL_STATE(72)] = 1294,
  [SMALL_STATE(73)] = 1324,
  [SMALL_STATE(74)] = 1354,
  [SMALL_STATE(75)] = 1365,
  [SMALL_STATE(76)] = 1376,
  [SMALL_STATE(77)] = 1387,
  [SMALL_STATE(78)] = 1398,
  [SMALL_STATE(79)] = 1409,
  [SMALL_STATE(80)] = 1420,
  [SMALL_STATE(81)] = 1431,
  [SMALL_STATE(82)] = 1442,
  [SMALL_STATE(83)] = 1453,
  [SMALL_STATE(84)] = 1464,
  [SMALL_STATE(85)] = 1475,
  [SMALL_STATE(86)] = 1485,
  [SMALL_STATE(87)] = 1495,
  [SMALL_STATE(88)] = 1505,
  [SMALL_STATE(89)] = 1515,
  [SMALL_STATE(90)] = 1525,
  [SMALL_STATE(91)] = 1535,
  [SMALL_STATE(92)] = 1545,
  [SMALL_STATE(93)] = 1549,
  [SMALL_STATE(94)] = 1553,
  [SMALL_STATE(95)] = 1557,
  [SMALL_STATE(96)] = 1561,
  [SMALL_STATE(97)] = 1565,
  [SMALL_STATE(98)] = 1569,
  [SMALL_STATE(99)] = 1573,
  [SMALL_STATE(100)] = 1577,
  [SMALL_STATE(101)] = 1581,
  [SMALL_STATE(102)] = 1585,
  [SMALL_STATE(103)] = 1589,
  [SMALL_STATE(104)] = 1593,
  [SMALL_STATE(105)] = 1597,
  [SMALL_STATE(106)] = 1601,
  [SMALL_STATE(107)] = 1605,
  [SMALL_STATE(108)] = 1609,
  [SMALL_STATE(109)] = 1613,
  [SMALL_STATE(110)] = 1617,
  [SMALL_STATE(111)] = 1621,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(105),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(27),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(14),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(23),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(16),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(57),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(57),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(58),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(80),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(51),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(66),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(87),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(111),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(21),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(46),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(46),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(45),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(76),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(31),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(32),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(86),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(105),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(27),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(14),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(16),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(57),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(58),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(80),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(51),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(66),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(87),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_unit, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_unit, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_style, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_style, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_2, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_2, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_1, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_1, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_3, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_3, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_3, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_3, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_1, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_1, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_2, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_2, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 5),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uniqkey, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uniqkey, 1),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_uniqkey, 1), REDUCE(sym_colorleader, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_style, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_style, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutilinecomment, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutilinecomment, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutilinecomment, 3),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutilinecomment, 3),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_uniqkey, 1), REDUCE(sym_colorleader, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_yamluml_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yamluml_repeat1, 2), SHIFT_REPEAT(77),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(79),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_jsonuml_repeat1, 2), SHIFT_REPEAT(81),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_jsonuml_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutilinecomment_repeat1, 2), SHIFT_REPEAT(88),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mutilinecomment_repeat1, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_saltuml, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [404] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 3, .production_id = 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gannttuml, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_saltuml, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yamluml, 3, .production_id = 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gannttuml, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yamluml, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plantuml, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
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

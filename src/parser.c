#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
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
  anon_sym_ATstartmindmap = 10,
  anon_sym_ATendmindmap = 11,
  anon_sym_ATstartjson = 12,
  anon_sym_ATendjson = 13,
  anon_sym_LF = 14,
  anon_sym_LPAREN_RPAREN = 15,
  anon_sym_DOLLAR = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_LBRACK = 21,
  anon_sym_RBRACK = 22,
  anon_sym_LTstyle_GT = 23,
  anon_sym_LT_SLASHstyle_GT = 24,
  anon_sym_DOT = 25,
  anon_sym_GT = 26,
  anon_sym_LT = 27,
  anon_sym__ = 28,
  anon_sym_COLON = 29,
  anon_sym_STAR = 30,
  anon_sym_PLUS = 31,
  anon_sym_DASH = 32,
  anon_sym_POUND = 33,
  anon_sym_BANG = 34,
  anon_sym_SLASH = 35,
  anon_sym_COMMA = 36,
  anon_sym_PIPE = 37,
  anon_sym_EQ = 38,
  anon_sym_SEMI = 39,
  anon_sym_DQUOTE = 40,
  aux_sym_string_token1 = 41,
  sym_escape_sequence = 42,
  sym_identifier = 43,
  sym__signallinecomment = 44,
  anon_sym_SLASH_SQUOTE = 45,
  aux_sym__mutilinecomment_token1 = 46,
  anon_sym_SQUOTE_SLASH = 47,
  sym_plantuml = 48,
  sym_yamluml = 49,
  sym_commandyaml = 50,
  sym__commandyaml = 51,
  sym_baseuml = 52,
  sym_saltuml = 53,
  sym_gannttuml = 54,
  sym_mindmapuml = 55,
  sym_jsonuml = 56,
  sym_commandjson = 57,
  sym__commandjson = 58,
  sym_command = 59,
  sym__command_unit = 60,
  sym_method = 61,
  sym_message = 62,
  sym_block = 63,
  sym__block_1 = 64,
  sym__block_2 = 65,
  sym__block_3 = 66,
  sym_block_style = 67,
  sym_uniqkey = 68,
  sym_string = 69,
  sym_color = 70,
  sym_colorleader = 71,
  sym_comment = 72,
  sym__mutilinecomment = 73,
  aux_sym_commandyaml_repeat1 = 74,
  aux_sym_baseuml_repeat1 = 75,
  aux_sym_commandjson_repeat1 = 76,
  aux_sym_command_repeat1 = 77,
  aux_sym_string_repeat1 = 78,
  aux_sym__mutilinecomment_repeat1 = 79,
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
  [anon_sym_ATstartmindmap] = "@startmindmap",
  [anon_sym_ATendmindmap] = "@endmindmap",
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
  [sym_commandyaml] = "commandyaml",
  [sym__commandyaml] = "_commandyaml",
  [sym_baseuml] = "baseuml",
  [sym_saltuml] = "saltuml",
  [sym_gannttuml] = "gannttuml",
  [sym_mindmapuml] = "mindmapuml",
  [sym_jsonuml] = "jsonuml",
  [sym_commandjson] = "commandjson",
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
  [aux_sym_commandyaml_repeat1] = "commandyaml_repeat1",
  [aux_sym_baseuml_repeat1] = "baseuml_repeat1",
  [aux_sym_commandjson_repeat1] = "commandjson_repeat1",
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
  [anon_sym_ATstartmindmap] = anon_sym_ATstartmindmap,
  [anon_sym_ATendmindmap] = anon_sym_ATendmindmap,
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
  [sym_commandyaml] = sym_commandyaml,
  [sym__commandyaml] = sym__commandyaml,
  [sym_baseuml] = sym_baseuml,
  [sym_saltuml] = sym_saltuml,
  [sym_gannttuml] = sym_gannttuml,
  [sym_mindmapuml] = sym_mindmapuml,
  [sym_jsonuml] = sym_jsonuml,
  [sym_commandjson] = sym_commandjson,
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
  [aux_sym_commandyaml_repeat1] = aux_sym_commandyaml_repeat1,
  [aux_sym_baseuml_repeat1] = aux_sym_baseuml_repeat1,
  [aux_sym_commandjson_repeat1] = aux_sym_commandjson_repeat1,
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
  [anon_sym_ATstartmindmap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendmindmap] = {
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
  [sym_commandyaml] = {
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
  [sym_mindmapuml] = {
    .visible = true,
    .named = true,
  },
  [sym_jsonuml] = {
    .visible = true,
    .named = true,
  },
  [sym_commandjson] = {
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
  [aux_sym_commandyaml_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_baseuml_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commandjson_repeat1] = {
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
  [13] = 3,
  [14] = 14,
  [15] = 8,
  [16] = 11,
  [17] = 12,
  [18] = 18,
  [19] = 2,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 22,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 29,
  [31] = 25,
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
  [43] = 33,
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
  [55] = 42,
  [56] = 40,
  [57] = 46,
  [58] = 45,
  [59] = 54,
  [60] = 50,
  [61] = 53,
  [62] = 32,
  [63] = 51,
  [64] = 49,
  [65] = 41,
  [66] = 34,
  [67] = 39,
  [68] = 38,
  [69] = 37,
  [70] = 48,
  [71] = 36,
  [72] = 44,
  [73] = 35,
  [74] = 47,
  [75] = 52,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 79,
  [82] = 82,
  [83] = 83,
  [84] = 82,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 90,
  [92] = 88,
  [93] = 89,
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
  [104] = 104,
  [105] = 105,
  [106] = 98,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 97,
  [116] = 113,
  [117] = 101,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(86);
      if (lookahead == '!') ADVANCE(140);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == ';') ADVANCE(145);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == ']') ADVANCE(127);
      if (lookahead == '_') ADVANCE(134);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '|') ADVANCE(143);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '!') ADVANCE(140);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(84);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == ';') ADVANCE(145);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == '[') ADVANCE(126);
      if (lookahead == '_') ADVANCE(134);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '|') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '!') ADVANCE(140);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(84);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == ';') ADVANCE(145);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == '[') ADVANCE(126);
      if (lookahead == '_') ADVANCE(134);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '|') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '^') ADVANCE(156);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(140);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(84);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == ';') ADVANCE(145);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == '[') ADVANCE(126);
      if (lookahead == ']') ADVANCE(127);
      if (lookahead == '_') ADVANCE(134);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '|') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(140);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(84);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == ';') ADVANCE(145);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '[') ADVANCE(126);
      if (lookahead == ']') ADVANCE(127);
      if (lookahead == '_') ADVANCE(134);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '|') ADVANCE(143);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(140);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(84);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == ';') ADVANCE(145);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == '[') ADVANCE(126);
      if (lookahead == '_') ADVANCE(134);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '|') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(157);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(128);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(129);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(15);
      if (lookahead == 'j') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(21);
      if (lookahead == 'j') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(151);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 76:
      if (lookahead == 'y') ADVANCE(35);
      END_STATE();
    case 77:
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 78:
      if (lookahead == '{') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 79:
      if (lookahead == '}') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 84:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 85:
      if (eof) ADVANCE(86);
      if (lookahead == '!') ADVANCE(140);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == ';') ADVANCE(145);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(126);
      if (lookahead == ']') ADVANCE(127);
      if (lookahead == '_') ADVANCE(134);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '|') ADVANCE(143);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'j') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead == 'y') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__commandyaml_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_ATstartsalt);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_ATendsalt);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ATstartgantt);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ATendgantt);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(119);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LTstyle_GT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LT_SLASHstyle_GT);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'') ADVANCE(154);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__signallinecomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_SLASH_SQUOTE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__mutilinecomment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__mutilinecomment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(156);
      END_STATE();
    case 157:
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
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
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
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 0},
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
    [anon_sym_ATstartmindmap] = ACTIONS(1),
    [anon_sym_ATendmindmap] = ACTIONS(1),
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
    [sym_plantuml] = STATE(110),
    [sym_yamluml] = STATE(109),
    [sym_baseuml] = STATE(109),
    [sym_saltuml] = STATE(109),
    [sym_gannttuml] = STATE(109),
    [sym_mindmapuml] = STATE(109),
    [sym_jsonuml] = STATE(109),
    [anon_sym_ATstartyaml] = ACTIONS(3),
    [anon_sym_ATstartuml] = ACTIONS(5),
    [anon_sym_ATstartsalt] = ACTIONS(7),
    [anon_sym_ATstartgantt] = ACTIONS(9),
    [anon_sym_ATstartmindmap] = ACTIONS(11),
    [anon_sym_ATstartjson] = ACTIONS(13),
  },
  [2] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(28),
    [sym_method] = STATE(28),
    [sym_message] = STATE(28),
    [sym_block] = STATE(28),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(28),
    [sym_string] = STATE(28),
    [sym_color] = STATE(28),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(28),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(28),
    [anon_sym_ATenduml] = ACTIONS(15),
    [anon_sym_ATendsalt] = ACTIONS(15),
    [anon_sym_ATendgantt] = ACTIONS(15),
    [anon_sym_ATendmindmap] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(20),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(26),
    [anon_sym_LTstyle_GT] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(32),
    [anon_sym_GT] = ACTIONS(32),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym__] = ACTIONS(32),
    [anon_sym_COLON] = ACTIONS(32),
    [anon_sym_STAR] = ACTIONS(32),
    [anon_sym_PLUS] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(32),
    [anon_sym_POUND] = ACTIONS(38),
    [anon_sym_BANG] = ACTIONS(32),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(32),
    [anon_sym_PIPE] = ACTIONS(32),
    [anon_sym_EQ] = ACTIONS(32),
    [anon_sym_SEMI] = ACTIONS(32),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_identifier] = ACTIONS(44),
    [sym__signallinecomment] = ACTIONS(47),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(50),
  },
  [3] = {
    [sym_command] = STATE(15),
    [sym__command_unit] = STATE(28),
    [sym_method] = STATE(28),
    [sym_message] = STATE(28),
    [sym_block] = STATE(28),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(28),
    [sym_string] = STATE(28),
    [sym_color] = STATE(28),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(28),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(15),
    [aux_sym_command_repeat1] = STATE(28),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LTstyle_GT] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym__signallinecomment] = ACTIONS(75),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(77),
  },
  [4] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(28),
    [sym_method] = STATE(28),
    [sym_message] = STATE(28),
    [sym_block] = STATE(28),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(28),
    [sym_string] = STATE(28),
    [sym_color] = STATE(28),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(28),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(28),
    [anon_sym_ATendgantt] = ACTIONS(79),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LTstyle_GT] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym__signallinecomment] = ACTIONS(75),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(77),
  },
  [5] = {
    [sym_command] = STATE(4),
    [sym__command_unit] = STATE(28),
    [sym_method] = STATE(28),
    [sym_message] = STATE(28),
    [sym_block] = STATE(28),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(28),
    [sym_string] = STATE(28),
    [sym_color] = STATE(28),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(28),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(4),
    [aux_sym_command_repeat1] = STATE(28),
    [anon_sym_ATendgantt] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LTstyle_GT] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym__signallinecomment] = ACTIONS(75),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(77),
  },
  [6] = {
    [sym_command] = STATE(14),
    [sym__command_unit] = STATE(28),
    [sym_method] = STATE(28),
    [sym_message] = STATE(28),
    [sym_block] = STATE(28),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(28),
    [sym_string] = STATE(28),
    [sym_color] = STATE(28),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(28),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(14),
    [aux_sym_command_repeat1] = STATE(28),
    [anon_sym_ATendmindmap] = ACTIONS(83),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LTstyle_GT] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym__signallinecomment] = ACTIONS(75),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(77),
  },
  [7] = {
    [sym_command] = STATE(10),
    [sym__command_unit] = STATE(28),
    [sym_method] = STATE(28),
    [sym_message] = STATE(28),
    [sym_block] = STATE(28),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(28),
    [sym_string] = STATE(28),
    [sym_color] = STATE(28),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(28),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(10),
    [aux_sym_command_repeat1] = STATE(28),
    [anon_sym_ATenduml] = ACTIONS(85),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LTstyle_GT] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym__signallinecomment] = ACTIONS(75),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(77),
  },
  [8] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(28),
    [sym_method] = STATE(28),
    [sym_message] = STATE(28),
    [sym_block] = STATE(28),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(28),
    [sym_string] = STATE(28),
    [sym_color] = STATE(28),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(28),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(28),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LTstyle_GT] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym__signallinecomment] = ACTIONS(75),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(77),
  },
  [9] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(28),
    [sym_method] = STATE(28),
    [sym_message] = STATE(28),
    [sym_block] = STATE(28),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(28),
    [sym_string] = STATE(28),
    [sym_color] = STATE(28),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(28),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(28),
    [anon_sym_ATendsalt] = ACTIONS(89),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LTstyle_GT] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym__signallinecomment] = ACTIONS(75),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(77),
  },
  [10] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(28),
    [sym_method] = STATE(28),
    [sym_message] = STATE(28),
    [sym_block] = STATE(28),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(28),
    [sym_string] = STATE(28),
    [sym_color] = STATE(28),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(28),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(28),
    [anon_sym_ATenduml] = ACTIONS(91),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LTstyle_GT] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym__signallinecomment] = ACTIONS(75),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(77),
  },
  [11] = {
    [sym_command] = STATE(17),
    [sym__command_unit] = STATE(27),
    [sym_method] = STATE(27),
    [sym_message] = STATE(27),
    [sym_block] = STATE(27),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(27),
    [sym_string] = STATE(27),
    [sym_color] = STATE(27),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(27),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(17),
    [aux_sym_command_repeat1] = STATE(27),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LTstyle_GT] = ACTIONS(63),
    [anon_sym_LT_SLASHstyle_GT] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym__signallinecomment] = ACTIONS(75),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(77),
  },
  [12] = {
    [sym_command] = STATE(19),
    [sym__command_unit] = STATE(27),
    [sym_method] = STATE(27),
    [sym_message] = STATE(27),
    [sym_block] = STATE(27),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(27),
    [sym_string] = STATE(27),
    [sym_color] = STATE(27),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(27),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(19),
    [aux_sym_command_repeat1] = STATE(27),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LTstyle_GT] = ACTIONS(63),
    [anon_sym_LT_SLASHstyle_GT] = ACTIONS(95),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym__signallinecomment] = ACTIONS(75),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(77),
  },
  [13] = {
    [sym_command] = STATE(8),
    [sym__command_unit] = STATE(28),
    [sym_method] = STATE(28),
    [sym_message] = STATE(28),
    [sym_block] = STATE(28),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(28),
    [sym_string] = STATE(28),
    [sym_color] = STATE(28),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(28),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(8),
    [aux_sym_command_repeat1] = STATE(28),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LTstyle_GT] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym__signallinecomment] = ACTIONS(75),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(77),
  },
  [14] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(28),
    [sym_method] = STATE(28),
    [sym_message] = STATE(28),
    [sym_block] = STATE(28),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(28),
    [sym_string] = STATE(28),
    [sym_color] = STATE(28),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(28),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(28),
    [anon_sym_ATendmindmap] = ACTIONS(99),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LTstyle_GT] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym__signallinecomment] = ACTIONS(75),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(77),
  },
  [15] = {
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(28),
    [sym_method] = STATE(28),
    [sym_message] = STATE(28),
    [sym_block] = STATE(28),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(28),
    [sym_string] = STATE(28),
    [sym_color] = STATE(28),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(28),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(28),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LTstyle_GT] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym__signallinecomment] = ACTIONS(75),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(77),
  },
  [16] = {
    [sym_command] = STATE(12),
    [sym__command_unit] = STATE(27),
    [sym_method] = STATE(27),
    [sym_message] = STATE(27),
    [sym_block] = STATE(27),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(27),
    [sym_string] = STATE(27),
    [sym_color] = STATE(27),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(27),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(12),
    [aux_sym_command_repeat1] = STATE(27),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LTstyle_GT] = ACTIONS(63),
    [anon_sym_LT_SLASHstyle_GT] = ACTIONS(103),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym__signallinecomment] = ACTIONS(75),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(77),
  },
  [17] = {
    [sym_command] = STATE(19),
    [sym__command_unit] = STATE(27),
    [sym_method] = STATE(27),
    [sym_message] = STATE(27),
    [sym_block] = STATE(27),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(27),
    [sym_string] = STATE(27),
    [sym_color] = STATE(27),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(27),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(19),
    [aux_sym_command_repeat1] = STATE(27),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LTstyle_GT] = ACTIONS(63),
    [anon_sym_LT_SLASHstyle_GT] = ACTIONS(105),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym__signallinecomment] = ACTIONS(75),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(77),
  },
  [18] = {
    [sym_command] = STATE(9),
    [sym__command_unit] = STATE(28),
    [sym_method] = STATE(28),
    [sym_message] = STATE(28),
    [sym_block] = STATE(28),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(28),
    [sym_string] = STATE(28),
    [sym_color] = STATE(28),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(28),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(9),
    [aux_sym_command_repeat1] = STATE(28),
    [anon_sym_ATendsalt] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LTstyle_GT] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym__signallinecomment] = ACTIONS(75),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(77),
  },
  [19] = {
    [sym_command] = STATE(19),
    [sym__command_unit] = STATE(27),
    [sym_method] = STATE(27),
    [sym_message] = STATE(27),
    [sym_block] = STATE(27),
    [sym__block_1] = STATE(60),
    [sym__block_2] = STATE(60),
    [sym__block_3] = STATE(60),
    [sym_block_style] = STATE(60),
    [sym_uniqkey] = STATE(27),
    [sym_string] = STATE(27),
    [sym_color] = STATE(27),
    [sym_colorleader] = STATE(98),
    [sym_comment] = STATE(27),
    [sym__mutilinecomment] = STATE(63),
    [aux_sym_baseuml_repeat1] = STATE(19),
    [aux_sym_command_repeat1] = STATE(27),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(20),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(26),
    [anon_sym_LTstyle_GT] = ACTIONS(29),
    [anon_sym_LT_SLASHstyle_GT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(32),
    [anon_sym_GT] = ACTIONS(32),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym__] = ACTIONS(32),
    [anon_sym_COLON] = ACTIONS(32),
    [anon_sym_STAR] = ACTIONS(32),
    [anon_sym_PLUS] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(32),
    [anon_sym_POUND] = ACTIONS(38),
    [anon_sym_BANG] = ACTIONS(32),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(32),
    [anon_sym_PIPE] = ACTIONS(32),
    [anon_sym_EQ] = ACTIONS(32),
    [anon_sym_SEMI] = ACTIONS(32),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_identifier] = ACTIONS(44),
    [sym__signallinecomment] = ACTIONS(47),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(50),
  },
  [20] = {
    [sym__command_unit] = STATE(20),
    [sym_method] = STATE(20),
    [sym_message] = STATE(20),
    [sym_block] = STATE(20),
    [sym__block_1] = STATE(50),
    [sym__block_2] = STATE(50),
    [sym__block_3] = STATE(50),
    [sym_block_style] = STATE(50),
    [sym_uniqkey] = STATE(20),
    [sym_string] = STATE(20),
    [sym_color] = STATE(20),
    [sym_colorleader] = STATE(106),
    [sym_comment] = STATE(20),
    [sym__mutilinecomment] = STATE(51),
    [aux_sym_command_repeat1] = STATE(20),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_LTstyle_GT] = ACTIONS(123),
    [anon_sym_DOT] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym__] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_BANG] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [sym_identifier] = ACTIONS(138),
    [sym__signallinecomment] = ACTIONS(141),
    [anon_sym_SLASH_SQUOTE] = ACTIONS(144),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(115), 1,
      anon_sym_LF,
    ACTIONS(147), 1,
      anon_sym_DOLLAR,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      anon_sym_LTstyle_GT,
    ACTIONS(165), 1,
      anon_sym_POUND,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(174), 1,
      sym__signallinecomment,
    ACTIONS(177), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(63), 1,
      sym__mutilinecomment,
    STATE(98), 1,
      sym_colorleader,
    STATE(60), 4,
      sym__block_1,
      sym__block_2,
      sym__block_3,
      sym_block_style,
    STATE(21), 9,
      sym__command_unit,
      sym_method,
      sym_message,
      sym_block,
      sym_uniqkey,
      sym_string,
      sym_color,
      sym_comment,
      aux_sym_command_repeat1,
    ACTIONS(162), 14,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
  [73] = 17,
    ACTIONS(180), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
    ACTIONS(190), 1,
      anon_sym_LTstyle_GT,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      sym__signallinecomment,
    ACTIONS(204), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(51), 1,
      sym__mutilinecomment,
    STATE(106), 1,
      sym_colorleader,
    ACTIONS(194), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(50), 4,
      sym__block_1,
      sym__block_2,
      sym__block_3,
      sym_block_style,
    STATE(20), 9,
      sym__command_unit,
      sym_method,
      sym_message,
      sym_block,
      sym_uniqkey,
      sym_string,
      sym_color,
      sym_comment,
      aux_sym_command_repeat1,
    ACTIONS(192), 12,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
  [148] = 17,
    ACTIONS(180), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_LTstyle_GT,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      sym__signallinecomment,
    ACTIONS(204), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym__mutilinecomment,
    STATE(106), 1,
      sym_colorleader,
    ACTIONS(194), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(50), 4,
      sym__block_1,
      sym__block_2,
      sym__block_3,
      sym_block_style,
    STATE(29), 9,
      sym__command_unit,
      sym_method,
      sym_message,
      sym_block,
      sym_uniqkey,
      sym_string,
      sym_color,
      sym_comment,
      aux_sym_command_repeat1,
    ACTIONS(192), 12,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
  [223] = 17,
    ACTIONS(180), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_LTstyle_GT,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      sym__signallinecomment,
    ACTIONS(204), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym__mutilinecomment,
    STATE(106), 1,
      sym_colorleader,
    ACTIONS(194), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(50), 4,
      sym__block_1,
      sym__block_2,
      sym__block_3,
      sym_block_style,
    STATE(30), 9,
      sym__command_unit,
      sym_method,
      sym_message,
      sym_block,
      sym_uniqkey,
      sym_string,
      sym_color,
      sym_comment,
      aux_sym_command_repeat1,
    ACTIONS(192), 12,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
  [298] = 17,
    ACTIONS(180), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_LTstyle_GT,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      sym__signallinecomment,
    ACTIONS(204), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      sym__mutilinecomment,
    STATE(106), 1,
      sym_colorleader,
    ACTIONS(194), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(50), 4,
      sym__block_1,
      sym__block_2,
      sym__block_3,
      sym_block_style,
    STATE(22), 9,
      sym__command_unit,
      sym_method,
      sym_message,
      sym_block,
      sym_uniqkey,
      sym_string,
      sym_color,
      sym_comment,
      aux_sym_command_repeat1,
    ACTIONS(192), 12,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
  [373] = 17,
    ACTIONS(180), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_LTstyle_GT,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      sym__signallinecomment,
    ACTIONS(204), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      sym__mutilinecomment,
    STATE(106), 1,
      sym_colorleader,
    ACTIONS(194), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(50), 4,
      sym__block_1,
      sym__block_2,
      sym__block_3,
      sym_block_style,
    STATE(20), 9,
      sym__command_unit,
      sym_method,
      sym_message,
      sym_block,
      sym_uniqkey,
      sym_string,
      sym_color,
      sym_comment,
      aux_sym_command_repeat1,
    ACTIONS(192), 12,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
  [448] = 16,
    ACTIONS(214), 1,
      anon_sym_LF,
    ACTIONS(216), 1,
      anon_sym_DOLLAR,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_LTstyle_GT,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym__signallinecomment,
    ACTIONS(234), 1,
      anon_sym_SLASH_SQUOTE,
    STATE(63), 1,
      sym__mutilinecomment,
    STATE(98), 1,
      sym_colorleader,
    STATE(60), 4,
      sym__block_1,
      sym__block_2,
      sym__block_3,
      sym_block_style,
    STATE(21), 9,
      sym__command_unit,
      sym_method,
      sym_message,
      sym_block,
      sym_uniqkey,
      sym_string,
      sym_color,
      sym_comment,
      aux_sym_command_repeat1,
    ACTIONS(67), 14,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
  [521] = 16,
    ACTIONS(216), 1,
      anon_sym_DOLLAR,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_LTstyle_GT,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym__signallinecomment,
    ACTIONS(234), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(236), 1,
      anon_sym_LF,
    STATE(63), 1,
      sym__mutilinecomment,
    STATE(98), 1,
      sym_colorleader,
    STATE(60), 4,
      sym__block_1,
      sym__block_2,
      sym__block_3,
      sym_block_style,
    STATE(21), 9,
      sym__command_unit,
      sym_method,
      sym_message,
      sym_block,
      sym_uniqkey,
      sym_string,
      sym_color,
      sym_comment,
      aux_sym_command_repeat1,
    ACTIONS(67), 14,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
  [594] = 17,
    ACTIONS(180), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_LTstyle_GT,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      sym__signallinecomment,
    ACTIONS(204), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym__mutilinecomment,
    STATE(106), 1,
      sym_colorleader,
    ACTIONS(194), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(50), 4,
      sym__block_1,
      sym__block_2,
      sym__block_3,
      sym_block_style,
    STATE(20), 9,
      sym__command_unit,
      sym_method,
      sym_message,
      sym_block,
      sym_uniqkey,
      sym_string,
      sym_color,
      sym_comment,
      aux_sym_command_repeat1,
    ACTIONS(192), 12,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
  [669] = 17,
    ACTIONS(180), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_LTstyle_GT,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      sym__signallinecomment,
    ACTIONS(204), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym__mutilinecomment,
    STATE(106), 1,
      sym_colorleader,
    ACTIONS(194), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(50), 4,
      sym__block_1,
      sym__block_2,
      sym__block_3,
      sym_block_style,
    STATE(20), 9,
      sym__command_unit,
      sym_method,
      sym_message,
      sym_block,
      sym_uniqkey,
      sym_string,
      sym_color,
      sym_comment,
      aux_sym_command_repeat1,
    ACTIONS(192), 12,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
  [744] = 17,
    ACTIONS(180), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_LTstyle_GT,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      sym__signallinecomment,
    ACTIONS(204), 1,
      anon_sym_SLASH_SQUOTE,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      sym__mutilinecomment,
    STATE(106), 1,
      sym_colorleader,
    ACTIONS(194), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(50), 4,
      sym__block_1,
      sym__block_2,
      sym__block_3,
      sym_block_style,
    STATE(26), 9,
      sym__command_unit,
      sym_method,
      sym_message,
      sym_block,
      sym_uniqkey,
      sym_string,
      sym_color,
      sym_comment,
      aux_sym_command_repeat1,
    ACTIONS(192), 12,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym__,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_SEMI,
  [819] = 2,
    ACTIONS(246), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(244), 27,
      anon_sym_ATenduml,
      anon_sym_ATendsalt,
      anon_sym_ATendgantt,
      anon_sym_ATendmindmap,
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
  [853] = 3,
    ACTIONS(248), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(252), 3,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(250), 23,
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
  [887] = 2,
    ACTIONS(256), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(254), 24,
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
  [918] = 2,
    ACTIONS(260), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(258), 24,
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
  [949] = 2,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(262), 24,
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
  [980] = 2,
    ACTIONS(268), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(266), 24,
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
  [1011] = 2,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(270), 24,
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
  [1042] = 2,
    ACTIONS(276), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(274), 24,
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
  [1073] = 2,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(278), 24,
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
  [1104] = 2,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(282), 24,
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
  [1135] = 2,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(286), 24,
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
  [1166] = 3,
    ACTIONS(250), 1,
      anon_sym_LF,
    ACTIONS(290), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(252), 24,
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
  [1199] = 2,
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
  [1230] = 2,
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
  [1261] = 2,
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
  [1292] = 2,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(304), 24,
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
  [1323] = 2,
    ACTIONS(310), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(308), 24,
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
  [1354] = 2,
    ACTIONS(314), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(312), 24,
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
  [1385] = 2,
    ACTIONS(318), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(316), 24,
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
  [1416] = 2,
    ACTIONS(322), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(320), 24,
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
  [1447] = 2,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(324), 24,
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
  [1478] = 3,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(330), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(328), 23,
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
  [1511] = 2,
    ACTIONS(330), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(328), 24,
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
  [1542] = 2,
    ACTIONS(286), 1,
      anon_sym_LF,
    ACTIONS(288), 24,
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
  [1572] = 2,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(280), 24,
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
  [1602] = 2,
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
  [1632] = 2,
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
  [1662] = 2,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(330), 24,
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
  [1692] = 2,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(318), 24,
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
  [1722] = 3,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(335), 1,
      sym_identifier,
    ACTIONS(330), 23,
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
  [1754] = 2,
    ACTIONS(246), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(244), 23,
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
  [1784] = 2,
    ACTIONS(320), 1,
      anon_sym_LF,
    ACTIONS(322), 24,
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
  [1814] = 2,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(314), 24,
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
  [1844] = 2,
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(284), 24,
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
  [1874] = 2,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(256), 24,
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
  [1904] = 2,
    ACTIONS(274), 1,
      anon_sym_LF,
    ACTIONS(276), 24,
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
  [1934] = 2,
    ACTIONS(270), 1,
      anon_sym_LF,
    ACTIONS(272), 24,
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
  [1964] = 2,
    ACTIONS(266), 1,
      anon_sym_LF,
    ACTIONS(268), 24,
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
  [1994] = 2,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 24,
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
  [2024] = 2,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(264), 24,
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
  [2054] = 2,
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
  [2084] = 2,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(260), 24,
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
  [2114] = 2,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(306), 24,
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
  [2144] = 2,
    ACTIONS(324), 1,
      anon_sym_LF,
    ACTIONS(326), 24,
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
  [2174] = 4,
    ACTIONS(338), 1,
      anon_sym_ATendyaml,
    ACTIONS(340), 1,
      aux_sym__commandyaml_token1,
    STATE(107), 1,
      sym_commandyaml,
    STATE(86), 2,
      sym__commandyaml,
      aux_sym_commandyaml_repeat1,
  [2188] = 4,
    ACTIONS(342), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(344), 1,
      anon_sym_ATendjson,
    STATE(104), 1,
      sym_commandjson,
    STATE(85), 2,
      sym__commandjson,
      aux_sym_commandjson_repeat1,
  [2202] = 3,
    ACTIONS(346), 1,
      anon_sym_ATendyaml,
    ACTIONS(348), 1,
      aux_sym__commandyaml_token1,
    STATE(78), 2,
      sym__commandyaml,
      aux_sym_commandyaml_repeat1,
  [2213] = 3,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      aux_sym_string_repeat1,
    ACTIONS(353), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [2224] = 3,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      aux_sym_string_repeat1,
    ACTIONS(357), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [2235] = 3,
    ACTIONS(360), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      aux_sym_string_repeat1,
    ACTIONS(353), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [2246] = 3,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym_string_repeat1,
    ACTIONS(364), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [2257] = 3,
    ACTIONS(366), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(369), 1,
      anon_sym_ATendjson,
    STATE(83), 2,
      sym__commandjson,
      aux_sym_commandjson_repeat1,
  [2268] = 3,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      aux_sym_string_repeat1,
    ACTIONS(373), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [2279] = 3,
    ACTIONS(375), 1,
      aux_sym__commandyaml_token1,
    ACTIONS(377), 1,
      anon_sym_ATendjson,
    STATE(83), 2,
      sym__commandjson,
      aux_sym_commandjson_repeat1,
  [2290] = 3,
    ACTIONS(379), 1,
      anon_sym_ATendyaml,
    ACTIONS(381), 1,
      aux_sym__commandyaml_token1,
    STATE(78), 2,
      sym__commandyaml,
      aux_sym_commandyaml_repeat1,
  [2301] = 3,
    ACTIONS(383), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(386), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(87), 1,
      aux_sym__mutilinecomment_repeat1,
  [2311] = 3,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_string,
  [2321] = 3,
    ACTIONS(390), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(392), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(90), 1,
      aux_sym__mutilinecomment_repeat1,
  [2331] = 3,
    ACTIONS(394), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(396), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(87), 1,
      aux_sym__mutilinecomment_repeat1,
  [2341] = 3,
    ACTIONS(394), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(398), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(87), 1,
      aux_sym__mutilinecomment_repeat1,
  [2351] = 3,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      sym_string,
  [2361] = 3,
    ACTIONS(402), 1,
      aux_sym__mutilinecomment_token1,
    ACTIONS(404), 1,
      anon_sym_SQUOTE_SLASH,
    STATE(91), 1,
      aux_sym__mutilinecomment_repeat1,
  [2371] = 1,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
  [2375] = 1,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
  [2379] = 1,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
  [2383] = 1,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
  [2387] = 1,
    ACTIONS(414), 1,
      sym_identifier,
  [2391] = 1,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
  [2395] = 1,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
  [2399] = 1,
    ACTIONS(420), 1,
      sym_identifier,
  [2403] = 1,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
  [2407] = 1,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
  [2411] = 1,
    ACTIONS(426), 1,
      anon_sym_ATendjson,
  [2415] = 1,
    ACTIONS(428), 1,
      ts_builtin_sym_end,
  [2419] = 1,
    ACTIONS(430), 1,
      sym_identifier,
  [2423] = 1,
    ACTIONS(432), 1,
      anon_sym_ATendyaml,
  [2427] = 1,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
  [2431] = 1,
    ACTIONS(436), 1,
      ts_builtin_sym_end,
  [2435] = 1,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
  [2439] = 1,
    ACTIONS(440), 1,
      ts_builtin_sym_end,
  [2443] = 1,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
  [2447] = 1,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
  [2451] = 1,
    ACTIONS(446), 1,
      ts_builtin_sym_end,
  [2455] = 1,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
  [2459] = 1,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
  [2463] = 1,
    ACTIONS(452), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 73,
  [SMALL_STATE(23)] = 148,
  [SMALL_STATE(24)] = 223,
  [SMALL_STATE(25)] = 298,
  [SMALL_STATE(26)] = 373,
  [SMALL_STATE(27)] = 448,
  [SMALL_STATE(28)] = 521,
  [SMALL_STATE(29)] = 594,
  [SMALL_STATE(30)] = 669,
  [SMALL_STATE(31)] = 744,
  [SMALL_STATE(32)] = 819,
  [SMALL_STATE(33)] = 853,
  [SMALL_STATE(34)] = 887,
  [SMALL_STATE(35)] = 918,
  [SMALL_STATE(36)] = 949,
  [SMALL_STATE(37)] = 980,
  [SMALL_STATE(38)] = 1011,
  [SMALL_STATE(39)] = 1042,
  [SMALL_STATE(40)] = 1073,
  [SMALL_STATE(41)] = 1104,
  [SMALL_STATE(42)] = 1135,
  [SMALL_STATE(43)] = 1166,
  [SMALL_STATE(44)] = 1199,
  [SMALL_STATE(45)] = 1230,
  [SMALL_STATE(46)] = 1261,
  [SMALL_STATE(47)] = 1292,
  [SMALL_STATE(48)] = 1323,
  [SMALL_STATE(49)] = 1354,
  [SMALL_STATE(50)] = 1385,
  [SMALL_STATE(51)] = 1416,
  [SMALL_STATE(52)] = 1447,
  [SMALL_STATE(53)] = 1478,
  [SMALL_STATE(54)] = 1511,
  [SMALL_STATE(55)] = 1542,
  [SMALL_STATE(56)] = 1572,
  [SMALL_STATE(57)] = 1602,
  [SMALL_STATE(58)] = 1632,
  [SMALL_STATE(59)] = 1662,
  [SMALL_STATE(60)] = 1692,
  [SMALL_STATE(61)] = 1722,
  [SMALL_STATE(62)] = 1754,
  [SMALL_STATE(63)] = 1784,
  [SMALL_STATE(64)] = 1814,
  [SMALL_STATE(65)] = 1844,
  [SMALL_STATE(66)] = 1874,
  [SMALL_STATE(67)] = 1904,
  [SMALL_STATE(68)] = 1934,
  [SMALL_STATE(69)] = 1964,
  [SMALL_STATE(70)] = 1994,
  [SMALL_STATE(71)] = 2024,
  [SMALL_STATE(72)] = 2054,
  [SMALL_STATE(73)] = 2084,
  [SMALL_STATE(74)] = 2114,
  [SMALL_STATE(75)] = 2144,
  [SMALL_STATE(76)] = 2174,
  [SMALL_STATE(77)] = 2188,
  [SMALL_STATE(78)] = 2202,
  [SMALL_STATE(79)] = 2213,
  [SMALL_STATE(80)] = 2224,
  [SMALL_STATE(81)] = 2235,
  [SMALL_STATE(82)] = 2246,
  [SMALL_STATE(83)] = 2257,
  [SMALL_STATE(84)] = 2268,
  [SMALL_STATE(85)] = 2279,
  [SMALL_STATE(86)] = 2290,
  [SMALL_STATE(87)] = 2301,
  [SMALL_STATE(88)] = 2311,
  [SMALL_STATE(89)] = 2321,
  [SMALL_STATE(90)] = 2331,
  [SMALL_STATE(91)] = 2341,
  [SMALL_STATE(92)] = 2351,
  [SMALL_STATE(93)] = 2361,
  [SMALL_STATE(94)] = 2371,
  [SMALL_STATE(95)] = 2375,
  [SMALL_STATE(96)] = 2379,
  [SMALL_STATE(97)] = 2383,
  [SMALL_STATE(98)] = 2387,
  [SMALL_STATE(99)] = 2391,
  [SMALL_STATE(100)] = 2395,
  [SMALL_STATE(101)] = 2399,
  [SMALL_STATE(102)] = 2403,
  [SMALL_STATE(103)] = 2407,
  [SMALL_STATE(104)] = 2411,
  [SMALL_STATE(105)] = 2415,
  [SMALL_STATE(106)] = 2419,
  [SMALL_STATE(107)] = 2423,
  [SMALL_STATE(108)] = 2427,
  [SMALL_STATE(109)] = 2431,
  [SMALL_STATE(110)] = 2435,
  [SMALL_STATE(111)] = 2439,
  [SMALL_STATE(112)] = 2443,
  [SMALL_STATE(113)] = 2447,
  [SMALL_STATE(114)] = 2451,
  [SMALL_STATE(115)] = 2455,
  [SMALL_STATE(116)] = 2459,
  [SMALL_STATE(117)] = 2463,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(101),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(23),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(31),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(16),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(59),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(59),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(61),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(82),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(43),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(63),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(89),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(117),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(24),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(13),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(11),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(54),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(54),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(53),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(84),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(33),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(51),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(93),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(101),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(31),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(16),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(59),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(61),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(82),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(43),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(63),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(89),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_unit, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_unit, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutilinecomment, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutilinecomment, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutilinecomment, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutilinecomment, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_style, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_style, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_2, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_2, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_1, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_1, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_3, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_3, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_style, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_style, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_2, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_2, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_1, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_1, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_3, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_3, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 5),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 5),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uniqkey, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uniqkey, 1),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_uniqkey, 1), REDUCE(sym_colorleader, 1),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_uniqkey, 1), REDUCE(sym_colorleader, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commandyaml_repeat1, 2),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_commandyaml_repeat1, 2), SHIFT_REPEAT(78),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(80),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_commandjson_repeat1, 2), SHIFT_REPEAT(83),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commandjson_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commandjson, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commandyaml, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutilinecomment_repeat1, 2), SHIFT_REPEAT(87),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mutilinecomment_repeat1, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_saltuml, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 3, .production_id = 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gannttuml, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmapuml, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gannttuml, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmapuml, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yamluml, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plantuml, 1),
  [438] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_saltuml, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yamluml, 3, .production_id = 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
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

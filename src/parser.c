#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 113
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_ATstartuml = 1,
  anon_sym_ATenduml = 2,
  anon_sym_EQ_EQ = 3,
  anon_sym_as = 4,
  anon_sym_DASH_GT = 5,
  anon_sym_LBRACK = 6,
  anon_sym_EQ = 7,
  anon_sym_RBRACK = 8,
  anon_sym_COLON = 9,
  sym__splitline = 10,
  anon_sym_abstract = 11,
  anon_sym_class = 12,
  anon_sym_interface = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_usecase = 16,
  sym_casedescribe = 17,
  anon_sym_actor = 18,
  sym_identifier = 19,
  sym_number = 20,
  sym_describe = 21,
  anon_sym_LBRACE = 22,
  anon_sym_COMMA = 23,
  anon_sym_RBRACE = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_string_content_token1 = 26,
  sym_escape_sequence = 27,
  sym_true = 28,
  sym_false = 29,
  sym_null = 30,
  anon_sym_LT = 31,
  anon_sym_SLASH_GT = 32,
  anon_sym_GT = 33,
  anon_sym_LT_SLASH = 34,
  anon_sym_ATstartmindmap = 35,
  anon_sym_ATendmindmap = 36,
  sym__minmapstart = 37,
  anon_sym_ATstartjson = 38,
  anon_sym_ATendjson = 39,
  anon_sym_ATstartyaml = 40,
  anon_sym_ATendyaml = 41,
  sym_plantuml = 42,
  sym_baseuml = 43,
  sym__sequenceunit = 44,
  sym_statedec = 45,
  sym_pardec = 46,
  sym_astate = 47,
  sym_variable = 48,
  sym_participantdec = 49,
  sym_statemessage = 50,
  sym_typedef = 51,
  sym__abstract = 52,
  sym__interface = 53,
  sym__allcase = 54,
  sym_casestate = 55,
  sym_unitusercase = 56,
  sym__blockstate = 57,
  sym__keywordstate = 58,
  sym_actorstate = 59,
  sym__actorunit = 60,
  sym_actorunit = 61,
  sym_json = 62,
  sym__value = 63,
  sym_object = 64,
  sym_pair = 65,
  sym_array = 66,
  sym_string = 67,
  sym_string_content = 68,
  sym_mindmap = 69,
  sym_mindmapunit = 70,
  sym_jsonuml = 71,
  sym_yamluml = 72,
  aux_sym_baseuml_repeat1 = 73,
  aux_sym_baseuml_repeat2 = 74,
  aux_sym_baseuml_repeat3 = 75,
  aux_sym_object_repeat1 = 76,
  aux_sym_array_repeat1 = 77,
  aux_sym_string_content_repeat1 = 78,
  aux_sym_mindmap_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_as] = "as",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [sym__splitline] = "_splitline",
  [anon_sym_abstract] = "abstract",
  [anon_sym_class] = "class",
  [anon_sym_interface] = "interface",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_usecase] = "usecase",
  [sym_casedescribe] = "casedescribe",
  [anon_sym_actor] = "actor",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_describe] = "describe",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_ATstartmindmap] = "@startmindmap",
  [anon_sym_ATendmindmap] = "@endmindmap",
  [sym__minmapstart] = "_minmapstart",
  [anon_sym_ATstartjson] = "@startjson",
  [anon_sym_ATendjson] = "@endjson",
  [anon_sym_ATstartyaml] = "@startyaml",
  [anon_sym_ATendyaml] = "@endyaml",
  [sym_plantuml] = "plantuml",
  [sym_baseuml] = "baseuml",
  [sym__sequenceunit] = "_sequenceunit",
  [sym_statedec] = "statedec",
  [sym_pardec] = "pardec",
  [sym_astate] = "astate",
  [sym_variable] = "variable",
  [sym_participantdec] = "participantdec",
  [sym_statemessage] = "statemessage",
  [sym_typedef] = "typedef",
  [sym__abstract] = "_abstract",
  [sym__interface] = "_interface",
  [sym__allcase] = "_allcase",
  [sym_casestate] = "casestate",
  [sym_unitusercase] = "unitusercase",
  [sym__blockstate] = "_blockstate",
  [sym__keywordstate] = "_keywordstate",
  [sym_actorstate] = "actorstate",
  [sym__actorunit] = "_actorunit",
  [sym_actorunit] = "actorunit",
  [sym_json] = "json",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [sym_mindmap] = "mindmap",
  [sym_mindmapunit] = "mindmapunit",
  [sym_jsonuml] = "jsonuml",
  [sym_yamluml] = "yamluml",
  [aux_sym_baseuml_repeat1] = "baseuml_repeat1",
  [aux_sym_baseuml_repeat2] = "baseuml_repeat2",
  [aux_sym_baseuml_repeat3] = "baseuml_repeat3",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym_mindmap_repeat1] = "mindmap_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATstartuml] = anon_sym_ATstartuml,
  [anon_sym_ATenduml] = anon_sym_ATenduml,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__splitline] = sym__splitline,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_usecase] = anon_sym_usecase,
  [sym_casedescribe] = sym_casedescribe,
  [anon_sym_actor] = anon_sym_actor,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_describe] = sym_describe,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_ATstartmindmap] = anon_sym_ATstartmindmap,
  [anon_sym_ATendmindmap] = anon_sym_ATendmindmap,
  [sym__minmapstart] = sym__minmapstart,
  [anon_sym_ATstartjson] = anon_sym_ATstartjson,
  [anon_sym_ATendjson] = anon_sym_ATendjson,
  [anon_sym_ATstartyaml] = anon_sym_ATstartyaml,
  [anon_sym_ATendyaml] = anon_sym_ATendyaml,
  [sym_plantuml] = sym_plantuml,
  [sym_baseuml] = sym_baseuml,
  [sym__sequenceunit] = sym__sequenceunit,
  [sym_statedec] = sym_statedec,
  [sym_pardec] = sym_pardec,
  [sym_astate] = sym_astate,
  [sym_variable] = sym_variable,
  [sym_participantdec] = sym_participantdec,
  [sym_statemessage] = sym_statemessage,
  [sym_typedef] = sym_typedef,
  [sym__abstract] = sym__abstract,
  [sym__interface] = sym__interface,
  [sym__allcase] = sym__allcase,
  [sym_casestate] = sym_casestate,
  [sym_unitusercase] = sym_unitusercase,
  [sym__blockstate] = sym__blockstate,
  [sym__keywordstate] = sym__keywordstate,
  [sym_actorstate] = sym_actorstate,
  [sym__actorunit] = sym__actorunit,
  [sym_actorunit] = sym_actorunit,
  [sym_json] = sym_json,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [sym_mindmap] = sym_mindmap,
  [sym_mindmapunit] = sym_mindmapunit,
  [sym_jsonuml] = sym_jsonuml,
  [sym_yamluml] = sym_yamluml,
  [aux_sym_baseuml_repeat1] = aux_sym_baseuml_repeat1,
  [aux_sym_baseuml_repeat2] = aux_sym_baseuml_repeat2,
  [aux_sym_baseuml_repeat3] = aux_sym_baseuml_repeat3,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
  [aux_sym_mindmap_repeat1] = aux_sym_mindmap_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATstartuml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATenduml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__splitline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
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
  [anon_sym_usecase] = {
    .visible = true,
    .named = false,
  },
  [sym_casedescribe] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_actor] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_describe] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
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
  [sym__minmapstart] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATstartjson] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendjson] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATstartyaml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendyaml] = {
    .visible = true,
    .named = false,
  },
  [sym_plantuml] = {
    .visible = true,
    .named = true,
  },
  [sym_baseuml] = {
    .visible = true,
    .named = true,
  },
  [sym__sequenceunit] = {
    .visible = false,
    .named = true,
  },
  [sym_statedec] = {
    .visible = true,
    .named = true,
  },
  [sym_pardec] = {
    .visible = true,
    .named = true,
  },
  [sym_astate] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_participantdec] = {
    .visible = true,
    .named = true,
  },
  [sym_statemessage] = {
    .visible = true,
    .named = true,
  },
  [sym_typedef] = {
    .visible = true,
    .named = true,
  },
  [sym__abstract] = {
    .visible = false,
    .named = true,
  },
  [sym__interface] = {
    .visible = false,
    .named = true,
  },
  [sym__allcase] = {
    .visible = false,
    .named = true,
  },
  [sym_casestate] = {
    .visible = true,
    .named = true,
  },
  [sym_unitusercase] = {
    .visible = true,
    .named = true,
  },
  [sym__blockstate] = {
    .visible = false,
    .named = true,
  },
  [sym__keywordstate] = {
    .visible = false,
    .named = true,
  },
  [sym_actorstate] = {
    .visible = true,
    .named = true,
  },
  [sym__actorunit] = {
    .visible = false,
    .named = true,
  },
  [sym_actorunit] = {
    .visible = true,
    .named = true,
  },
  [sym_json] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_mindmap] = {
    .visible = true,
    .named = true,
  },
  [sym_mindmapunit] = {
    .visible = true,
    .named = true,
  },
  [sym_jsonuml] = {
    .visible = true,
    .named = true,
  },
  [sym_yamluml] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_baseuml_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_baseuml_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_baseuml_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mindmap_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_class = 2,
  field_key = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_class] = "class",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 3},
  [7] = {.index = 9, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_alias, 0, .inherited = true},
  [1] =
    {field_class, 0},
  [2] =
    {field_alias, 2},
  [3] =
    {field_alias, 3},
  [4] =
    {field_key, 0},
    {field_value, 2},
  [6] =
    {field_alias, 2},
    {field_alias, 3},
    {field_alias, 4},
  [9] =
    {field_alias, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_casedescribe_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '\\'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '\\' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43261
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42786
            ? (c < 42240
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 42192
                  ? (c >= 19968 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_casedescribe_character_set_2(int32_t c) {
  return (c < 6528
    ? (c < 2972
      ? (c < 2185
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'A'
                ? (c < '\r'
                  ? (c >= '\t' && c <= '\n')
                  : (c <= '\r' || c == ' '))
                : (c <= 'Z' || (c < 'a'
                  ? c == '\\'
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 3976
        ? (c < 3389
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3332
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)
                : (c <= 3340 || (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)))))))
          : (c <= 3389 || (c < 3716
            ? (c < 3507
              ? (c < 3450
                ? (c < 3412
                  ? c == 3406
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3634
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3776
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)))
              : (c <= 3780 || (c < 3840
                ? (c < 3804
                  ? c == 3782
                  : c <= 3807)
                : (c <= 3840 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4824
          ? (c < 4348
            ? (c < 4206
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : c <= 4198)))
              : (c <= 4208 || (c < 4295
                ? (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4752
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : c <= 4749)))
              : (c <= 4784 || (c < 4800
                ? (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5743
              ? (c < 5024
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : c <= 5740)))
              : (c <= 5759 || (c < 5888
                ? (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5873 && c <= 5880)))
                : (c <= 5905 || (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : c <= 5969)))))
            : (c <= 5996 || (c < 6279
              ? (c < 6108
                ? (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6067 || c == 6103))
                : (c <= 6108 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : c <= 6276)))
              : (c <= 6312 || (c < 6400
                ? (c < 6320
                  ? c == 6314
                  : c <= 6389)
                : (c <= 6430 || (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)))))))))))))
    : (c <= 6571 || (c < 43259
      ? (c < 8526
        ? (c < 8029
          ? (c < 7312
            ? (c < 7043
              ? (c < 6823
                ? (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : c <= 6988)))
              : (c <= 7072 || (c < 7245
                ? (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7247 || (c < 7296
                  ? (c >= 7258 && c <= 7293)
                  : c <= 7304)))))
            : (c <= 7354 || (c < 7680
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : c <= 7615)))
              : (c <= 7957 || (c < 8016
                ? (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))
                : (c <= 8023 || (c < 8027
                  ? c == 8025
                  : c <= 8027)))))))
          : (c <= 8029 || (c < 8336
            ? (c < 8144
              ? (c < 8126
                ? (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))
                : (c <= 8126 || (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : c <= 8140)))
              : (c <= 8147 || (c < 8182
                ? (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))
                : (c <= 8188 || (c < 8319
                  ? c == 8305
                  : c <= 8319)))))
            : (c <= 8348 || (c < 8486
              ? (c < 8469
                ? (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))
                : (c <= 8469 || (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : c <= 8484)))
              : (c <= 8486 || (c < 8495
                ? (c < 8490
                  ? c == 8488
                  : c <= 8493)
                : (c <= 8505 || (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : c <= 8521)))))))))
        : (c <= 8526 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42775
            ? (c < 42192
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_describe_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2984
      ? (c < 2365
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : c <= 5937)
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43261
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42786
            ? (c < 42240
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 42192
                  ? (c >= 19968 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_describe_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'A'
                ? (c < '\r'
                  ? (c >= '\t' && c <= '\n')
                  : (c <= '\r' || c == ' '))
                : (c <= 'Z' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8526
        ? (c < 8029
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8016
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : c <= 8013)
                : (c <= 8023 || (c < 8027
                  ? c == 8025
                  : c <= 8027)))))))
          : (c <= 8029 || (c < 8336
            ? (c < 8144
              ? (c < 8126
                ? (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))
                : (c <= 8126 || (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : c <= 8140)))
              : (c <= 8147 || (c < 8182
                ? (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))
                : (c <= 8188 || (c < 8319
                  ? c == 8305
                  : c <= 8319)))))
            : (c <= 8348 || (c < 8486
              ? (c < 8469
                ? (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))
                : (c <= 8469 || (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : c <= 8484)))
              : (c <= 8486 || (c < 8495
                ? (c < 8490
                  ? c == 8488
                  : c <= 8493)
                : (c <= 8505 || (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : c <= 8521)))))))))
        : (c <= 8526 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42775
            ? (c < 42192
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(101);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(198);
      if (lookahead == ',') ADVANCE(180);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '<') ADVANCE(192);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '}') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(100)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '0') ADVANCE(169);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(77);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '}') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(170);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(107);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(193);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 42:
      if (lookahead == 'j') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 43:
      if (lookahead == 'j') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'j') ADVANCE(81);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(55);
      if (lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 91:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 92:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(173);
      END_STATE();
    case 93:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (sym_describe_character_set_1(lookahead)) ADVANCE(178);
      END_STATE();
    case 94:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (sym_casedescribe_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(174);
      END_STATE();
    case 96:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 100:
      if (eof) ADVANCE(101);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(198);
      if (lookahead == ',') ADVANCE(180);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '<') ADVANCE(192);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '}') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(100)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__splitline);
      if (lookahead == '-') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__splitline);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '>') ADVANCE(107);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_usecase);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_usecase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_casedescribe);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (sym_casedescribe_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_casedescribe);
      if (sym_casedescribe_character_set_2(lookahead)) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_actor);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(158);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == 's') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(158);
      if (lookahead == 'c') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(99);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_describe);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (sym_describe_character_set_1(lookahead)) ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_describe);
      if (sym_describe_character_set_2(lookahead)) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__minmapstart);
      if (lookahead == '*') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
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
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 21},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 93},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 94},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 94},
  [90] = {.lex_state = 93},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 94},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATstartuml] = ACTIONS(1),
    [anon_sym_ATenduml] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__splitline] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_usecase] = ACTIONS(1),
    [anon_sym_actor] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_ATstartmindmap] = ACTIONS(1),
    [anon_sym_ATendmindmap] = ACTIONS(1),
    [sym__minmapstart] = ACTIONS(1),
    [anon_sym_ATstartjson] = ACTIONS(1),
    [anon_sym_ATendjson] = ACTIONS(1),
    [anon_sym_ATstartyaml] = ACTIONS(1),
    [anon_sym_ATendyaml] = ACTIONS(1),
  },
  [1] = {
    [sym_plantuml] = STATE(108),
    [sym_baseuml] = STATE(92),
    [sym_mindmap] = STATE(92),
    [sym_jsonuml] = STATE(92),
    [sym_yamluml] = STATE(92),
    [anon_sym_ATstartuml] = ACTIONS(3),
    [anon_sym_ATstartmindmap] = ACTIONS(5),
    [anon_sym_ATstartjson] = ACTIONS(7),
    [anon_sym_ATstartyaml] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(11), 1,
      anon_sym_ATenduml,
    ACTIONS(13), 1,
      anon_sym_EQ_EQ,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(17), 1,
      anon_sym_abstract,
    ACTIONS(19), 1,
      anon_sym_interface,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_usecase,
    ACTIONS(25), 1,
      anon_sym_actor,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(14), 1,
      sym_actorunit,
    STATE(18), 1,
      sym_unitusercase,
    STATE(21), 1,
      sym__keywordstate,
    STATE(22), 1,
      sym__actorunit,
    STATE(32), 1,
      sym__blockstate,
    STATE(11), 2,
      sym_typedef,
      aux_sym_baseuml_repeat1,
    STATE(55), 2,
      sym__abstract,
      sym__interface,
    STATE(4), 4,
      sym__allcase,
      sym_casestate,
      sym_actorstate,
      aux_sym_baseuml_repeat3,
    STATE(10), 7,
      sym__sequenceunit,
      sym_statedec,
      sym_pardec,
      sym_astate,
      sym_variable,
      sym_participantdec,
      aux_sym_baseuml_repeat2,
  [66] = 11,
    ACTIONS(29), 1,
      anon_sym_ATenduml,
    ACTIONS(31), 1,
      anon_sym_COLON,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_usecase,
    ACTIONS(40), 1,
      anon_sym_actor,
    STATE(14), 1,
      sym_actorunit,
    STATE(18), 1,
      sym_unitusercase,
    STATE(21), 1,
      sym__keywordstate,
    STATE(22), 1,
      sym__actorunit,
    STATE(32), 1,
      sym__blockstate,
    STATE(3), 4,
      sym__allcase,
      sym_casestate,
      sym_actorstate,
      aux_sym_baseuml_repeat3,
  [103] = 11,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_ATenduml,
    ACTIONS(45), 1,
      anon_sym_usecase,
    ACTIONS(47), 1,
      anon_sym_actor,
    STATE(14), 1,
      sym_actorunit,
    STATE(18), 1,
      sym_unitusercase,
    STATE(21), 1,
      sym__keywordstate,
    STATE(22), 1,
      sym__actorunit,
    STATE(32), 1,
      sym__blockstate,
    STATE(3), 4,
      sym__allcase,
      sym_casestate,
      sym_actorstate,
      aux_sym_baseuml_repeat3,
  [140] = 7,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_ATendjson,
    STATE(103), 1,
      sym_json,
    ACTIONS(51), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(99), 4,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
  [168] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    ACTIONS(61), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(60), 4,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
  [193] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(69), 4,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
  [215] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(67), 4,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
  [237] = 4,
    ACTIONS(67), 1,
      anon_sym_ATenduml,
    ACTIONS(69), 1,
      anon_sym_EQ_EQ,
    ACTIONS(72), 1,
      sym_identifier,
    STATE(9), 7,
      sym__sequenceunit,
      sym_statedec,
      sym_pardec,
      sym_astate,
      sym_variable,
      sym_participantdec,
      aux_sym_baseuml_repeat2,
  [256] = 4,
    ACTIONS(13), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      anon_sym_ATenduml,
    ACTIONS(75), 1,
      sym_identifier,
    STATE(9), 7,
      sym__sequenceunit,
      sym_statedec,
      sym_pardec,
      sym_astate,
      sym_variable,
      sym_participantdec,
      aux_sym_baseuml_repeat2,
  [275] = 5,
    ACTIONS(43), 1,
      anon_sym_ATenduml,
    ACTIONS(77), 1,
      anon_sym_abstract,
    ACTIONS(79), 1,
      anon_sym_interface,
    STATE(12), 2,
      sym_typedef,
      aux_sym_baseuml_repeat1,
    STATE(55), 2,
      sym__abstract,
      sym__interface,
  [293] = 5,
    ACTIONS(81), 1,
      anon_sym_ATenduml,
    ACTIONS(83), 1,
      anon_sym_abstract,
    ACTIONS(86), 1,
      anon_sym_interface,
    STATE(12), 2,
      sym_typedef,
      aux_sym_baseuml_repeat1,
    STATE(55), 2,
      sym__abstract,
      sym__interface,
  [311] = 2,
    ACTIONS(91), 1,
      anon_sym_as,
    ACTIONS(89), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_usecase,
      anon_sym_actor,
  [322] = 2,
    ACTIONS(95), 1,
      anon_sym_as,
    ACTIONS(93), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_usecase,
      anon_sym_actor,
  [333] = 2,
    ACTIONS(99), 1,
      anon_sym_as,
    ACTIONS(97), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_usecase,
      anon_sym_actor,
  [344] = 1,
    ACTIONS(101), 6,
      anon_sym_ATenduml,
      anon_sym_as,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_usecase,
      anon_sym_actor,
  [353] = 1,
    ACTIONS(103), 6,
      anon_sym_ATenduml,
      anon_sym_as,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_usecase,
      anon_sym_actor,
  [362] = 2,
    ACTIONS(107), 1,
      anon_sym_as,
    ACTIONS(105), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_usecase,
      anon_sym_actor,
  [373] = 2,
    ACTIONS(111), 1,
      anon_sym_as,
    ACTIONS(109), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_usecase,
      anon_sym_actor,
  [384] = 1,
    ACTIONS(113), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_usecase,
      anon_sym_actor,
  [392] = 1,
    ACTIONS(115), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_usecase,
      anon_sym_actor,
  [400] = 1,
    ACTIONS(117), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_usecase,
      anon_sym_actor,
  [408] = 1,
    ACTIONS(119), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_usecase,
      anon_sym_actor,
  [416] = 1,
    ACTIONS(121), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_usecase,
      anon_sym_actor,
  [424] = 1,
    ACTIONS(123), 5,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_ATendjson,
  [432] = 1,
    ACTIONS(125), 5,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_ATendjson,
  [440] = 1,
    ACTIONS(127), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_usecase,
      anon_sym_actor,
  [448] = 3,
    ACTIONS(131), 1,
      anon_sym_COLON,
    STATE(61), 1,
      sym_statemessage,
    ACTIONS(129), 3,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      sym_identifier,
  [460] = 1,
    ACTIONS(133), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_usecase,
      anon_sym_actor,
  [468] = 5,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      sym_number,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_pair,
    STATE(98), 1,
      sym_string,
  [484] = 4,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_string_content_repeat1,
    STATE(87), 1,
      sym_string_content,
    ACTIONS(141), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [498] = 1,
    ACTIONS(115), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_usecase,
      anon_sym_actor,
  [506] = 1,
    ACTIONS(143), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_usecase,
      anon_sym_actor,
  [514] = 1,
    ACTIONS(145), 5,
      anon_sym_ATenduml,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_usecase,
      anon_sym_actor,
  [522] = 4,
    ACTIONS(149), 1,
      anon_sym_as,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(147), 2,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
  [536] = 1,
    ACTIONS(155), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_ATendjson,
  [543] = 3,
    ACTIONS(157), 1,
      anon_sym_ATendmindmap,
    ACTIONS(159), 1,
      sym__minmapstart,
    STATE(37), 2,
      sym_mindmapunit,
      aux_sym_mindmap_repeat1,
  [554] = 1,
    ACTIONS(162), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_ATendjson,
  [561] = 1,
    ACTIONS(164), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_ATendjson,
  [568] = 3,
    ACTIONS(166), 1,
      anon_sym_ATendmindmap,
    ACTIONS(168), 1,
      sym__minmapstart,
    STATE(37), 2,
      sym_mindmapunit,
      aux_sym_mindmap_repeat1,
  [579] = 3,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(172), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [590] = 1,
    ACTIONS(175), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_ATendjson,
  [597] = 4,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      sym_number,
    STATE(64), 1,
      sym_pair,
    STATE(98), 1,
      sym_string,
  [610] = 1,
    ACTIONS(177), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_ATendjson,
  [617] = 3,
    ACTIONS(168), 1,
      sym__minmapstart,
    ACTIONS(179), 1,
      anon_sym_ATendmindmap,
    STATE(40), 2,
      sym_mindmapunit,
      aux_sym_mindmap_repeat1,
  [628] = 1,
    ACTIONS(181), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_ATendjson,
  [635] = 3,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(185), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [646] = 1,
    ACTIONS(187), 3,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      sym_identifier,
  [652] = 3,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_array_repeat1,
  [662] = 1,
    ACTIONS(193), 3,
      anon_sym_ATenduml,
      anon_sym_abstract,
      anon_sym_interface,
  [668] = 1,
    ACTIONS(195), 3,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      sym_identifier,
  [674] = 1,
    ACTIONS(197), 3,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      sym_identifier,
  [680] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_object_repeat1,
  [690] = 3,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(106), 1,
      sym_actorunit,
  [700] = 1,
    ACTIONS(206), 3,
      anon_sym_ATenduml,
      anon_sym_abstract,
      anon_sym_interface,
  [706] = 1,
    ACTIONS(208), 3,
      anon_sym_ATenduml,
      anon_sym_abstract,
      anon_sym_interface,
  [712] = 3,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_array_repeat1,
  [722] = 1,
    ACTIONS(215), 3,
      anon_sym_ATenduml,
      anon_sym_abstract,
      anon_sym_interface,
  [728] = 1,
    ACTIONS(217), 3,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      sym_identifier,
  [734] = 3,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym_array_repeat1,
  [744] = 1,
    ACTIONS(221), 3,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      sym_identifier,
  [750] = 3,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_object_repeat1,
  [760] = 3,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_object_repeat1,
  [770] = 1,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [775] = 2,
    ACTIONS(229), 1,
      anon_sym_class,
    ACTIONS(231), 1,
      sym_identifier,
  [782] = 2,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      sym_identifier,
  [789] = 1,
    ACTIONS(210), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [794] = 1,
    ACTIONS(237), 2,
      anon_sym_ATendmindmap,
      sym__minmapstart,
  [799] = 1,
    ACTIONS(239), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [804] = 2,
    ACTIONS(241), 1,
      anon_sym_DASH_GT,
    ACTIONS(243), 1,
      sym_identifier,
  [811] = 2,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      sym_identifier,
  [818] = 1,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
  [822] = 1,
    ACTIONS(251), 1,
      sym_describe,
  [826] = 1,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
  [830] = 1,
    ACTIONS(255), 1,
      sym_identifier,
  [834] = 1,
    ACTIONS(257), 1,
      sym_identifier,
  [838] = 1,
    ACTIONS(259), 1,
      sym_identifier,
  [842] = 1,
    ACTIONS(261), 1,
      sym_identifier,
  [846] = 1,
    ACTIONS(263), 1,
      anon_sym_EQ,
  [850] = 1,
    ACTIONS(265), 1,
      sym_identifier,
  [854] = 1,
    ACTIONS(267), 1,
      sym_casedescribe,
  [858] = 1,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
  [862] = 1,
    ACTIONS(271), 1,
      sym_identifier,
  [866] = 1,
    ACTIONS(273), 1,
      sym_identifier,
  [870] = 1,
    ACTIONS(275), 1,
      anon_sym_COLON,
  [874] = 1,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
  [878] = 1,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
  [882] = 1,
    ACTIONS(281), 1,
      anon_sym_EQ_EQ,
  [886] = 1,
    ACTIONS(283), 1,
      sym_casedescribe,
  [890] = 1,
    ACTIONS(285), 1,
      sym_describe,
  [894] = 1,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
  [898] = 1,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
  [902] = 1,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
  [906] = 1,
    ACTIONS(293), 1,
      sym_identifier,
  [910] = 1,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
  [914] = 1,
    ACTIONS(297), 1,
      sym_identifier,
  [918] = 1,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
  [922] = 1,
    ACTIONS(301), 1,
      anon_sym_COLON,
  [926] = 1,
    ACTIONS(303), 1,
      anon_sym_ATendjson,
  [930] = 1,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
  [934] = 1,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
  [938] = 1,
    ACTIONS(309), 1,
      sym_identifier,
  [942] = 1,
    ACTIONS(311), 1,
      anon_sym_ATendjson,
  [946] = 1,
    ACTIONS(313), 1,
      sym_identifier,
  [950] = 1,
    ACTIONS(315), 1,
      sym_identifier,
  [954] = 1,
    ACTIONS(317), 1,
      anon_sym_as,
  [958] = 1,
    ACTIONS(319), 1,
      sym__splitline,
  [962] = 1,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
  [966] = 1,
    ACTIONS(323), 1,
      anon_sym_ATendyaml,
  [970] = 1,
    ACTIONS(325), 1,
      sym_identifier,
  [974] = 1,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
  [978] = 1,
    ACTIONS(329), 1,
      sym_casedescribe,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 103,
  [SMALL_STATE(5)] = 140,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 193,
  [SMALL_STATE(8)] = 215,
  [SMALL_STATE(9)] = 237,
  [SMALL_STATE(10)] = 256,
  [SMALL_STATE(11)] = 275,
  [SMALL_STATE(12)] = 293,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 322,
  [SMALL_STATE(15)] = 333,
  [SMALL_STATE(16)] = 344,
  [SMALL_STATE(17)] = 353,
  [SMALL_STATE(18)] = 362,
  [SMALL_STATE(19)] = 373,
  [SMALL_STATE(20)] = 384,
  [SMALL_STATE(21)] = 392,
  [SMALL_STATE(22)] = 400,
  [SMALL_STATE(23)] = 408,
  [SMALL_STATE(24)] = 416,
  [SMALL_STATE(25)] = 424,
  [SMALL_STATE(26)] = 432,
  [SMALL_STATE(27)] = 440,
  [SMALL_STATE(28)] = 448,
  [SMALL_STATE(29)] = 460,
  [SMALL_STATE(30)] = 468,
  [SMALL_STATE(31)] = 484,
  [SMALL_STATE(32)] = 498,
  [SMALL_STATE(33)] = 506,
  [SMALL_STATE(34)] = 514,
  [SMALL_STATE(35)] = 522,
  [SMALL_STATE(36)] = 536,
  [SMALL_STATE(37)] = 543,
  [SMALL_STATE(38)] = 554,
  [SMALL_STATE(39)] = 561,
  [SMALL_STATE(40)] = 568,
  [SMALL_STATE(41)] = 579,
  [SMALL_STATE(42)] = 590,
  [SMALL_STATE(43)] = 597,
  [SMALL_STATE(44)] = 610,
  [SMALL_STATE(45)] = 617,
  [SMALL_STATE(46)] = 628,
  [SMALL_STATE(47)] = 635,
  [SMALL_STATE(48)] = 646,
  [SMALL_STATE(49)] = 652,
  [SMALL_STATE(50)] = 662,
  [SMALL_STATE(51)] = 668,
  [SMALL_STATE(52)] = 674,
  [SMALL_STATE(53)] = 680,
  [SMALL_STATE(54)] = 690,
  [SMALL_STATE(55)] = 700,
  [SMALL_STATE(56)] = 706,
  [SMALL_STATE(57)] = 712,
  [SMALL_STATE(58)] = 722,
  [SMALL_STATE(59)] = 728,
  [SMALL_STATE(60)] = 734,
  [SMALL_STATE(61)] = 744,
  [SMALL_STATE(62)] = 750,
  [SMALL_STATE(63)] = 760,
  [SMALL_STATE(64)] = 770,
  [SMALL_STATE(65)] = 775,
  [SMALL_STATE(66)] = 782,
  [SMALL_STATE(67)] = 789,
  [SMALL_STATE(68)] = 794,
  [SMALL_STATE(69)] = 799,
  [SMALL_STATE(70)] = 804,
  [SMALL_STATE(71)] = 811,
  [SMALL_STATE(72)] = 818,
  [SMALL_STATE(73)] = 822,
  [SMALL_STATE(74)] = 826,
  [SMALL_STATE(75)] = 830,
  [SMALL_STATE(76)] = 834,
  [SMALL_STATE(77)] = 838,
  [SMALL_STATE(78)] = 842,
  [SMALL_STATE(79)] = 846,
  [SMALL_STATE(80)] = 850,
  [SMALL_STATE(81)] = 854,
  [SMALL_STATE(82)] = 858,
  [SMALL_STATE(83)] = 862,
  [SMALL_STATE(84)] = 866,
  [SMALL_STATE(85)] = 870,
  [SMALL_STATE(86)] = 874,
  [SMALL_STATE(87)] = 878,
  [SMALL_STATE(88)] = 882,
  [SMALL_STATE(89)] = 886,
  [SMALL_STATE(90)] = 890,
  [SMALL_STATE(91)] = 894,
  [SMALL_STATE(92)] = 898,
  [SMALL_STATE(93)] = 902,
  [SMALL_STATE(94)] = 906,
  [SMALL_STATE(95)] = 910,
  [SMALL_STATE(96)] = 914,
  [SMALL_STATE(97)] = 918,
  [SMALL_STATE(98)] = 922,
  [SMALL_STATE(99)] = 926,
  [SMALL_STATE(100)] = 930,
  [SMALL_STATE(101)] = 934,
  [SMALL_STATE(102)] = 938,
  [SMALL_STATE(103)] = 942,
  [SMALL_STATE(104)] = 946,
  [SMALL_STATE(105)] = 950,
  [SMALL_STATE(106)] = 954,
  [SMALL_STATE(107)] = 958,
  [SMALL_STATE(108)] = 962,
  [SMALL_STATE(109)] = 966,
  [SMALL_STATE(110)] = 970,
  [SMALL_STATE(111)] = 974,
  [SMALL_STATE(112)] = 978,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat3, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat3, 2), SHIFT_REPEAT(89),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat3, 2), SHIFT_REPEAT(81),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat3, 2), SHIFT_REPEAT(66),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat3, 2), SHIFT_REPEAT(54),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat2, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat2, 2), SHIFT_REPEAT(90),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat2, 2), SHIFT_REPEAT(70),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(65),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(83),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keywordstate, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__actorunit, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actorstate, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unitusercase, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actorunit, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blockstate, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keywordstate, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__actorunit, 3, .production_id = 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_casestate, 1, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actorstate, 1, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keywordstate, 6, .production_id = 7),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blockstate, 3, .production_id = 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keywordstate, 4, .production_id = 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_astate, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actorstate, 4, .production_id = 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actorstate, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blockstate, 5, .production_id = 6),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mindmap_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mindmap_repeat1, 2), SHIFT_REPEAT(94),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(41),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pardec, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interface, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_participantdec, 8),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statemessage, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(43),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(8),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statedec, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_astate, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmapunit, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 5),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plantuml, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yamluml, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [321] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

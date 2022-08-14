#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_ATstartuml = 1,
  anon_sym_ATenduml = 2,
  anon_sym_EQ_EQ = 3,
  anon_sym_DASH_GT = 4,
  anon_sym_COLON = 5,
  sym_statedescribe = 6,
  anon_sym_abstract = 7,
  anon_sym_class = 8,
  anon_sym_interface = 9,
  sym_identifier = 10,
  sym_number = 11,
  anon_sym_ATstartmindmap = 12,
  anon_sym_ATendmindmap = 13,
  sym__minmapstart = 14,
  anon_sym_ATstartjson = 15,
  anon_sym_ATendjson = 16,
  anon_sym_LBRACE = 17,
  anon_sym_COMMA = 18,
  anon_sym_RBRACE = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_string_content_token1 = 23,
  sym_escape_sequence = 24,
  sym_true = 25,
  sym_false = 26,
  sym_null = 27,
  anon_sym_ATstartyaml = 28,
  anon_sym_ATendyaml = 29,
  sym_plantuml = 30,
  sym_baseuml = 31,
  sym_statedec = 32,
  sym_astate = 33,
  sym_statemessage = 34,
  sym_typedef = 35,
  sym__abstract = 36,
  sym__interface = 37,
  sym_mindmap = 38,
  sym_mindmapunit = 39,
  sym_jsonuml = 40,
  sym_json = 41,
  sym__value = 42,
  sym_object = 43,
  sym_pair = 44,
  sym_array = 45,
  sym_string = 46,
  sym_string_content = 47,
  sym_yamluml = 48,
  aux_sym_baseuml_repeat1 = 49,
  aux_sym_baseuml_repeat2 = 50,
  aux_sym_mindmap_repeat1 = 51,
  aux_sym_object_repeat1 = 52,
  aux_sym_array_repeat1 = 53,
  aux_sym_string_content_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COLON] = ":",
  [sym_statedescribe] = "statedescribe",
  [anon_sym_abstract] = "abstract",
  [anon_sym_class] = "class",
  [anon_sym_interface] = "interface",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_ATstartmindmap] = "@startmindmap",
  [anon_sym_ATendmindmap] = "@endmindmap",
  [sym__minmapstart] = "_minmapstart",
  [anon_sym_ATstartjson] = "@startjson",
  [anon_sym_ATendjson] = "@endjson",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [anon_sym_ATstartyaml] = "@startyaml",
  [anon_sym_ATendyaml] = "@endyaml",
  [sym_plantuml] = "plantuml",
  [sym_baseuml] = "baseuml",
  [sym_statedec] = "statedec",
  [sym_astate] = "astate",
  [sym_statemessage] = "statemessage",
  [sym_typedef] = "typedef",
  [sym__abstract] = "_abstract",
  [sym__interface] = "_interface",
  [sym_mindmap] = "mindmap",
  [sym_mindmapunit] = "mindmapunit",
  [sym_jsonuml] = "jsonuml",
  [sym_json] = "json",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [sym_yamluml] = "yamluml",
  [aux_sym_baseuml_repeat1] = "baseuml_repeat1",
  [aux_sym_baseuml_repeat2] = "baseuml_repeat2",
  [aux_sym_mindmap_repeat1] = "mindmap_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATstartuml] = anon_sym_ATstartuml,
  [anon_sym_ATenduml] = anon_sym_ATenduml,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_statedescribe] = sym_statedescribe,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_interface] = anon_sym_interface,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_ATstartmindmap] = anon_sym_ATstartmindmap,
  [anon_sym_ATendmindmap] = anon_sym_ATendmindmap,
  [sym__minmapstart] = sym__minmapstart,
  [anon_sym_ATstartjson] = anon_sym_ATstartjson,
  [anon_sym_ATendjson] = anon_sym_ATendjson,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [anon_sym_ATstartyaml] = anon_sym_ATstartyaml,
  [anon_sym_ATendyaml] = anon_sym_ATendyaml,
  [sym_plantuml] = sym_plantuml,
  [sym_baseuml] = sym_baseuml,
  [sym_statedec] = sym_statedec,
  [sym_astate] = sym_astate,
  [sym_statemessage] = sym_statemessage,
  [sym_typedef] = sym_typedef,
  [sym__abstract] = sym__abstract,
  [sym__interface] = sym__interface,
  [sym_mindmap] = sym_mindmap,
  [sym_mindmapunit] = sym_mindmapunit,
  [sym_jsonuml] = sym_jsonuml,
  [sym_json] = sym_json,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [sym_yamluml] = sym_yamluml,
  [aux_sym_baseuml_repeat1] = aux_sym_baseuml_repeat1,
  [aux_sym_baseuml_repeat2] = aux_sym_baseuml_repeat2,
  [aux_sym_mindmap_repeat1] = aux_sym_mindmap_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_statedescribe] = {
    .visible = true,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
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
  [sym_statedec] = {
    .visible = true,
    .named = true,
  },
  [sym_astate] = {
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
  [aux_sym_mindmap_repeat1] = {
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
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_statedescribe_character_set_1(int32_t c) {
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

static inline bool sym_statedescribe_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(89);
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '*') ADVANCE(142);
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '0') ADVANCE(132);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(148);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == ']') ADVANCE(149);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '0') ADVANCE(132);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(148);
      if (lookahead == ']') ADVANCE(149);
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == '>') ADVANCE(93);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(133);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(92);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 'j') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == 'j') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'j') ADVANCE(71);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(49);
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 80:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 81:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(136);
      END_STATE();
    case 82:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (sym_statedescribe_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(137);
      END_STATE();
    case 84:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '*') ADVANCE(142);
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '0') ADVANCE(132);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(148);
      if (lookahead == ']') ADVANCE(149);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_statedescribe);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (sym_statedescribe_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_statedescribe);
      if (sym_statedescribe_character_set_2(lookahead)) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_class);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__minmapstart);
      if (lookahead == '*') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_true);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_false);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_null);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 82},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATstartuml] = ACTIONS(1),
    [anon_sym_ATenduml] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_ATstartmindmap] = ACTIONS(1),
    [anon_sym_ATendmindmap] = ACTIONS(1),
    [sym__minmapstart] = ACTIONS(1),
    [anon_sym_ATstartjson] = ACTIONS(1),
    [anon_sym_ATendjson] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_ATstartyaml] = ACTIONS(1),
    [anon_sym_ATendyaml] = ACTIONS(1),
  },
  [1] = {
    [sym_plantuml] = STATE(67),
    [sym_baseuml] = STATE(66),
    [sym_mindmap] = STATE(66),
    [sym_jsonuml] = STATE(66),
    [sym_yamluml] = STATE(66),
    [anon_sym_ATstartuml] = ACTIONS(3),
    [anon_sym_ATstartmindmap] = ACTIONS(5),
    [anon_sym_ATstartjson] = ACTIONS(7),
    [anon_sym_ATstartyaml] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      anon_sym_ATendjson,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_json,
    ACTIONS(11), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(52), 4,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
  [28] = 8,
    ACTIONS(21), 1,
      anon_sym_ATenduml,
    ACTIONS(23), 1,
      anon_sym_EQ_EQ,
    ACTIONS(25), 1,
      anon_sym_abstract,
    ACTIONS(27), 1,
      anon_sym_interface,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(7), 2,
      sym_typedef,
      aux_sym_baseuml_repeat1,
    STATE(36), 2,
      sym__abstract,
      sym__interface,
    STATE(10), 3,
      sym_statedec,
      sym_astate,
      aux_sym_baseuml_repeat2,
  [57] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    ACTIONS(31), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(40), 4,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
  [82] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(42), 4,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
  [104] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(43), 4,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
  [126] = 5,
    ACTIONS(39), 1,
      anon_sym_ATenduml,
    ACTIONS(41), 1,
      anon_sym_abstract,
    ACTIONS(43), 1,
      anon_sym_interface,
    STATE(8), 2,
      sym_typedef,
      aux_sym_baseuml_repeat1,
    STATE(36), 2,
      sym__abstract,
      sym__interface,
  [144] = 5,
    ACTIONS(45), 1,
      anon_sym_ATenduml,
    ACTIONS(47), 1,
      anon_sym_abstract,
    ACTIONS(50), 1,
      anon_sym_interface,
    STATE(8), 2,
      sym_typedef,
      aux_sym_baseuml_repeat1,
    STATE(36), 2,
      sym__abstract,
      sym__interface,
  [162] = 4,
    ACTIONS(53), 1,
      anon_sym_ATenduml,
    ACTIONS(55), 1,
      anon_sym_EQ_EQ,
    ACTIONS(58), 1,
      sym_identifier,
    STATE(9), 3,
      sym_statedec,
      sym_astate,
      aux_sym_baseuml_repeat2,
  [177] = 4,
    ACTIONS(23), 1,
      anon_sym_EQ_EQ,
    ACTIONS(39), 1,
      anon_sym_ATenduml,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(9), 3,
      sym_statedec,
      sym_astate,
      aux_sym_baseuml_repeat2,
  [192] = 1,
    ACTIONS(63), 5,
      anon_sym_COLON,
      anon_sym_ATendjson,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [200] = 1,
    ACTIONS(65), 5,
      anon_sym_COLON,
      anon_sym_ATendjson,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [208] = 5,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_number,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_pair,
    STATE(48), 1,
      sym_string,
  [224] = 4,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym_string_content_repeat1,
    STATE(60), 1,
      sym_string_content,
    ACTIONS(73), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [238] = 3,
    ACTIONS(77), 1,
      anon_sym_COLON,
    STATE(28), 1,
      sym_statemessage,
    ACTIONS(75), 3,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      sym_identifier,
  [250] = 3,
    ACTIONS(79), 1,
      anon_sym_ATendmindmap,
    ACTIONS(81), 1,
      sym__minmapstart,
    STATE(16), 2,
      sym_mindmapunit,
      aux_sym_mindmap_repeat1,
  [261] = 1,
    ACTIONS(84), 4,
      anon_sym_ATendjson,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [268] = 3,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(88), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [279] = 3,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(93), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [290] = 3,
    ACTIONS(95), 1,
      anon_sym_ATendmindmap,
    ACTIONS(97), 1,
      sym__minmapstart,
    STATE(22), 2,
      sym_mindmapunit,
      aux_sym_mindmap_repeat1,
  [301] = 1,
    ACTIONS(99), 4,
      anon_sym_ATendjson,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [308] = 3,
    ACTIONS(97), 1,
      sym__minmapstart,
    ACTIONS(101), 1,
      anon_sym_ATendmindmap,
    STATE(16), 2,
      sym_mindmapunit,
      aux_sym_mindmap_repeat1,
  [319] = 1,
    ACTIONS(103), 4,
      anon_sym_ATendjson,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [326] = 1,
    ACTIONS(105), 4,
      anon_sym_ATendjson,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [333] = 1,
    ACTIONS(107), 4,
      anon_sym_ATendjson,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [340] = 4,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_number,
    STATE(45), 1,
      sym_pair,
    STATE(48), 1,
      sym_string,
  [353] = 1,
    ACTIONS(109), 4,
      anon_sym_ATendjson,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [360] = 1,
    ACTIONS(111), 3,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      sym_identifier,
  [366] = 1,
    ACTIONS(113), 3,
      anon_sym_ATenduml,
      anon_sym_abstract,
      anon_sym_interface,
  [372] = 1,
    ACTIONS(115), 3,
      anon_sym_ATenduml,
      anon_sym_abstract,
      anon_sym_interface,
  [378] = 1,
    ACTIONS(117), 3,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      sym_identifier,
  [384] = 3,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_object_repeat1,
  [394] = 1,
    ACTIONS(123), 3,
      anon_sym_ATenduml,
      anon_sym_abstract,
      anon_sym_interface,
  [400] = 1,
    ACTIONS(125), 3,
      anon_sym_ATenduml,
      anon_sym_EQ_EQ,
      sym_identifier,
  [406] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_array_repeat1,
  [416] = 1,
    ACTIONS(131), 3,
      anon_sym_ATenduml,
      anon_sym_abstract,
      anon_sym_interface,
  [422] = 3,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_object_repeat1,
  [432] = 3,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_object_repeat1,
  [442] = 3,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_array_repeat1,
  [452] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      aux_sym_array_repeat1,
  [462] = 1,
    ACTIONS(147), 2,
      anon_sym_ATendmindmap,
      sym__minmapstart,
  [467] = 1,
    ACTIONS(149), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [472] = 1,
    ACTIONS(143), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [477] = 2,
    ACTIONS(151), 1,
      anon_sym_class,
    ACTIONS(153), 1,
      sym_identifier,
  [484] = 1,
    ACTIONS(136), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [489] = 1,
    ACTIONS(155), 1,
      sym_identifier,
  [493] = 1,
    ACTIONS(157), 1,
      anon_sym_DASH_GT,
  [497] = 1,
    ACTIONS(159), 1,
      anon_sym_COLON,
  [501] = 1,
    ACTIONS(161), 1,
      sym_identifier,
  [505] = 1,
    ACTIONS(163), 1,
      anon_sym_EQ_EQ,
  [509] = 1,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
  [513] = 1,
    ACTIONS(167), 1,
      anon_sym_ATendjson,
  [517] = 1,
    ACTIONS(169), 1,
      anon_sym_ATendjson,
  [521] = 1,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
  [525] = 1,
    ACTIONS(173), 1,
      sym_identifier,
  [529] = 1,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
  [533] = 1,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
  [537] = 1,
    ACTIONS(179), 1,
      sym_identifier,
  [541] = 1,
    ACTIONS(181), 1,
      sym_identifier,
  [545] = 1,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
  [549] = 1,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
  [553] = 1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
  [557] = 1,
    ACTIONS(189), 1,
      sym_statedescribe,
  [561] = 1,
    ACTIONS(191), 1,
      anon_sym_ATendyaml,
  [565] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
  [569] = 1,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [573] = 1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 126,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 162,
  [SMALL_STATE(10)] = 177,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 200,
  [SMALL_STATE(13)] = 208,
  [SMALL_STATE(14)] = 224,
  [SMALL_STATE(15)] = 238,
  [SMALL_STATE(16)] = 250,
  [SMALL_STATE(17)] = 261,
  [SMALL_STATE(18)] = 268,
  [SMALL_STATE(19)] = 279,
  [SMALL_STATE(20)] = 290,
  [SMALL_STATE(21)] = 301,
  [SMALL_STATE(22)] = 308,
  [SMALL_STATE(23)] = 319,
  [SMALL_STATE(24)] = 326,
  [SMALL_STATE(25)] = 333,
  [SMALL_STATE(26)] = 340,
  [SMALL_STATE(27)] = 353,
  [SMALL_STATE(28)] = 360,
  [SMALL_STATE(29)] = 366,
  [SMALL_STATE(30)] = 372,
  [SMALL_STATE(31)] = 378,
  [SMALL_STATE(32)] = 384,
  [SMALL_STATE(33)] = 394,
  [SMALL_STATE(34)] = 400,
  [SMALL_STATE(35)] = 406,
  [SMALL_STATE(36)] = 416,
  [SMALL_STATE(37)] = 422,
  [SMALL_STATE(38)] = 432,
  [SMALL_STATE(39)] = 442,
  [SMALL_STATE(40)] = 452,
  [SMALL_STATE(41)] = 462,
  [SMALL_STATE(42)] = 467,
  [SMALL_STATE(43)] = 472,
  [SMALL_STATE(44)] = 477,
  [SMALL_STATE(45)] = 484,
  [SMALL_STATE(46)] = 489,
  [SMALL_STATE(47)] = 493,
  [SMALL_STATE(48)] = 497,
  [SMALL_STATE(49)] = 501,
  [SMALL_STATE(50)] = 505,
  [SMALL_STATE(51)] = 509,
  [SMALL_STATE(52)] = 513,
  [SMALL_STATE(53)] = 517,
  [SMALL_STATE(54)] = 521,
  [SMALL_STATE(55)] = 525,
  [SMALL_STATE(56)] = 529,
  [SMALL_STATE(57)] = 533,
  [SMALL_STATE(58)] = 537,
  [SMALL_STATE(59)] = 541,
  [SMALL_STATE(60)] = 545,
  [SMALL_STATE(61)] = 549,
  [SMALL_STATE(62)] = 553,
  [SMALL_STATE(63)] = 557,
  [SMALL_STATE(64)] = 561,
  [SMALL_STATE(65)] = 565,
  [SMALL_STATE(66)] = 569,
  [SMALL_STATE(67)] = 573,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(44),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(59),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat2, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat2, 2), SHIFT_REPEAT(63),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat2, 2), SHIFT_REPEAT(47),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_astate, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mindmap_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mindmap_repeat1, 2), SHIFT_REPEAT(55),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(18),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_astate, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interface, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statedec, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statemessage, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 1),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(26),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(6),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmapunit, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yamluml, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plantuml, 1),
  [197] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

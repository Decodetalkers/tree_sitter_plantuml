#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ATstartuml = 1,
  anon_sym_ATenduml = 2,
  anon_sym_abstract = 3,
  anon_sym_class = 4,
  anon_sym_interface = 5,
  sym_identifier = 6,
  sym_number = 7,
  sym_plantuml = 8,
  sym_typedef = 9,
  sym__abstract = 10,
  sym__interface = 11,
  aux_sym_plantuml_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [anon_sym_abstract] = "abstract",
  [anon_sym_class] = "class",
  [anon_sym_interface] = "interface",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_plantuml] = "plantuml",
  [sym_typedef] = "typedef",
  [sym__abstract] = "_abstract",
  [sym__interface] = "_interface",
  [aux_sym_plantuml_repeat1] = "plantuml_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATstartuml] = anon_sym_ATstartuml,
  [anon_sym_ATenduml] = anon_sym_ATenduml,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_interface] = anon_sym_interface,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_plantuml] = sym_plantuml,
  [sym_typedef] = sym_typedef,
  [sym__abstract] = sym__abstract,
  [sym__interface] = sym__interface,
  [aux_sym_plantuml_repeat1] = aux_sym_plantuml_repeat1,
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
  [sym_plantuml] = {
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
  [aux_sym_plantuml_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(4);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_class);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATstartuml] = ACTIONS(1),
    [anon_sym_ATenduml] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_plantuml] = STATE(10),
    [anon_sym_ATstartuml] = ACTIONS(3),
  },
  [2] = {
    [sym_typedef] = STATE(3),
    [sym__abstract] = STATE(5),
    [sym__interface] = STATE(5),
    [aux_sym_plantuml_repeat1] = STATE(3),
    [anon_sym_ATenduml] = ACTIONS(5),
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_interface] = ACTIONS(9),
  },
  [3] = {
    [sym_typedef] = STATE(4),
    [sym__abstract] = STATE(5),
    [sym__interface] = STATE(5),
    [aux_sym_plantuml_repeat1] = STATE(4),
    [anon_sym_ATenduml] = ACTIONS(11),
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_interface] = ACTIONS(9),
  },
  [4] = {
    [sym_typedef] = STATE(4),
    [sym__abstract] = STATE(5),
    [sym__interface] = STATE(5),
    [aux_sym_plantuml_repeat1] = STATE(4),
    [anon_sym_ATenduml] = ACTIONS(13),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(18),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(21), 3,
      anon_sym_ATenduml,
      anon_sym_abstract,
      anon_sym_interface,
  [6] = 1,
    ACTIONS(23), 3,
      anon_sym_ATenduml,
      anon_sym_abstract,
      anon_sym_interface,
  [12] = 1,
    ACTIONS(25), 3,
      anon_sym_ATenduml,
      anon_sym_abstract,
      anon_sym_interface,
  [18] = 1,
    ACTIONS(27), 3,
      anon_sym_ATenduml,
      anon_sym_abstract,
      anon_sym_interface,
  [24] = 2,
    ACTIONS(29), 1,
      anon_sym_class,
    ACTIONS(31), 1,
      sym_identifier,
  [31] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [35] = 1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
  [39] = 1,
    ACTIONS(37), 1,
      sym_identifier,
  [43] = 1,
    ACTIONS(39), 1,
      sym_identifier,
  [47] = 1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 6,
  [SMALL_STATE(7)] = 12,
  [SMALL_STATE(8)] = 18,
  [SMALL_STATE(9)] = 24,
  [SMALL_STATE(10)] = 31,
  [SMALL_STATE(11)] = 35,
  [SMALL_STATE(12)] = 39,
  [SMALL_STATE(13)] = 43,
  [SMALL_STATE(14)] = 47,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plantuml_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plantuml_repeat1, 2), SHIFT_REPEAT(9),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plantuml_repeat1, 2), SHIFT_REPEAT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interface, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plantuml, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plantuml, 3),
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

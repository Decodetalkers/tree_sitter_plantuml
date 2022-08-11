#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_abstract = 1,
  anon_sym_class = 2,
  anon_sym_interface = 3,
  anon_sym_ATstartuml = 4,
  anon_sym_ATenduml = 5,
  anon_sym_ATstartmindmap = 6,
  anon_sym_ATendmindmap = 7,
  anon_sym_ATstartyaml = 8,
  anon_sym_ATendyaml = 9,
  anon_sym_ATstartjson = 10,
  anon_sym_ATendjson = 11,
  sym_identifier = 12,
  sym_number = 13,
  sym_plantuml = 14,
  sym_typedef = 15,
  sym__abstract = 16,
  sym__interface = 17,
  sym_baseuml = 18,
  sym_mindmap = 19,
  sym_yamluml = 20,
  sym_jsonuml = 21,
  aux_sym_baseuml_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_abstract] = "abstract",
  [anon_sym_class] = "class",
  [anon_sym_interface] = "interface",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [anon_sym_ATstartmindmap] = "@startmindmap",
  [anon_sym_ATendmindmap] = "@endmindmap",
  [anon_sym_ATstartyaml] = "@startyaml",
  [anon_sym_ATendyaml] = "@endyaml",
  [anon_sym_ATstartjson] = "@startjson",
  [anon_sym_ATendjson] = "@endjson",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_plantuml] = "plantuml",
  [sym_typedef] = "typedef",
  [sym__abstract] = "_abstract",
  [sym__interface] = "_interface",
  [sym_baseuml] = "baseuml",
  [sym_mindmap] = "mindmap",
  [sym_yamluml] = "yamluml",
  [sym_jsonuml] = "jsonuml",
  [aux_sym_baseuml_repeat1] = "baseuml_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_ATstartuml] = anon_sym_ATstartuml,
  [anon_sym_ATenduml] = anon_sym_ATenduml,
  [anon_sym_ATstartmindmap] = anon_sym_ATstartmindmap,
  [anon_sym_ATendmindmap] = anon_sym_ATendmindmap,
  [anon_sym_ATstartyaml] = anon_sym_ATstartyaml,
  [anon_sym_ATendyaml] = anon_sym_ATendyaml,
  [anon_sym_ATstartjson] = anon_sym_ATstartjson,
  [anon_sym_ATendjson] = anon_sym_ATendjson,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_plantuml] = sym_plantuml,
  [sym_typedef] = sym_typedef,
  [sym__abstract] = sym__abstract,
  [sym__interface] = sym__interface,
  [sym_baseuml] = sym_baseuml,
  [sym_mindmap] = sym_mindmap,
  [sym_yamluml] = sym_yamluml,
  [sym_jsonuml] = sym_jsonuml,
  [aux_sym_baseuml_repeat1] = aux_sym_baseuml_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
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
  [anon_sym_ATstartuml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATenduml] = {
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
  [anon_sym_ATstartyaml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendyaml] = {
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
  [sym_baseuml] = {
    .visible = true,
    .named = true,
  },
  [sym_mindmap] = {
    .visible = true,
    .named = true,
  },
  [sym_yamluml] = {
    .visible = true,
    .named = true,
  },
  [sym_jsonuml] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_baseuml_repeat1] = {
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
      if (eof) ADVANCE(59);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(5);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'j') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == 'j') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(3);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(6);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_class);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
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
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 58},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 58},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_ATstartuml] = ACTIONS(1),
    [anon_sym_ATenduml] = ACTIONS(1),
    [anon_sym_ATstartmindmap] = ACTIONS(1),
    [anon_sym_ATendmindmap] = ACTIONS(1),
    [anon_sym_ATstartyaml] = ACTIONS(1),
    [anon_sym_ATendyaml] = ACTIONS(1),
    [anon_sym_ATstartjson] = ACTIONS(1),
    [anon_sym_ATendjson] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_plantuml] = STATE(18),
    [sym_baseuml] = STATE(17),
    [sym_mindmap] = STATE(17),
    [sym_yamluml] = STATE(17),
    [sym_jsonuml] = STATE(17),
    [anon_sym_ATstartuml] = ACTIONS(3),
    [anon_sym_ATstartmindmap] = ACTIONS(5),
    [anon_sym_ATstartyaml] = ACTIONS(7),
    [anon_sym_ATstartjson] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      anon_sym_abstract,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(15), 1,
      anon_sym_ATenduml,
    STATE(4), 2,
      sym_typedef,
      aux_sym_baseuml_repeat1,
    STATE(8), 2,
      sym__abstract,
      sym__interface,
  [18] = 5,
    ACTIONS(17), 1,
      anon_sym_abstract,
    ACTIONS(20), 1,
      anon_sym_interface,
    ACTIONS(23), 1,
      anon_sym_ATenduml,
    STATE(3), 2,
      sym_typedef,
      aux_sym_baseuml_repeat1,
    STATE(8), 2,
      sym__abstract,
      sym__interface,
  [36] = 5,
    ACTIONS(11), 1,
      anon_sym_abstract,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(25), 1,
      anon_sym_ATenduml,
    STATE(3), 2,
      sym_typedef,
      aux_sym_baseuml_repeat1,
    STATE(8), 2,
      sym__abstract,
      sym__interface,
  [54] = 1,
    ACTIONS(27), 3,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_ATenduml,
  [60] = 1,
    ACTIONS(29), 3,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_ATenduml,
  [66] = 1,
    ACTIONS(31), 3,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_ATenduml,
  [72] = 1,
    ACTIONS(33), 3,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_ATenduml,
  [78] = 2,
    ACTIONS(35), 1,
      anon_sym_class,
    ACTIONS(37), 1,
      sym_identifier,
  [85] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [89] = 1,
    ACTIONS(41), 1,
      sym_identifier,
  [93] = 1,
    ACTIONS(43), 1,
      anon_sym_ATendmindmap,
  [97] = 1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
  [101] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
  [105] = 1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
  [109] = 1,
    ACTIONS(51), 1,
      sym_identifier,
  [113] = 1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
  [117] = 1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
  [121] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [125] = 1,
    ACTIONS(59), 1,
      anon_sym_ATendjson,
  [129] = 1,
    ACTIONS(61), 1,
      anon_sym_ATendyaml,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 72,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 85,
  [SMALL_STATE(11)] = 89,
  [SMALL_STATE(12)] = 93,
  [SMALL_STATE(13)] = 97,
  [SMALL_STATE(14)] = 101,
  [SMALL_STATE(15)] = 105,
  [SMALL_STATE(16)] = 109,
  [SMALL_STATE(17)] = 113,
  [SMALL_STATE(18)] = 117,
  [SMALL_STATE(19)] = 121,
  [SMALL_STATE(20)] = 125,
  [SMALL_STATE(21)] = 129,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(9),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interface, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yamluml, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plantuml, 1),
  [55] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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

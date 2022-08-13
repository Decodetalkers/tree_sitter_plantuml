#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  anon_sym_EQ_EQ = 14,
  anon_sym_DASH_GT = 15,
  anon_sym_COLON = 16,
  sym_plantuml = 17,
  sym_typedef = 18,
  sym__abstract = 19,
  sym__interface = 20,
  sym_baseuml = 21,
  sym_mindmap = 22,
  sym_yamluml = 23,
  sym_jsonuml = 24,
  sym_statedec = 25,
  sym_astate = 26,
  sym_statemessage = 27,
  aux_sym_baseuml_repeat1 = 28,
  aux_sym_baseuml_repeat2 = 29,
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
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COLON] = ":",
  [sym_plantuml] = "plantuml",
  [sym_typedef] = "typedef",
  [sym__abstract] = "_abstract",
  [sym__interface] = "_interface",
  [sym_baseuml] = "baseuml",
  [sym_mindmap] = "mindmap",
  [sym_yamluml] = "yamluml",
  [sym_jsonuml] = "jsonuml",
  [sym_statedec] = "statedec",
  [sym_astate] = "astate",
  [sym_statemessage] = "statemessage",
  [aux_sym_baseuml_repeat1] = "baseuml_repeat1",
  [aux_sym_baseuml_repeat2] = "baseuml_repeat2",
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
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_plantuml] = sym_plantuml,
  [sym_typedef] = sym_typedef,
  [sym__abstract] = sym__abstract,
  [sym__interface] = sym__interface,
  [sym_baseuml] = sym_baseuml,
  [sym_mindmap] = sym_mindmap,
  [sym_yamluml] = sym_yamluml,
  [sym_jsonuml] = sym_jsonuml,
  [sym_statedec] = sym_statedec,
  [sym_astate] = sym_astate,
  [sym_statemessage] = sym_statemessage,
  [aux_sym_baseuml_repeat1] = aux_sym_baseuml_repeat1,
  [aux_sym_baseuml_repeat2] = aux_sym_baseuml_repeat2,
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
  [aux_sym_baseuml_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_baseuml_repeat2] = {
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
      if (eof) ADVANCE(63);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 5:
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'j') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 'j') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_class);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_ATstartmindmap);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_ATendmindmap);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_ATstartyaml);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ATendyaml);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ATstartjson);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_ATendjson);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
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
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_plantuml] = STATE(29),
    [sym_baseuml] = STATE(28),
    [sym_mindmap] = STATE(28),
    [sym_yamluml] = STATE(28),
    [sym_jsonuml] = STATE(28),
    [anon_sym_ATstartuml] = ACTIONS(3),
    [anon_sym_ATstartmindmap] = ACTIONS(5),
    [anon_sym_ATstartyaml] = ACTIONS(7),
    [anon_sym_ATstartjson] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      anon_sym_abstract,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(15), 1,
      anon_sym_ATenduml,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_EQ_EQ,
    STATE(4), 2,
      sym_typedef,
      aux_sym_baseuml_repeat1,
    STATE(14), 2,
      sym__abstract,
      sym__interface,
    STATE(6), 3,
      sym_statedec,
      sym_astate,
      aux_sym_baseuml_repeat2,
  [29] = 5,
    ACTIONS(21), 1,
      anon_sym_abstract,
    ACTIONS(24), 1,
      anon_sym_interface,
    ACTIONS(27), 1,
      anon_sym_ATenduml,
    STATE(3), 2,
      sym_typedef,
      aux_sym_baseuml_repeat1,
    STATE(14), 2,
      sym__abstract,
      sym__interface,
  [47] = 5,
    ACTIONS(29), 1,
      anon_sym_abstract,
    ACTIONS(31), 1,
      anon_sym_interface,
    ACTIONS(33), 1,
      anon_sym_ATenduml,
    STATE(3), 2,
      sym_typedef,
      aux_sym_baseuml_repeat1,
    STATE(14), 2,
      sym__abstract,
      sym__interface,
  [65] = 4,
    ACTIONS(35), 1,
      anon_sym_ATenduml,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(40), 1,
      anon_sym_EQ_EQ,
    STATE(5), 3,
      sym_statedec,
      sym_astate,
      aux_sym_baseuml_repeat2,
  [80] = 4,
    ACTIONS(19), 1,
      anon_sym_EQ_EQ,
    ACTIONS(33), 1,
      anon_sym_ATenduml,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(5), 3,
      sym_statedec,
      sym_astate,
      aux_sym_baseuml_repeat2,
  [95] = 3,
    ACTIONS(47), 1,
      anon_sym_COLON,
    STATE(9), 1,
      sym_statemessage,
    ACTIONS(45), 3,
      anon_sym_ATenduml,
      sym_identifier,
      anon_sym_EQ_EQ,
  [107] = 1,
    ACTIONS(49), 3,
      anon_sym_ATenduml,
      sym_identifier,
      anon_sym_EQ_EQ,
  [113] = 1,
    ACTIONS(51), 3,
      anon_sym_ATenduml,
      sym_identifier,
      anon_sym_EQ_EQ,
  [119] = 1,
    ACTIONS(53), 3,
      anon_sym_ATenduml,
      sym_identifier,
      anon_sym_EQ_EQ,
  [125] = 1,
    ACTIONS(55), 3,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_ATenduml,
  [131] = 1,
    ACTIONS(57), 3,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_ATenduml,
  [137] = 1,
    ACTIONS(59), 3,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_ATenduml,
  [143] = 1,
    ACTIONS(61), 3,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_ATenduml,
  [149] = 2,
    ACTIONS(63), 1,
      anon_sym_class,
    ACTIONS(65), 1,
      sym_identifier,
  [156] = 1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
  [160] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [164] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [168] = 1,
    ACTIONS(73), 1,
      sym_identifier,
  [172] = 1,
    ACTIONS(75), 1,
      anon_sym_ATendmindmap,
  [176] = 1,
    ACTIONS(77), 1,
      sym_identifier,
  [180] = 1,
    ACTIONS(79), 1,
      sym_identifier,
  [184] = 1,
    ACTIONS(81), 1,
      anon_sym_EQ_EQ,
  [188] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [192] = 1,
    ACTIONS(85), 1,
      anon_sym_DASH_GT,
  [196] = 1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
  [200] = 1,
    ACTIONS(89), 1,
      sym_identifier,
  [204] = 1,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
  [208] = 1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
  [212] = 1,
    ACTIONS(95), 1,
      sym_identifier,
  [216] = 1,
    ACTIONS(97), 1,
      anon_sym_ATendjson,
  [220] = 1,
    ACTIONS(99), 1,
      anon_sym_ATendyaml,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 107,
  [SMALL_STATE(9)] = 113,
  [SMALL_STATE(10)] = 119,
  [SMALL_STATE(11)] = 125,
  [SMALL_STATE(12)] = 131,
  [SMALL_STATE(13)] = 137,
  [SMALL_STATE(14)] = 143,
  [SMALL_STATE(15)] = 149,
  [SMALL_STATE(16)] = 156,
  [SMALL_STATE(17)] = 160,
  [SMALL_STATE(18)] = 164,
  [SMALL_STATE(19)] = 168,
  [SMALL_STATE(20)] = 172,
  [SMALL_STATE(21)] = 176,
  [SMALL_STATE(22)] = 180,
  [SMALL_STATE(23)] = 184,
  [SMALL_STATE(24)] = 188,
  [SMALL_STATE(25)] = 192,
  [SMALL_STATE(26)] = 196,
  [SMALL_STATE(27)] = 200,
  [SMALL_STATE(28)] = 204,
  [SMALL_STATE(29)] = 208,
  [SMALL_STATE(30)] = 212,
  [SMALL_STATE(31)] = 216,
  [SMALL_STATE(32)] = 220,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(15),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2), SHIFT_REPEAT(27),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat2, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat2, 2), SHIFT_REPEAT(25),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_baseuml_repeat2, 2), SHIFT_REPEAT(21),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_astate, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statemessage, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_astate, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statedec, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interface, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mindmap, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yamluml, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonuml, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseuml, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plantuml, 1),
  [93] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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

#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  sym_name = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COLON = 6,
  sym_key = 7,
  sym_value = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_source_file = 11,
  sym_item = 12,
  sym_node = 13,
  aux_sym__attributes = 14,
  sym_attribute = 15,
  sym__attribute1 = 16,
  sym__attribute2 = 17,
  sym__block = 18,
  aux_sym_source_file_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_name] = "name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [sym_key] = "key",
  [sym_value] = "value",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym_item] = "item",
  [sym_node] = "node",
  [aux_sym__attributes] = "_attributes",
  [sym_attribute] = "attribute",
  [sym__attribute1] = "_attribute1",
  [sym__attribute2] = "_attribute2",
  [sym__block] = "_block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_name] = sym_name,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym_item] = sym_item,
  [sym_node] = sym_node,
  [aux_sym__attributes] = aux_sym__attributes,
  [sym_attribute] = sym_attribute,
  [sym__attribute1] = sym__attribute1,
  [sym__attribute2] = sym__attribute2,
  [sym__block] = sym__block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__attributes] = {
    .visible = false,
    .named = false,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute1] = {
    .visible = false,
    .named = true,
  },
  [sym__attribute2] = {
    .visible = false,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == ']') ADVANCE(3);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_name);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
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
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym_item] = STATE(9),
    [sym_node] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym__block,
    STATE(3), 2,
      aux_sym__attributes,
      sym_attribute,
    STATE(11), 2,
      sym__attribute1,
      sym__attribute2,
    ACTIONS(7), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [23] = 6,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym__block,
    STATE(4), 2,
      aux_sym__attributes,
      sym_attribute,
    STATE(11), 2,
      sym__attribute1,
      sym__attribute2,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [46] = 4,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(4), 2,
      aux_sym__attributes,
      sym_attribute,
    STATE(11), 2,
      sym__attribute1,
      sym__attribute2,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [64] = 4,
    ACTIONS(22), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_node,
    ACTIONS(20), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(5), 2,
      sym_item,
      aux_sym_source_file_repeat1,
  [79] = 1,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [87] = 1,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [95] = 1,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [103] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_node,
    STATE(5), 2,
      sym_item,
      aux_sym_source_file_repeat1,
  [117] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_node,
    STATE(12), 2,
      sym_item,
      aux_sym_source_file_repeat1,
  [131] = 1,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [139] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_node,
    STATE(5), 2,
      sym_item,
      aux_sym_source_file_repeat1,
  [153] = 1,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [159] = 1,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [165] = 1,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [171] = 1,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [177] = 2,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 1,
      anon_sym_COLON,
  [184] = 1,
    ACTIONS(49), 1,
      sym_name,
  [188] = 1,
    ACTIONS(51), 1,
      sym_key,
  [192] = 1,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
  [196] = 1,
    ACTIONS(55), 1,
      sym_value,
  [200] = 1,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
  [204] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 79,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 95,
  [SMALL_STATE(9)] = 103,
  [SMALL_STATE(10)] = 117,
  [SMALL_STATE(11)] = 131,
  [SMALL_STATE(12)] = 139,
  [SMALL_STATE(13)] = 153,
  [SMALL_STATE(14)] = 159,
  [SMALL_STATE(15)] = 165,
  [SMALL_STATE(16)] = 171,
  [SMALL_STATE(17)] = 177,
  [SMALL_STATE(18)] = 184,
  [SMALL_STATE(19)] = 188,
  [SMALL_STATE(20)] = 192,
  [SMALL_STATE(21)] = 196,
  [SMALL_STATE(22)] = 200,
  [SMALL_STATE(23)] = 204,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributes, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attributes, 2), SHIFT_REPEAT(19),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute2, 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute1, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [59] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_NAFT(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

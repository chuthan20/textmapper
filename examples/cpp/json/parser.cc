// generated by Textmapper; DO NOT EDIT

#include "parser.h"

#include <cstdint>
#include <string>
#include <unordered_set>

#include "absl/strings/str_format.h"
#include "lexer.h"

namespace json {
std::unordered_set<int8_t> barStates = {
    1,
    3,
    21,
    28,
};

[[maybe_unused]] constexpr int8_t fooState = 26;

constexpr inline absl::string_view tmNonterminals[] = {
    "JSONText",
    "JSONValue",
    "JSONValue_A",
    "EmptyObject",
    "lookahead_EmptyObject",
    "JSONObject",
    "lookahead_notEmptyObject",
    "JSONMember",
    "JSONMemberList",
    "JSONArray",
    "JSONElementList",
    "JSONElementListopt",
};
constexpr size_t tmNonterminalsLen =
    sizeof(tmNonterminals) / sizeof(tmNonterminals[0]);

std::string symbolName(int32_t sym) {
  if (sym == noToken) {
    return "<no-token>";
  }
  if (sym >= 0 && sym < static_cast<int32_t>(Token::NumTokens)) {
    return std::string(tokenStr[sym]);
  }
  if (sym >= static_cast<int32_t>(Token::NumTokens) &&
      sym - static_cast<int32_t>(Token::NumTokens) < tmNonterminalsLen) {
    return std::string(
        tmNonterminals[sym - static_cast<int32_t>(Token::NumTokens)]);
  }
  return absl::StrFormat("nonterminal(%d)", sym);
}

constexpr int32_t tmAction[] = {
    20, -3, -1,  -21, 17, 18, 10,  11, 12, 13, 0,  15, 14, -1,  16,
    -1, 28, -41, -1,  -1, 19, -47, 27, 22, -1, 25, -1, 29, -65, 21,
    -1, 8,  9,   1,   2,  3,  4,   24, 6,  5,  7,  26, -2, -1,  -2,
};

constexpr int32_t tmLalr[] = {
    4,  -1, 10, -1, 11, -1, 13, -1, 14, -1, 15, -1, 16, -1, 2,  32,
    -1, -2, 4,  -1, 10, -1, 11, -1, 13, -1, 14, -1, 15, -1, 16, -1,
    2,  32, 5,  31, -1, -2, 7,  -1, 5,  30, -1, -2, 4,  -1, 10, -1,
    11, -1, 13, -1, 14, -1, 15, -1, 16, -1, 2,  32, -1, -2, 4,  -1,
    10, -1, 11, -1, 13, -1, 14, -1, 15, -1, 17, -1, 2,  32, -1, -2,
};

constexpr int32_t tmGoto[] = {
    0,  2,  2,  6,  12, 20, 22, 24,  28,  28,  28,  40,  48,  48,  56,  64,
    72, 78, 80, 80, 82, 84, 90, 100, 110, 118, 126, 130, 132, 140, 142, 144,
};

constexpr int8_t tmFromTo[] = {
    43, 44, 2,  15, 13, 19, 15, 20, 19, 23, 26, 29, 1,  3,  3,  3,  21, 3,
    28, 3,  18, 22, 24, 28, 17, 21, 26, 30, 1,  4,  3,  4,  19, 24, 21, 4,
    28, 31, 30, 24, 1,  5,  3,  5,  21, 5,  28, 32, 1,  6,  3,  6,  21, 6,
    28, 33, 1,  7,  3,  7,  21, 7,  28, 34, 1,  8,  3,  8,  21, 8,  28, 35,
    1,  9,  3,  9,  21, 9,  28, 36, 1,  43, 28, 37, 1,  10, 3,  16, 21, 27,
    0,  42, 1,  11, 3,  11, 21, 11, 28, 38, 0,  2,  1,  2,  3,  2,  21, 2,
    28, 2,  1,  12, 3,  12, 21, 12, 28, 39, 1,  13, 3,  13, 21, 13, 28, 13,
    19, 25, 30, 41, 19, 26, 1,  14, 3,  14, 21, 14, 28, 40, 3,  17, 3,  18,
};

constexpr int8_t tmRuleLen[] = {
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 3, 0, 4, 3, 0, 3, 1, 3, 3, 1, 3, 1, 0, 0,
};

constexpr int32_t tmRuleSymbol[] = {
    19, 20, 20, 20, 20, 20, 20, 20, 20, 20, 21, 21, 21, 21, 21, 21, 21,
    21, 21, 22, 23, 24, 24, 25, 26, 27, 27, 28, 29, 29, 30, 30, 25,
};

constexpr NodeType tmRuleType[] = {
    NodeType::JSONText,     // JSONText : JSONValue_A
    NodeType::JSONValue,    // JSONValue : kw_null
    NodeType::JSONValue,    // JSONValue : 'true'
    NodeType::JSONValue,    // JSONValue : 'false'
    NodeType::JSONValue,    // JSONValue : 'B'
    NodeType::JSONValue,    // JSONValue : JSONObject
    NodeType::JSONValue,    // JSONValue : EmptyObject
    NodeType::JSONValue,    // JSONValue : JSONArray
    NodeType::JSONValue,    // JSONValue : JSONString
    NodeType::JSONValue,    // JSONValue : JSONNumber
    NodeType::JSONValue,    // JSONValue_A : kw_null
    NodeType::JSONValue,    // JSONValue_A : 'true'
    NodeType::JSONValue,    // JSONValue_A : 'false'
    NodeType::JSONValue,    // JSONValue_A : 'A'
    NodeType::JSONValue,    // JSONValue_A : JSONObject
    NodeType::JSONValue,    // JSONValue_A : EmptyObject
    NodeType::JSONValue,    // JSONValue_A : JSONArray
    NodeType::JSONValue,    // JSONValue_A : JSONString
    NodeType::JSONValue,    // JSONValue_A : JSONNumber
    NodeType::EmptyObject,  // EmptyObject : lookahead_EmptyObject '{' '}'
    NodeType::NoType,       // lookahead_EmptyObject :
    NodeType::JSONObject,   // JSONObject : lookahead_notEmptyObject '{'
                            // JSONMemberList '}'
    NodeType::JSONObject,   // JSONObject : lookahead_notEmptyObject '{' '}'
    NodeType::NoType,       // lookahead_notEmptyObject :
    NodeType::JSONMember,   // JSONMember : JSONString ':' JSONValue
    NodeType::NoType,       // JSONMemberList : JSONMember
    NodeType::NoType,     // JSONMemberList : JSONMemberList .foo ',' JSONMember
    NodeType::JSONArray,  // JSONArray : .bar '[' JSONElementListopt ']'
    NodeType::NoType,     // JSONElementList : JSONValue_A
    NodeType::NoType,     // JSONElementList : JSONElementList ',' JSONValue_A
    NodeType::NoType,     // JSONElementListopt : JSONElementList
    NodeType::NoType,     // JSONElementListopt :
};

// set(first JSONValue_A) = LBRACE, LBRACK, JSONSTRING, JSONNUMBER, KW_NULL,
// TRUE, FALSE, CHAR_A
[[maybe_unused]] constexpr int32_t Literals[] = {
    2, 4, 10, 11, 13, 14, 15, 16,
};

// set(follow error) =
[[maybe_unused]] constexpr int32_t afterErr[] = {};

int32_t lalr(int32_t action, int32_t next) {
  int32_t a = -action - 3;
  for (; tmLalr[a] >= 0; a += 2) {
    if (tmLalr[a] == next) {
      break;
    }
  }
  return tmLalr[a + 1];
}

int8_t gotoState(int8_t state, int32_t symbol) {
  int32_t min = tmGoto[symbol];
  int32_t max = tmGoto[symbol + 1];

  if (max - min < 32) {
    for (auto i = min; i < max; i += 2) {
      if (tmFromTo[i] == state) {
        return tmFromTo[i + 1];
      }
    }
  } else {
    while (min < max) {
      int32_t e = ((min + max) / 2) & ~static_cast<int32_t>(1);
      int8_t i = tmFromTo[e];
      if (i == state) {
        return tmFromTo[e + 1];
      } else if (i < state) {
        min = e + 2;
      } else {
        max = e;
      }
    }
  }
  return -1;
}

ABSL_MUST_USE_RESULT int32_t lookaheadNext(Lexer& lexer) {
  Token tok;
restart:
  tok = lexer.Next();
  switch (tok) {
    case Token::MULTILINECOMMENT:
    case Token::INVALID_TOKEN:
      goto restart;
    default:
      break;
  }
  return static_cast<int32_t>(tok);
}

ABSL_MUST_USE_RESULT bool lookahead(Lexer& lexer_to_copy, int32_t next,
                                    int8_t start, int8_t end) {
  Lexer lexer = lexer_to_copy;

  std::vector<stackEntry> stack;
  stack.reserve(64);

  int8_t state = start;
  stack.push_back(stackEntry{.state = state});

  while (state != end) {
    int32_t action = tmAction[state];
    if (action < -2) {
      // Lookahead is needed.
      if (next == noToken) {
        next = lookaheadNext(lexer);
      }
      action = lalr(action, next);
    }

    if (action >= 0) {
      // Reduce.
      int32_t rule = action;
      auto ln = static_cast<int32_t>(tmRuleLen[rule]);

      stackEntry entry;
      entry.sym.symbol = tmRuleSymbol[rule];
      stack.resize(stack.size() - ln);
      if (debugSyntax) {
        LOG(INFO) << "lookahead reduced to: " << symbolName(entry.sym.symbol);
      }
      state = gotoState(stack.back().state, entry.sym.symbol);
      entry.state = state;
      stack.push_back(std::move(entry));
    } else if (action == -1) {
      // Shift.
      if (next == noToken) {
        next = lookaheadNext(lexer);
      }
      state = gotoState(state, next);
      stack.push_back(stackEntry{
          .sym = symbol{.symbol = next},
          .state = state,
      });
      if (debugSyntax) {
        LOG(INFO) << "lookahead shift: " << symbolName(next) << " ("
                  << lexer.Text() << ")";
      }
      if (state != -1 && next != eoiToken) {
        next = noToken;
      }
    }

    if (action == -2 || state == -1) {
      break;
    }
  }

  if (debugSyntax) {
    LOG(INFO) << "lookahead done: " << ((state == end) ? "true" : "false");
  }
  return state == end;
}

ABSL_MUST_USE_RESULT bool AtEmptyObject(Lexer& lexer, int32_t next) {
  if (debugSyntax) {
    LOG(INFO) << "lookahead EmptyObject; next: " << symbolName(next);
  }
  return lookahead(lexer, next, 0, 42);
}

void Parser::reportIgnoredToken(symbol sym) {
  NodeType t;
  switch (Token(sym.symbol)) {
    case Token::MULTILINECOMMENT:
      t = NodeType::MultiLineComment;
      break;
    case Token::INVALID_TOKEN:
      t = NodeType::InvalidToken;
      break;
    default:
      return;
  }
  if (debugSyntax) {
    LOG(INFO) << "ignored: " << Token(sym.symbol) << " as " << t;
  }
  listener_(t, sym.offset, sym.endoffset);
}

void Parser::fetchNext(Lexer& lexer, std::vector<stackEntry>& stack) {
  Token tok;
restart:
  tok = lexer.Next();
  switch (tok) {
    case Token::MULTILINECOMMENT:
    case Token::INVALID_TOKEN:
      pending_symbols_.push_back(symbol{static_cast<int32_t>(tok),
                                        lexer.TokenStartLocation(),
                                        lexer.TokenEndLocation()});
      goto restart;
    default:
      break;
  }

  next_symbol_.symbol = static_cast<int32_t>(tok);
  next_symbol_.offset = lexer.TokenStartLocation();
  next_symbol_.endoffset = lexer.TokenEndLocation();
}

absl::Status Parser::applyRule(
    int32_t rule, stackEntry& lhs,
    [[maybe_unused]] absl::Span<const stackEntry> rhs, Lexer& lexer) {
  switch (rule) {
    case 32:
      if (AtEmptyObject(lexer, next_symbol_.symbol)) {
        lhs.sym.symbol = 23; /* lookahead_EmptyObject */
      } else {
        lhs.sym.symbol = 25; /* lookahead_notEmptyObject */
      }
      return absl::OkStatus();
    default:
      break;
  }
  if (NodeType nt = tmRuleType[rule]; nt != NodeType::NoType) {
    listener_(nt, lhs.sym.offset, lhs.sym.endoffset);
  }
  return absl::OkStatus();
}

absl::Status Parser::Parse(int8_t start, int8_t end, Lexer& lexer) {
  pending_symbols_.clear();
  int8_t state = start;

  std::vector<stackEntry> stack;
  stack.reserve(startStackSize);
  stack.push_back(stackEntry{.state = state});
  fetchNext(lexer, stack);

  while (state != end) {
    int32_t action = tmAction[state];
    if (action < -2) {
      // Lookahead is needed.
      if (next_symbol_.symbol == noToken) {
        fetchNext(lexer, stack);
      }
      action = lalr(action, next_symbol_.symbol);
    }

    if (action >= 0) {
      // Reduce.
      int32_t rule = action;
      int32_t ln = tmRuleLen[rule];
      stackEntry entry;
      entry.sym.symbol = tmRuleSymbol[rule];
      absl::Span<const stackEntry> rhs;

      if (ln == 0) {
        if (next_symbol_.symbol == noToken) {
          fetchNext(lexer, stack);
        }
        entry.sym.offset = next_symbol_.offset;
        entry.sym.endoffset = next_symbol_.endoffset;
      } else {
        rhs = absl::Span<const stackEntry>(&stack[0] + stack.size() - ln, ln);
        entry.sym.offset = rhs.front().sym.offset;
        entry.sym.endoffset = rhs.back().sym.endoffset;
      }
      absl::Status ret = applyRule(rule, entry, rhs, lexer);
      if (!ret.ok()) {
        return ret;
      }
      stack.resize(stack.size() - ln);
      if (debugSyntax) {
        LOG(INFO) << "reduced to: " << symbolName(entry.sym.symbol)
                  << " consuming " << ln << " symbols, range "
                  << entry.sym.offset << " to " << entry.sym.endoffset;
      }
      state = gotoState(stack.back().state, entry.sym.symbol);
      entry.state = state;
      stack.push_back(std::move(entry));
    } else if (action == -1) {
      // Shift.
      if (next_symbol_.symbol == noToken) {
        fetchNext(lexer, stack);
      }
      state = gotoState(state, next_symbol_.symbol);
      if (state >= 0) {
        stack.push_back(stackEntry{
            .sym = next_symbol_,
            .state = state,
        });
        if (debugSyntax) {
          LOG(INFO) << "shift: " << symbolName(next_symbol_.symbol) << " ("
                    << lexer.Text() << ")";
        }
        if (!pending_symbols_.empty()) {
          for (const auto& tok : pending_symbols_) {
            reportIgnoredToken(tok);
          }
          pending_symbols_.clear();
        }
        if (next_symbol_.symbol != eoiToken) {
          switch (Token(next_symbol_.symbol)) {
            case Token::JSONSTRING:
              listener_(NodeType::JsonString, next_symbol_.offset,
                        next_symbol_.endoffset);
              break;
            default:
              break;
          }
          next_symbol_.symbol = noToken;
        }
      }
    }
    if (action == -2 || state == -1) {
      break;
    }
  }

  if (state != end) {
    if (next_symbol_.symbol == noToken) {
      fetchNext(lexer, stack);
    }
    // TODO return a syntax error
    return absl::InvalidArgumentError(absl::StrFormat(
        "Syntax error: line %d: %s", lexer.Line(), lexer.Text()));
  }
  return absl::OkStatus();
}

}  // namespace json

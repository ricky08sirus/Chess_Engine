#pragma once
#include "Move.h"
#include <vector>

class Board {
public:
  int stateId;
  bool whiteToMove;

  Board(int id = 0, bool white = true) : stateId(id), whiteToMove(white) {}
  std::vector<Move> generateMoves() const;
  Board makeMove(const Move &move) const;

  bool isCheckmate() const;
};

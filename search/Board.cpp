#include "Board.h"

std::vector<Move> Board::generateMoves() const {
  if (stateId >= 3)
    return {};
  return {{1}, {2}, {3}};
}

Board Board::makeMove(const Move &move) const {
  return Board(stateId + 1, !whiteToMove);
}

bool Board::isCheckmate() const { return false; }

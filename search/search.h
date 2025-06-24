#pragma once
#include "Board.h"

class Search {
public:
  int minimax(const Board &board, int depth);
  int alphaBeta(const Board &board, int depth, int alpha, int beta);
};

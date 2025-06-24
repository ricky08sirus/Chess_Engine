#include "search.h"
#include "evaluator.h"
#include <algorithm>

int Search::minimax(const Board &board, int depth) {
  if (depth == 0 || board.isCheckmate())
    return Evaluator::evaluate(board);

  int bestValue = board.whiteToMove ? -100000 : 100000;

  for (const Move &move : board.generateMoves()) {
    Board child = board.makeMove(move);
    int value = minimax(child, depth - 1);

    if (board.whiteToMove)
      bestValue = std::max(bestValue, value);
    else
      bestValue = std::min(bestValue, value);
  }

  return bestValue;
}

int Search::alphaBeta(const Board &board, int alpha, int beta, int depth) {
  if (depth == 0 || board.isCheckmate())
    Evaluator::evaluate(board);

  if (board.whiteToMove) {
    int value = -100000;

    for (const Move &move : board.generateMoves()) {
      Board child = board.makeMove(move);
      value = std::max(value, alphaBeta(child, depth - 1, alpha, beta));
      alpha = std::max(alpha, value);
      if (alpha >= beta) {
        break;
      }
    }
    return value;

  }

  else {
    int value = 100000;
    for (const Move &move : board.generateMoves()) {
      Board child = board.makeMove(move);
      value = std::min(value, alphaBeta(child, depth - 1, alpha, beta));
      beta = std::min(beta, value);
      if (alpha >= beta) {
        break;
      }
    }
    return value;
  }
}

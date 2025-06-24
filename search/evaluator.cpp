#include "evaluator.h"

int Evaluator::evaluate(const Board &board) {
  return board.whiteToMove ? board.stateId * 10 : -board.stateId * 10;
}

#include "board/board.h"
// #include "search/search.h"
#include <iostream>

int main() {
  Board board;

  board.setPiece(BLACK_KNIGHT, 36);
  board.clearPiece(WHITE_PAWN, 12);

  // Print specific bitboard
  board.printBitboard(BLACK_KNIGHT);

  // Or print all for debugging
  board.printAllBitboards();

  // Search search;

  // std::cout << "Minimax value" << search.minimax(board, 3) << std::endl;
  // std::cout << "Alpha-Beta value" << search.alphaBeta(board, 3, -100000,
  // 100000)
  // << std::endl;

  std::cout << "KLAS chess Engine Initialized" << std::endl;
  return 0;
}

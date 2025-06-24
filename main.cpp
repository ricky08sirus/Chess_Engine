#include "search/search.h"
#include <iostream>

int main() {
  Board board(0, true);
  Search search;

  std::cout << "Minimax value" << search.minimax(board, 3) << std::endl;
  std::cout << "Alpha-Beta value" << search.alphaBeta(board, 3, -100000, 100000)
            << std::endl;

  std::cout << "KLAS chess Engine Initialized" << std::endl;
  return 0;
}

#include "board.h"
#include <bitset>
#include <iostream>
#include <stdexcept>

// write the constructor

Board::Board() {
  bitboards.fill(0);

  // set white pawns to  starting rank
  bitboards[WHITE_PAWN] = 0x000000000000FF00ULL;

  bitboards[BLACK_PAWN] = 0x00FF000000000000ULL;
}

uint64_t &Board::getBitboard(PieceType piece) {
  if (piece < 0 || piece > NUM_PIECE_TYPES) {
    throw std::out_of_range("Invalid PieceType enum ");
  }
  return bitboards[piece];
}

// set a piece at a specific square
void Board::setPiece(PieceType piece, int squareIndex) {
  getBitboard(piece) |= (1ULL << squareIndex);
}

void Board::clearPiece(PieceType piece, int squareIndex) {
  getBitboard(piece) &= ~(1ULL << squareIndex);
}

void Board::printBitboard(PieceType piece) const {
  const uint64_t bitboard = bitboards[piece];
  std::bitset<64> bits(bitboard);

  std::cout << "Bitboard for piece " << piece << ":\n";

  for (int rank = 7; rank >= 0; --rank) {
    for (int file = 0; file < 8; ++file) {
      int index = rank * 8 + file;
      std::cout << bits[index] << " ";
    }
    std::cout << "\n";
  }
  std::cout << std::endl;
}

void Board::printAllBitboards() const {
  for (int i = 0; i < NUM_PIECE_TYPES; ++i) {
    printBitboard(static_cast<PieceType>(i));
  }
}

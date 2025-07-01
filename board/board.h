#ifndef BOARD_H
#define BOARD_H

#include <array>
#include <cstdint>
#include <string>
#include <sys/types.h>

enum PieceType {
  WHITE_PAWN,
  WHITE_KNIGHT,
  WHITE_BISHOP,
  WHITE_ROOK,
  WHITE_QUeen,
  WHITE_KING,
  BLACK_PAWN,
  BLACK_KNIGHT,
  BLACK_BISHOP,
  BLACK_ROOK,
  BLACK_QUEEN,
  BLACK_KING,
  NUM_PIECE_TYPES
};

class Board {
public:
  Board();

  void setPiece(PieceType piece, int squareIndex);
  void clearPiece(PieceType piece, int squareIndex);
  void printBitboard(PieceType piece) const;
  void printAllBitboards() const;

private:
  std::array<uint64_t, NUM_PIECE_TYPES> bitboards;

  uint64_t &getBitboard(PieceType piece);
};

#endif

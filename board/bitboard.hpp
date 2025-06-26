#pragma once
#include <cstdint>

typedef uint64_t Bitboard;

enum peiceType {
  PAWN,
  KNIGHT,
  BISHOP,
  ROOK,
  QUEEN,
  KING

};

// now define the constants
const int NUM_PIECE_TYPES = 6;
const int NUM_COLORS = 2;
const int NUM_SQUARES = 64;

// Bit manipulation

inline void setBit(Bitboard &bb, int square) { bb |= (1ULL << square); }
inline void clearBit(Bitboard &bb, int square) { bb &= ~(1ULL << square); }
inline bool isBitSet(Bitboard &bb, int square) { return (bb >> square) & 1ULL; }

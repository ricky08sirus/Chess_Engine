cmake_minimum_required(VERSION 3.10)
project(KLASChessEngine)

set(CMAKE_CXX_STANDARD 17)

# add_executable(klas_chess main.cpp search/search.cpp search/evaluator.cpp search/Board.cpp)

add_executable(klas_chess main.cpp  board/board.cpp)




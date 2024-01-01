#include "bitboard.h"
#include "iostream"



void ChessBoard::printBoard(U64 bitboard) {
  for (int rank = 0; rank < 8; ++rank) {

      for (int file = 0; file < 8; ++file) {

        if (!file) {
          std::cout << "  " << 8 - rank;
        }

        //get bits
        int bitnum = 63 - (file) - (rank * 8);
        
        if (get_bit(bitboard, bitnum)) {
          std::cout << " P";
        } else {
          std::cout << " -";
        }
        
      }
      std::cout << std::endl;
  }

  std::cout << ("    a b c d e f g h\n");
}



int main () {
  ChessBoard a{};
  a.printBoard(a.whitePawns );
}

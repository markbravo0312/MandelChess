#include <stdint.h>
#include <iostream> 

//some important constants for Bitboard operations

#define row1 0xFFULL
#define row2 0xFF00ULL
#define row3 0xFF0000ULL
#define row4 0xFF000000ULL
#define row5 0xFF00000000ULL
#define row6 0xFF0000000000ULL 
#define row7 0xFF000000000000ULL
#define row8 0xFF00000000000000ULL

#define rankA 0x8080808080808080
#define rankB 0x4040404040404040
#define rankC 0x2020202020202020 
#define rankD 0x1010101010101010
#define rankE 0x0808080808080808
#define rankF 0x0404040404040404
#define rankG 0x0202020202020202
#define rankH 0x0101010101010101



#define set_bit(b, n) ((b) |= (1 << n))         
#define get_bit(b, n) ((b) & (1 << n))         
#define clear_bit(b, n) ((b) &= (1 << n))



struct ChessBoard {
  //64-Bit scalar that describes bit representation of board
  using U64 = uint64_t;

  U64 whitePawns = row2;
  U64 whiteKnights = ( (row1 & rankG) | (row1 & rankB));
  U64 whiteBishops = ( (row1 & rankC) | (row1 & rankF));
  U64 whiteRooks = ( (row1 & rankA) | (row1 & rankH) );
  U64 whiteQueens = ( (row1 & rankD));
  U64 whiteKing = ( (row1 & rankE));

  U64 blackPawns = row7;
  U64 blackKnights = ( (row8 & rankG) | (row8 & rankB) );
  U64 blackBishops = ((row8 & rankF) | (row8 & rankC));
  U64 blackRooks = ( (row8 & rankA) | (row8 & rankH) );
  U64 blackQueens = ( (row8 & rankD));
  U64 blackKing = (row8 & rankE);

  ChessBoard() {}
  
  void printBoard(U64 bitboard); 
   
};

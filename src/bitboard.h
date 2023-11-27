#include <stdint.h>

//some important constants for Bitboard operations

#define row1 0x00000000000000FF
#define row8 0xFF00000000000000





class ChessBoard {
    //64-Bit scalar that describes bit representation of board
    using U64 = uint64_t;

   U64 whitePawns;
   U64 whiteKnights;
   U64 whiteBishops;
   U64 whiteRooks;
   U64 whiteQueens;
   U64 whiteKing;

   U64 blackPawns;
   U64 blackKnights;
   U64 blackBishops;
   U64 blackRooks;
   U64 blackQueens;
   U64 blackKing;
};
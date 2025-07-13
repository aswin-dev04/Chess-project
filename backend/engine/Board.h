#include<unordered_map>
#include<vector>
#include "Piece.h"
#include "Pawn.h"
#include "Knight.h"
#include "Bishop.h"
#include "Rook.h"
#include "Queen.h"
#include "King.h"



static const std::unordered_map<char,int> pieceValues = {{'P',1},{'N',3},{'B',3},{'Q',9},{'K',0},{'R',5},{'p',1},{'n',3},{'b',3},{'q',9},{'k',0},{'r',5}};

class Board {
public:
    Piece* board[8][8]; // 2D array of Piece pointers
    Board() { initializeBoard(); }
    ~Board() { cleanupBoard(); }
    void initializeBoard();
    void cleanupBoard();
};


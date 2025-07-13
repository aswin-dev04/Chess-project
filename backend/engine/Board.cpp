#include "Board.h"

void Board::initializeBoard() {
	
	cleanupBoard(); //cleaning up the board before the game starts
        // Setup Black Pieces
        board[0][0] = new Rook(true,this); board[0][1] = new Knight(true,this); board[0][2] = new Bishop(true,this);
        board[0][3] = new Queen(true,this); board[0][4] = new King(true,this); board[0][5] = new Bishop(true,this);
        board[0][6] = new Knight(true,this); board[0][7] = new Rook(true,this);

        for (int j = 0; j < 8; j++)
            board[1][j] = new Pawn(true,this); // white Pawns

        // Setup White Pieces
        board[7][0] = new Rook(false,this); board[7][1] = new Knight(false,this); board[7][2] = new Bishop(false,this);
        board[7][3] = new Queen(false,this); board[7][4] = new King(false,this); board[7][5] = new Bishop(false,this);
        board[7][6] = new Knight(false,this); board[7][7] = new Rook(false,this);

        for (int j = 0; j < 8; j++)
            board[6][j] = new Pawn(false,this); // black Pawns

        for (int i = 2; i <= 5; i++)
            for (int j = 0; j < 8; j++)
                board[i][j] = nullptr; // Empty squares
}

void Board::cleanupBoard() {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                delete board[i][j]; // Free dynamically allocated pieces
                board[i][j] = nullptr;
            }
        }
    }



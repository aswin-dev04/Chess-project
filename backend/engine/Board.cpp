#include "Board.h"

void Board::initializeBoard() {
        // Setup Black Pieces
        board[0][0] = new Rook(false); board[0][1] = new Knight(false); board[0][2] = new Bishop(false);
        board[0][3] = new Queen(false); board[0][4] = new King(false); board[0][5] = new Bishop(false);
        board[0][6] = new Knight(false); board[0][7] = new Rook(false);

        for (int j = 0; j < 8; j++)
            board[1][j] = new Pawn(false); // Black Pawns

        // Setup White Pieces
        board[7][0] = new Rook(true); board[7][1] = new Knight(true); board[7][2] = new Bishop(true);
        board[7][3] = new Queen(true); board[7][4] = new King(true); board[7][5] = new Bishop(true);
        board[7][6] = new Knight(true); board[7][7] = new Rook(true);

        for (int j = 0; j < 8; j++)
            board[6][j] = new Pawn(true); // White Pawns

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



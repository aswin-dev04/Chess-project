#ifndef PIECE_H
#define PIECE_H

#include<vector>

class Board;

class Piece 
{
	protected: 
		bool color;
		char piece;
		Board* board;
	public:
		Piece(bool c,char p,Board* b) : color(c),piece(p),board(b){}
		virtual ~Piece() = default;
		virtual  bool canCapture(const std::pair<int,int>& currPos) = 0;
		virtual std::vector<std::pair<int,int>> legalMoves(const std::pair<int,int>& pos) = 0;
		bool getColor() const {return color;}
		char getPiece() const {return piece;}
};

#endif


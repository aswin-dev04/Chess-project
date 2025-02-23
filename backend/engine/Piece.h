#ifndef PIECE_H
#define PIECE_H

#include<vector>

class Piece 
{
	protected: 
		bool color;
		char piece;
	public:
		Piece(bool c,char p) : color(c),piece(p){}
		virtual ~Piece() = default;
		virtual  bool canCapture(const std::pair<int,int>& currPos, const std::pair<int,int>& targetPos) = 0;
		virtual std::vector<std::pair<int,int>> legalMoves(const std::pair<int,int>& pos) = 0;
		bool getColor() const {return color;}
		char getPiece() const {return piece;}
};

#endif


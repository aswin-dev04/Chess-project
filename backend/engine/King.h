#ifndef KING_H
#define KING_H


#include<vector>
#include<unordered_map>
#include "Piece.h"

class King : public Piece
{
	public:
		King(bool c,Board* board): Piece(c,c?'P':'p',board){}
		std::vector<std::pair<int,int>> legalMoves(const std::pair<int,int>& pos) override; 
		bool canCapture(const std::pair<int,int>& currPos) override;
};

#endif

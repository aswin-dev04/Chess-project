#ifndef BISHOP_H
#define BISHOP_H


#include<vector>
#include<unordered_map>
#include "Piece.h"

class Bishop : public Piece
{
	public:
		Bishop(bool c,Board* board): Piece(c,c?'P':'p',board){}
		std::vector<std::pair<int,int>> legalMoves(const std::pair<int,int>& pos) override; 
		bool canCapture(const std::pair<int,int>& currPos) override;
};

#endif

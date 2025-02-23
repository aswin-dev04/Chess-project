#ifndef KING_H
#define KING_H


#include<vector>
#include<unordered_map>
#include "Piece.h"

class King : public Piece
{
	public:
		King(bool c): Piece(c?'P':'p',c){}
		std::vector<std::pair<int,int>> legalMoves(const std::pair<int,int>& pos) override; 
		bool canCapture(const std::pair<int,int>& currPos, const std::pair<int,int>& targetPos) override;
};

#endif

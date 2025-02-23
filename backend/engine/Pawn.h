#ifndef PAWN_H
#define PAWN_H


#include<vector>
#include<unordered_map>
#include "Piece.h"

class Pawn : public Piece
{
	public:
		Pawn(bool c): Piece(c?'P':'p',c){}
		std::vector<std::pair<int,int>> legalMoves(const std::pair<int,int>& pos) override; 
		bool canCapture(const std::pair<int,int>& currPos, const std::pair<int,int>& targetPos) override;
};

#endif

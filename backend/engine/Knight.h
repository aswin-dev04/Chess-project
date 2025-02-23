#ifndef KNIGHT_H
#define KNIGHT_H

#include<vector>
#include<unordered_map>
#include "Piece.h"

class Knight : public Piece
{
	public: 
		Knight(bool c) : Piece(c?'K':'k',c){}
		std::vector<std::pair<int,int>> legalMoves(const std::pair<int,int>& pos) override; 
		bool canCapture(const std::pair<int,int>& currPos, const std::pair<int,int>& targetPos) override;


	
};

#endif

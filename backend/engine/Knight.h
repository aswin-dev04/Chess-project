#ifndef KNIGHT_H
#define KNIGHT_H

#include<vector>
#include<unordered_map>
#include "Piece.h"

class Knight : public Piece
{
	public: 
		Knight(bool c,Board* board) : Piece(c,c?'K':'k',board){}
		std::vector<std::pair<int,int>> legalMoves(const std::pair<int,int>& pos) override; 
		bool canCapture(const std::pair<int,int>& currPos) override;


	
};

#endif

#include "Pawn.h"
#include "Board.h"

bool Pawn::canCapture(const std::pair<int,int>& currPos){


	int direction = this->getColor()?1:-1;
	int row = currPos.first, column = currPos.second;

	
	//first way is to capture to the right
	
	if(column+1<8 && row+direction>=0 && row+direction<8)
	{
		
		
	}

	//second way is to capture to the left
	
	if(column-1>=0 && row+direction>=0 && row+direction<8)
	{
		
	}
	
	//third way is to capture by en passant
	




}

std::vector<std::pair<int,int>> Pawn::legalMoves(const std::pair<int,int>& pos)
{
	std::vector<std::pair<int,int>> moves;


}


#include<iostream>
#include<vector>
#include<cctype>
#include<string>
#include<unordered_map>
#include "Piece.h"
/*#include "Pawn.h"*/
/*#include "Knight.h"*/
/*#include "Bishop.h"*/
/*#include "Rook.h"*/
/*#include "Queen.h"*/
/*#include "King.h"*/



class Player
{
	private:
		bool isWhite;
	std::vector<Piece*> capturedPieces;
		std::unordered_map<char,std::pair<int,int>> pieceLocation;
		int materialScore;
	public:
		Player(bool white): isWhite(white),materialScore(0){}
		bool getColor() const{ return isWhite;}
		void capture(char piece);
};



int main()
{
	return 0;
}



	


	

		


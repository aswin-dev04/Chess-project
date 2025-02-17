#include<iostream>
#include<vector>
#include<cctype>
#include<string>
#include<unordered_map>

char board[8][8] = 

	{{'r','n','b','q','k','b','n','r'},
	 {'p','p','p','p','p','p','p','p'},
	 {'.','.','.','.','.','.','.','.'},
	 {'.','.','.','.','.','.','.','.'},
	 {'.','.','.','.','.','.','.','.'},
	 {'.','.','.','.','.','.','.','.'},
	 {'P','P','P','P','P','P','P','P'},
	 {'R','N','B','Q','K','B','N','R'}};

const std::unordered_map<char,int> pieceValues = {{'P',1},{'N',3},{'B',3},{'Q',9},{'K',0},{'R',5},{'p',1},{'n',3},{'b',3},{'q',9},{'k',0},{'r',5}};


class Pieces 
{
	public: 
		bool color;
		char piece;
		Pieces() : color(true),piece(' '){}
		Pieces(bool c,char p) : color(c),piece(p){}
		~Pieces() = default;
};


class Player
{
	private:
		bool isWhite;
		std::vector<Pieces> capturedPieces;
		std::unordered_map<char,std::pair<int,int>> pieceLocation;
		int materialScore;
	public:
		Player(bool white): isWhite(white),materialScore(0){}
		bool getColor() const{ return isWhite;}
		void capture(char piece)
		{
			capturedPieces.push_back(Pieces(isWhite,piece));
			materialScore+=pieceValues.at(piece);
		}
};

class mySide : public Player
{

	public:
		mySide(bool white): Player(white){}

		std::vector<std::pair<int,int>> pawnMoves(std::pair<int,int> pos)
		{
			std::vector<std::pair<int,int>> moves;
			if(pos.first == 6)
			{
				if(board[5][pos.second] == '.') moves.push_back({5,pos.second});
				if(board[4][pos.second] == '.' && board[5][pos.second] == '.') moves.push_back({4,pos.second});

			}
			else
			{
				if(pos.first != 0)
				{
					if(board[pos.first-1][pos.second] == '.') moves.push_back({pos.first-1,pos.second});
				}
			}
			return moves;
		}



};

class opponent : public Player
{

	public:
		opponent(bool white): Player(white){}

};


int main()
{
	mySide me = new mySide(true);
	std::vector<std::pair<int,int>> moves = me.pawnMoves({6,4});
	for(auto& m:moves) std::cout <<m.first<<" "<<m.second<<"\n";
	std::cout<<"\n";

	return 0;
}



	


	

		


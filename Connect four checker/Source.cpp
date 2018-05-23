

#include <cstdlib>
#include <iostream>

int board[7][6]; // the board X = 7 and Y = 6

bool option4(){
	for (int i = 0; i <= 5; i++) //x
	{
		for (int j = 5; j >= 0; j--) //then y
		{
			//If the next 3 tiles to the right match the current tile, return true
			if (board[i][j] == board[i + 1][j]) { if (board[i][j] == board[i + 2][j]) { return 1; } }
			//If the 3 tiles to the above match the current tile, return true
			if (board[i][j] == board[i][j + 1]) { if (board[i][j] == board[i][j + 2]) { return 1; } }
			//If the 3 tiles diagonally to the right and down match the current tile, return true
			if (board[i][j] == board[i + 1][j - 1]) { if (board[i][j] == board[i + 2][j - 2]) { return 1; } }
			//If the 3 tiles diagonally to the right and up match the current tile, return true
			if (board[i][j] == board[i + 1][j + 1]) { if (board[i][j] == board[i + 2][j + 2]) { return 1; } }
		}

	}
};

int main()
{
	

//## FILL ##
	for (int i = 0; i <= 6; i++) //fill it goes through Y
	{
		for (int j = 0; j <= 5; j++)	//goes through X
		{
			board[j][i] = (rand() % 2); //fills pick 0 or 1 
		}
	}

//## PRINT ##

	for (int i = 0; i <= 5; i++) //x
	{
		for (int j = 0; j <= 6; j++) //then y
		{
			
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "is there a match if so 1 " << std::endl;
//## CHECK ##
	//Option 4
    //	checkForWin()
	//	For X
	//		For Y working backwards from 5, Y--
	//		If the next 3 tiles to the right match the current tile, return true
	//		If the 3 tiles to the above match the current tile, return true
	//		If the 3 tiles diagonally to the right and down match the current tile, return true
	//		If the 3 tiles diagonally to the right and up match the current tile, return true
	//		If the tile is empty, CONTINUE(jump out of Y for loop into X at next X pos)


	std::cout << "is there a match using option 4? " << option4() << std::endl;
	


	system("pause");
	return 0;
}

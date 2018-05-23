

#include <cstdlib>
#include <iostream>

int main()
{
	int board[7][6]; // the board X and Y

//## FILL ##
	for (int i = 0; i <= 6; i++) //fill it goes through Y
	{
		for (int j = 0; j <= 5; j++)	//goes through X
		{
			board[j][i] = (rand() % 2); //fills pick 0 or 1 
		}
	}

//## PRINT ##

	for (int i = 0; i <= 5; i++) 
	{
		for (int j = 0; j <= 6; j++)
		{
			
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}

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


//	for(int i;i<=6;i++) //check it
	{
//		for(int j;j <= 5;j++)
		{
			
		}
	}


	system("pause");
	return 0;
}

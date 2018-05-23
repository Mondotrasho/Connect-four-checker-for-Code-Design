

#include <cstdlib>
#include <iostream>
class Board
{
public:
	int contents[7][6]; // the board X = 7 and Y = 6
	int testboard[7][6] = { { 1,2,3,4,5,6 },{ 7,8,9,10,11,12, },{ 13,14,15,16,17,18 },{ 19,20,21,22,23,24 },{ 25,26,27,28,29,30 },{ 31,32,33,34,35,36 },{ 37,38,39,40,41,42 } }; //

	void fill(){
		for (int i = 0; i <= 6; i++) //fill it goes through Y
		{
			for (int j = 0; j <= 5; j++)	//goes through X
			{
				contents[j][i] = (rand() % 2); //fills pick 0 or 1 
			}
		}
	}
	void print()
	{
		for (int i = 0; i <= 5; i++) //x
		{
			for (int j = 0; j <= 6; j++) //then y
			{

				std::cout << contents[i][j];
			}
			std::cout << std::endl;
		}
	}
	int option4(int(*ourboardarray)[6][7])
	{
		int numofwincons = 0;

		for (int i = 0; i <= 6; i++) //x
		{
			for (int j = 5; j >= -1; j--) //then y
			{
				//If the next 3 tiles to the right match the current tile, return true
				if (ourboardarray[i][j] == ourboardarray[i + 1][j])
				{
					if (ourboardarray[i][j] == ourboardarray[i + 2][j])
					{
						std::cout << "for grid ref  " << i + 1 << "  " << j + 1 << std::endl; numofwincons++;
					}
				}
				//If the 3 tiles to the above match the current tile, return true
				if (ourboardarray[i][j] == ourboardarray[i][j + 1])
				{
					if (ourboardarray[i][j] == ourboardarray[i][j + 2])
					{
						std::cout << "for grid ref  " << i + 1 << "  " << j + 1 << std::endl; numofwincons++;
					}
				}
				//If the 3 tiles diagonally to the right and down match the current tile, return true
				if (ourboardarray[i][j] == ourboardarray[i + 1][j - 1])
				{
					if (ourboardarray[i][j] == ourboardarray[i + 2][j - 2])
					{
						std::cout << "for grid ref  " << i + 1 << "  " << j + 1 << std::endl; numofwincons++;
					}
				}
				//If the 3 tiles diagonally to the right and up match the current tile, return true
				if (ourboardarray[i][j] == ourboardarray[i + 1][j + 1])
				{
					if (ourboardarray[i][j] == ourboardarray[i + 2][j + 2])
					{
						std::cout << "for grid ref  " << i + 1 << "  " << j + 1 << std::endl; numofwincons++;
					}
				}

			}

		}
		return numofwincons;

	
	}
	int option4butitsalways0(const int *blerg[7][6]){
			int numofwincons = 0;

			for (int i = 0; i <= 6; i++) //x
			{
				for (int j = 5; j >= -1; j--) //then y
				{
					//If the next 3 tiles to the right match the current tile, return true
					if (blerg[i][j] == blerg[i + 1][j])
					{
						if (blerg[i][j] == blerg[i + 2][j])
						{
							std::cout << "for grid ref  " << i + 1 << "  " << j + 1 << std::endl; numofwincons++;
						}
					}
					//If the 3 tiles to the above match the current tile, return true
					if (blerg[i][j] == blerg[i][j + 1])
					{
						if (blerg[i][j] == blerg[i][j + 2])
						{
							std::cout << "for grid ref  " << i + 1 << "  " << j + 1 << std::endl; numofwincons++;
						}
					}
					//If the 3 tiles diagonally to the right and down match the current tile, return true
					if (blerg[i][j] == blerg[i + 1][j - 1])
					{
						if (blerg[i][j] == blerg[i + 2][j - 2])
						{
							std::cout << "for grid ref  " << i + 1 << "  " << j + 1 << std::endl; numofwincons++;
						}
					}
					//If the 3 tiles diagonally to the right and up match the current tile, return true
					if (blerg[i][j] == blerg[i + 1][j + 1])
					{
						if (blerg[i][j] == blerg[i + 2][j + 2])
						{
							std::cout << "for grid ref  " << i + 1 << "  " << j + 1 << std::endl; numofwincons++;
						}
					}

				}

			}
			return numofwincons;

		
	}
};




int main()
{
	Board ourboard;

	ourboard.fill();
	ourboard.print();


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
	std::cout << "is there a match using option 4 always 0   ? " << ourboard.option4(ourboard.testboard&) << std::endl;
std::cout << "is there a match using option 4? " << ourboard.option4(ourboard.contents&) << std::endl;
	


	system("pause");
	return 0;
}

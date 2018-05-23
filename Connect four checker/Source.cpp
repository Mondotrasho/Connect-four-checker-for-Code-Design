

#include <cstdlib>
#include <iostream>

int main()
{
	int board[6][7];

	for(int i= 0; i <=6;i++)
	{
		for(int j = 0;j <=5; j++)
		{
			board[i][j] = (rand() % 2);
			std::cout << board[j][i];
		}
		std::cout << std::endl;
	}

	for(int i;i<=6;i++)
	{
		for(int j;j <= 5;j++)
		{
			
		}
	}


	system("pause");
	return 0;
}

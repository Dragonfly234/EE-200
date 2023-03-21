
#include "problem1.h"


char check_win(char board[3][3])
{
	int valid = 0;
	valid = IsValid(board);
	if (valid == 0)
	{
		return'\0';
	}
	else if (valid == 1)
	{

		int i = 0;

for (i = 0; i < 3; i++)
{
	if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] == board[i][2] && board[i][0] != ' ')
	{
		return board[i][0];
	}
}

for (i = 0; i < 3; i++)
{
	if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
	{
		return board[0][i];
	}
}

if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == board[2][2] && board[0][0] != ' ')
{
	return board[0][0];

}

else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] == board[0][2] && board[2][0] != ' ')
{
	return board[0][2];
}

int status = IsFull(board);
if (status == 1)
{
	return '.';
}
else if (status == 0)
{
	return' ';
}
	}
	
}




int IsFull(char board[3][3])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}

		}
	}
	return 1;
}

int IsValid(char board[3][3])
{
	int i = 0;
	int j = 0;
	int Number_x = 0;
	int Number_o = 0;


	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if ((board[i][j] != ' ') && (board[i][j] != 'x') && (board[i][j] != 'o'))
			{
				return 0;
			}

		}
	}



	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (board[i][j] == 'x')
			{
				Number_x++;
			}
			if (board[i][j] == 'o')
			{
				Number_o++;
			}
		}
	}


	if ((((Number_x - Number_o) > 1)) ||  ((Number_o - Number_x) > 1))
	{
	return 0;
   }


return 1;
}



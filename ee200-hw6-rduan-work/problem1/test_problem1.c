

#include "problem1.h"


int main(int argc, char* argv[])
{
	char status;
	
	char board[3][3] = {'x',' ','o',
		                  'x','o',' ',
	                      'x',' ',' '};
	 status = check_win(board);
	printf("%c\n", status);



	char board1[3][3] = { 'x','x','o',
					'x','o',' ',
					'o',' ','x' };
	 status = check_win(board1);
	printf("%c\n", status);

	char board2[3][3] = { 'x',' ',' ',
					' ','o',' ',
					' ',' ',' ' };
	status = check_win(board2);
	if (status == ' ')
	{
		printf("space\n");

	}
	

	char board3[3][3] = { 'x','x','o',
					      'o','o','x',
					      'x','x','o' };
	status = check_win(board3);
	printf("%c\n", status);

	char board4[3][3] = { 'A',' ',' ',
					      'x','o',' ',
					     'o',' ','x' };
	status = check_win(board4);
	
	if (status == '\0')
	{
		printf("!!\n");
	}


	char board5[3][3] = {'x','o','o',
						  'o','x','x',
						  'x','o','o'};
	 status = check_win(board5);
	printf("%c\n", status);
	
	char board6[3][3] = { 'x','x','o',
						  'o','o','x',
						  'x','x','o' };
	status = check_win(board6);
	printf("%c\n", status);

	char board7[3][3] = { ' ','x','x',
						  'x','o',' ',
						  'o',' ','x'};
	status = check_win(board7);
	if (status == '\0')
	{
		printf("to0 many!\n");
	}
	
	char board8[3][3] = { ' ','o','o',
						  'o','o',' ',
						  'o',' ','x' };
	status = check_win(board8);
	if (status == '\0')
	{
		printf("too less!\n");
	}
  return(0);
}



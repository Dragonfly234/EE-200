
#include "problem5.h"


void print_random(int n, int max)
{

  // Fill in this function

if((n>=0)&&(max>0))
	{ 
	
	int i = 0;
	int num = 0;
	for ( i = 0; i < n; i++)
	{
		printf("%d ", rand() % max);
	}
   }

	printf("\n ");
}


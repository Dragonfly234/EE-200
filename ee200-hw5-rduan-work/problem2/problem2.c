
#include "problem2.h"


int* find_min(int* array, int n)
{

  // Fill in this function

	if (array == NULL)
	{
		return NULL;
	}
	
	int position = 0;
	if (n == 0)
	{
		return NULL;
	}
	else if(n>0)
	{
	for (int i = 0; i < n; i++)
	{
		if (array[position] > array[i])
		{
			position = i;
		}
	}
	array = &array[position];
	return array;
	}
}


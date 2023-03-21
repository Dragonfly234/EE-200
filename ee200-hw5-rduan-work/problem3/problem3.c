
#include "problem3.h"


int* find_sequence(int* seq, int n)
{

  // Fill in this function

	if (seq== NULL)
	{
		return NULL;
	}
	
	
	
	
	int right0 = 0, left0 = 0, right1 = 0, left1 = 0;
	int i = 0;
	while (i<n)
	{
		if (seq[i] < seq[i + 1])
		{
			right1 = i;
			left1 = i;
			while (seq[left1 + 1] > seq[left1])
			{
				left1++;
			}
			i = left1 + 1;

		}
		else
		{
			i++;
		}

		if ((left0 - right0) < (left1 - right1))
		{
			right0 = right1;
			left0 = left1;
		}

	}


	if ((right0 == 0) && (left0 == 0))
	{
		return NULL;
	}

    int*p = &seq[right0];
  
	return p;
	

}


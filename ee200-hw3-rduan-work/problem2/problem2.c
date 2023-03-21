
#include "problem2.h"


int find_power(int n)
{

	int result = 0;
	// Fill in this function

  // You'll want to replace this with something that returns a meaningful
  // result.
  
		if (n > 0)
	{
		for ( int i = 0; result <= n; i++)
		{
			result = pow(2, i);
		}
		result = result / 2;
		return result;
	}
	return(0); 
}


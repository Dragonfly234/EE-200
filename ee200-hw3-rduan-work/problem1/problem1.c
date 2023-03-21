
#include "problem1.h"


int print_factors(int n)
{

  // Fill in this function
//try
  // You'll want to replace this with something that returns a meaningful
  // result.
  
	
	
if (n == 0 || n == 1)
	{
		return(-1);
	}

	if (PrimeCheck(n))
	{
		
		int num = n;
		for (int i = 2; i <= num; i++)
		{
			if (num % i == 0)
			{
				if (!PrimeCheck(i))
				{
					printf("%d ", i);
					num = num / i;
					i = 1;
				}
			}
		}
		printf("\n");
		 return 0;

	}

  return(-1);  
}



int PrimeCheck(int n)
{



	for (int i = 2; i < n;i++)
	{
		if (n % i == 0)
		{
			return 1;
		}
	}
	return 0;
}





#include "problem1.h"


void linspace(double* array, double min, double max, int n)
{

  // Fill in this function

	
		if (array == NULL)
	{
		return;
	}
	
	
	double Precision = (max - min) / (n-1);
	if(n>1)
	{
	for (int i = 0; i < n; i++)
	{
		if(i==0)
		{
			array[i] = min;
			printf("%lf ", array[i]);
		}
		else if (i == (n - 1))
		{
			array[i] = max;
			printf("%lf\n", max);
		}else
		{
			array[i] = min + i * Precision;
			printf("%lf ", array[i]);
		}

	}
	}
	else if (n == 1)
	{
		array[0]= min;
		printf("%lf \n", min);
	}
}


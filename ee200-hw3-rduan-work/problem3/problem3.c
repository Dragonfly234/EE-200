
#include "problem3.h"


double calculate(double x, char operation, double y)
{

  // Fill in this function

  // You'll want to replace this with something that returns a meaningful
  // result.
  double result = 0;
	if (operation == '+')
	{
		result = x + y;
		return result;
	}
	 else if (operation == '-')
	{
		result = x - y;
		return result;
	}
	 else if (operation == '*')
	{
		result = x * y;
		return result;
	}
	 else if (operation == '^' && !((x<0)&&((int)y -y != 0)))
	{
		result = pow(x,y);
		return result;
	}
	 else if (operation == '/' &&  y !=0)
	{
		result =x/y;
		return result;
	}
	 else 
	{
		printf("error\n");
		
	}
  return(0); 
}


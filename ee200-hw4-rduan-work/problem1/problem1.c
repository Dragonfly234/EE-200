#include<stdio.h>
#include<math.h>
double calculate(double x, char operation, double y);
int main(int argc, char* argv[])
{

  // Your code goes here
  // Feel free to add other functions to this file, but don't add
  // other files since the autograder won't know about them.

  double num1=0, num2=0,result=0;
	char oper;
	char* operation = &oper;
	double* number1 = &num1;
	double* number2 = &num2;
	int status;
	status = scanf("%lf ", number1);

	if (status == 0)
	{
		printf("error\n");
		return 0;
	}

	status = scanf("%c ", operation);
	if (status == 0)
	{
		printf("error\n");
		return 0;
	}

	status = scanf("%lf", number2);
	if (status == 0)
	{
		printf("error\n");
		return 0;
	}


	result = calculate(num1,oper,num2);
	printf("%.15f\n", result);

 
  return(0);
}

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
	 else if (operation == '^' && !((x < 0) && ((int)y - y != 0)))
	 {
		 result = pow(x, y);
		 
		 return result;
	 }
	 else if (operation == '/' && y != 0)
	 {
		 result = x / y;
		 
		 return result;
	 }
	 else
	 {
		 printf("error\n");
		 return 0;

	 }
	 
	

	
 }


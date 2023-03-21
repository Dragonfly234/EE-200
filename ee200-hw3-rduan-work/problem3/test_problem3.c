
#include "problem3.h"


int main(int argc, char* argv[])
{

  // Put anything here that you think is appropriate to test your function
  // e.g, double result = calculate(37, '+', 1);
  //      if(result ...
double result = calculate(37, '+', 1);
	if (result == (37 + 1))
	{
		printf("the result is right\n");
	}
	else {

		printf("the result is wrong\n");
	}


	result = calculate(37, '-', 1);
	if (result == (37 - 1))
	{
		printf("the result is right\n");
	}
	else {

		printf("the result is wrong\n");
	}
	
	
	
	result = calculate(37, '*', 2);
	if (result == (37 * 2))
	{
		printf("the result is right\n");
	}
	else {

		printf("the result is wrong\n");
	}

	result = calculate(-37, '*', 2);
	if (result == (-37 * 2))
	{
		printf("the result is right\n");
	}
	else {

		printf("the result is wrong\n");
	}
	result = calculate(-3.14, '*', 6.89);
	if (result == (-3.14 * 6.89))
	{
		printf("the result is right\n");
	}
	else {

		printf("the result is wrong\n");
	}

	result = calculate(-3.14, '/', 6.89);
	if (result == (-3.14 / 6.89))
	{
		printf("the result is right\n");
	}
	else {

		printf("the result is wrong\n");
	}

	result = calculate(-4, '/', 2);
	if (result == (-4 / 2))
	{
		printf("the result is right\n");
	}
	else {

		printf("the result is wrong\n");
	}

	result = calculate(-3.14, '^', -6);
	if (result - (pow( - 3.14 , -6))<= 0.00001)
	{
		printf("the result is right\n");
	}
	else {

		printf("the result is wrong\n");
	}


	result = calculate(-3.14, '^', -6.3);
	if (result - (pow(-3.14, -6.3)) <= 0.00001)
	{
		printf("the result is right\n");
	}
	else {

		printf("the result is wrong\n");
	}


	result = calculate(-2, '^', 4);
	if (result == (pow(-2, 4)))
	{
		printf("the result is right\n");
	}
	else {

		printf("the result is wrong\n");
	}
	result = calculate(3, '^', 6);
	if (result == (pow(3, 6)))
	{
		printf("the result is right\n");
	}
	else {

		printf("the result is wrong\n");
	}

	result = calculate(-3, '^', -6);
	if (result == (pow(-3, -6)))
	{
		printf("the result is right\n");
	}
	else {

		printf("the result is wrong\n");
	}
	result = calculate(-3, '&', -6);
	if (result == (pow(-3, -6)))
	{
		printf("the result is right\n");
	}
	else {

		printf("the result is wrong\n");
	}
  return(0);
}


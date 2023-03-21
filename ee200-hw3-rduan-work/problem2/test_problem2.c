
#include "problem2.h"


int main(int argc, char* argv[])
{

  // Put anything here that you think is appropriate to test your function
  // e.g., int result = find_power(17);
         int result = 0;
	 	result=find_power(0);
	printf("the result is %d\n", result);
	result = find_power(1);
	printf("the result is %d\n", result);
	result = find_power(2);
	printf("the result is %d\n", result);
	result = find_power(8);
	printf("the result is %d\n", result);
	result = find_power(16);
	printf("the result is %d\n", result);
	result = find_power(100);
	printf("the result is %d\n", result);
	result = find_power(5);
	printf("the result is %d\n", result);
	result = find_power(12);
	printf("the result is %d\n", result);
	result = find_power(-33);
	printf("the result is %d\n", result);
	result = find_power(-20);
	printf("the result is %d\n", result);
	result = find_power(-10);
	printf("the result is %d\n", result);
  return(0);
}


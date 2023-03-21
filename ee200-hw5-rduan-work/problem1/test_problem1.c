
#include "problem1.h"


int main(int argc, char* argv[])
{

  // Put anything here that you think is appropriate to test your function
double array[10];
	linspace(&array[0], 2, 8, 4);
	linspace(&array[0], 1, 10, 10);
	linspace(&array[0], 6, 10, 1);
	linspace(&array[0], 6, 10, 10);
	linspace(&array[0], 6, 10, 0);
	linspace(&array[0], 5, 10, 10);
	linspace(NULL, 5, 10, 10);
  return(0);
}


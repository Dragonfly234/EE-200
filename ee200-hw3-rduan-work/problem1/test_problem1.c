
#include "problem1.h"


int main(int argc, char* argv[])
{

  // Put anything here that you think is appropriate to test your function
  // e.g, print_factors(10);
  // or int success = print_factors(17);
        int success = 0;
	success = print_factors(1);
	
	success = print_factors(0);
	
	success = print_factors(10);

	success = print_factors(30);
	
	success = print_factors(101);

	success = print_factors(17);
	
	success = print_factors(119);
	
	success = print_factors(-1);
	
	success = print_factors(-10);
	
	success = print_factors(-30);
	
	success = print_factors(-49);

  return(0);
}



#include "problem2.h"


int main(int argc, char* argv[])
{

  // Put anything here that you think is appropriate to test your function
int Numbers[10] = { 5,3,4,2,-2,7,9,-9,-1,10};
	int* array =&Numbers[0];
	array = find_min(&Numbers[0], 10);
	

	int Numbers1[5] = { -6,-7,5,-4,8};
	array = &Numbers1[0];
	array = find_min(&Numbers1[0], 5);

	

	int Numbers3[5] = {-6,-7,-100,-4,8};
	array = &Numbers1[0];
	array = find_min(&Numbers3[0], 5);
	


	int Numbers2[10] = {0};
	array = &Numbers2[0];
	array = find_min(&Numbers1[0], 0);
  array = find_min(&Numbers1[0], -1);

		array = find_min(NULL, 10);
  return(0);
}


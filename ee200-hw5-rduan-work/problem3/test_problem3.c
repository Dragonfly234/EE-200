
#include "problem3.h"


int main(int argc, char* argv[])
{

  // Put anything here that you think is appropriate to test your function
int Numbers[15] = {5,1,2,1,2,3,4,5,6,2,1,2,3,4,5 };
	int* seq = &Numbers[0];
	seq = find_sequence(seq, 15);
   seq = find_sequence(NULL, 15);
	
 seq = find_sequence(seq, -5);






	int Numbers2[6] = { 6,5,4,3,2,1 };
	seq = &Numbers2[0];
	seq = find_sequence(seq, 6);
	



	int Numbers3[10] = { -5,-3,-1,0,1,2,3,6,2,2 };
	seq = &Numbers3[0];
	seq = find_sequence(seq, 10);


	int Numbers4[6] = { 6,5,4,3,2,1 };
	seq = &Numbers4[0];
	seq = find_sequence(seq, 6);

  
  return(0);
}


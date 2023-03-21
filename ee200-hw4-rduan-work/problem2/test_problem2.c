
#include "problem2.h"


int main(int argc, char* argv[])
{

  // Put anything here that you think is appropriate to test your function
  // e.g, print_time(10);
	time_t Timelocation = 0;
    time(&Timelocation);
	print_time(Timelocation);
	print_time(10);
	print_time(100);
	print_time(300);
	print_time(10000);
	print_time(-10);
	print_time(0); 
	print_time(100800);
	print_time(-50);
	print_time(1663890227);


        print_time(1663890227);
                 print_time(86400);
	print_time(172800); 
	print_time(259200);
	print_time(345600);
	print_time(432000);
	print_time(518400);	
        print_time(604800);

	        print_time(2678400);
	print_time(5356800);
	print_time(8035200);
	print_time(10713600);
	print_time(13392000);
        print_time(16070400);
        print_time(21427200);
	print_time(18748800);
	print_time(24105600);
	print_time(26784000);
	print_time(29462400);
	print_time(32140800);

  return(0);
}



#include "problem3.h"


int main(int argc, char* argv[])
{

  // Put anything here that you think is appropriate to test your function
  // You can define triangles here, since the struct is declared in the header
  Triangle t = { {0,0},{0,0},{0,0} };
	Triangle first = { {0,0},{5,0},{0,5} };
	Triangle second = { {0,0},{5,0},{0,4} };
	getLarger(&first, &second);

	first.a.x = -2.6; first.a.y = 3;	first.b.x = 4; first.b.y = 5; 	first.c.x = -1; first.c.y = -1;
	second.a.x = -4; second.a.y = 2.5;  second.b.x = 5; second.b.y = 6;  second.c.x = -2; second.c.y = 2;
	getLarger(&first, &second);
	
	first.a.x = 6; first.a.y = 7;	first.b.x = 12; first.b.y = 2; 	first.c.x = 6; first.c.y = 2;
	second.a.x = 0; second.a.y = 5; second.b.x = 4; second.b.y = 0;  second.c.x = 0; second.c.y = 0;
	getLarger(&first, &second);

	first.a.x = -4; first.a.y = 5;	first.b.x = -2; first.b.y = 5; 	first.c.x = -3; first.c.y = 3;
	second.a.x = 2; second.a.y = -3; second.b.x = 5; second.b.y = -4;     second.c.x = 2; second.c.y = -5;
	getLarger(&first, &second);

	
	getLarger(NULL, &second);

	getLarger(&first, NULL);

  return(0);
}


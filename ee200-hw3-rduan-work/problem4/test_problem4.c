
#include "problem4.h"


int main(int argc, char* argv[])
{

  // Put anything here that you think is appropriate to test your function
  // You can define triangles here, since the struct is declared in the header
  	Triangle first = { {0,0},{4,0},{0,5} };
	Triangle second = { {0,0},{4,0},{0,4} };
	Triangle t = getLarger(first, second);

	printf("The larger triangle vertex coordinates are\n");
	printf("(%f  %f)\n (%f  %f)\n (%f  %f)\n", t.a.x, t.a.y, t.b.x, t.b.y, t.c.x, t.c.y);
	

	first.a.x = -2.6; first.a.y = 3;	first.b.x = 4; first.b.y = 5; 	first.c.x = -1; first.c.y = -1;
	second.a.x = -4; second.a.y = 2.5;second.b.x = 5; second.b.y = 6;  second.c.x = -2; second.c.y = 2;
	  t = getLarger(first, second);
	  printf("The larger triangle vertex coordinates are\n");
	  printf("(%f  %f)\n (%f  %f)\n (%f  %f)\n", t.a.x, t.a.y, t.b.x, t.b.y, t.c.x, t.c.y);
	  first.a.x = 6; first.a.y = 7;	first.b.x = 12; first.b.y = 2; 	first.c.x = 6; first.c.y = 2;
	  second.a.x = 0; second.a.y = 5; second.b.x = 4; second.b.y = 0;  second.c.x = 0; second.c.y = 0;
	  t = getLarger(first, second);
	  printf("The larger triangle vertex coordinates are\n");
	  printf("(%f  %f)\n (%f  %f)\n (%f  %f)\n", t.a.x, t.a.y, t.b.x, t.b.y, t.c.x, t.c.y);

	  first.a.x = -4; first.a.y = 5;	first.b.x = -2; first.b.y = 5; 	first.c.x = -3; first.c.y = 3;
	  second.a.x = 2; second.a.y = -3; second.b.x = 5; second.b.y = -4;     second.c.x = 2; second.c.y = -5;
	  t = getLarger(first, second);
	  printf("The larger triangle vertex coordinates are\n");
	  printf("(%f  %f)\n (%f  %f)\n (%f  %f)\n", t.a.x, t.a.y, t.b.x, t.b.y, t.c.x, t.c.y);

	  first.a.x = 1; first.a.y = -7;	first.b.x = 6; first.b.y = -3; 	first.c.x = 6; first.c.y = -7;
	  second.a.x = -6; second.a.y = -1; second.b.x = -1; second.b.y = -1;     second.c.x = -3; second.c.y = -5;
	  t = getLarger(first, second);
	  printf("The larger triangle vertex coordinates are\n");
	  printf("(%f  %f)\n (%f  %f)\n (%f  %f)\n", t.a.x, t.a.y, t.b.x, t.b.y, t.c.x, t.c.y);

  return(0);
}


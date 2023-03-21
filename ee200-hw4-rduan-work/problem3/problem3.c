
#include "problem3.h"


Triangle* getLarger(Triangle* first, Triangle* second)
{
  Triangle iniliz =  { {0,0},{0,0},{0,0} };
  Triangle* t = &iniliz;

  // Fill in this function

  // You'll want to replace this with something that returns a meaningful
  // result.
  if (first == NULL)
  {
	  t = second;
	  printf("The second one is larger\n");
	  return(t);
  }
  else if (second == NULL)
  {
	  t = first;
	  printf("The first one is larger\n");
	  return(t);
  }



  double AreaFirst = ((first->a.x * first->b.y) + (first->b.x * first->c.y) + (first->c.x * first->a.y)
	  - (first->b.x * first->a.y) - (first->c.x * first->b.y) - (first->a.x * first->c.y)) * 0.5;
 
  
  if (AreaFirst < 0)
  {
	  AreaFirst = -AreaFirst;
  }


  double AreaSecond = ((second->a.x * first->b.y) + (second->b.x * second->c.y) + (second->c.x * second->a.y)
	  - (second->b.x * second->a.y) - (second->c.x * second->b.y) - (second->a.x * second->c.y)) * 0.5;

  if (AreaSecond < 0)
  {
	  AreaSecond = -AreaSecond;
	 
  }

  if (AreaFirst >= AreaSecond)
  {
	  t = first;
	  printf("The first one is larger\n");
  }
  else
  {
	  t = second;
	  printf("The second one is larger\n");
  }

  return(t); 
}


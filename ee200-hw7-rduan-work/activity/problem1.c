/* problem1.c - Activity log */
#include <stdio.h>
#include <time.h>
int main(int argc, char* argv[])
{
	

 if((argc >4)||(argc<=2))
   {
     printf("The entered information is in the wrong format\nUsage:The input should be \nactivity duration time \"note\"\nthe note can be empty\n");
     
   }else if(argc==3)
   {
    if(((*argv[2]<='Z')&&(*argv[2] >= 'A'))|| ((*argv[2] <= 'z') && (*argv[2] >= 'a')))
    {
       printf("The entered information is in the wrong format\nUsage:The input should be \nactivity duration time \"note\"\nthe note can be empty\n");

    }else
    {
    
      time_t seconds;
       seconds = time(NULL);
      FILE* f = fopen("activity.tsv","a");
      fprintf(f, "%11d\t%s\t%s\n", seconds,argv[1], argv[2]);

   fclose(f);

    
    }
   }else
   {
     
      time_t seconds;
       seconds = time(NULL);	  
      FILE* f = fopen("activity.tsv","a");
      fprintf(f, "%11d\t%s\t%s\t%s\n",seconds ,argv[1], argv[2],argv[3]);
   fclose(f);
   }
  return(0);
}


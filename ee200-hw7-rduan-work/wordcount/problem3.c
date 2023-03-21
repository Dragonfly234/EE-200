/* problem2.c - Activity summary */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{
	int LineNumber = 0, ByteNumber = 0, WordNumber = 0;
	char scanfchar;
	FILE* f =NULL;
	int WordFlag = 0;
	int notspace = 0;
	int HaveName = 1;

	if (argc > 5)
	{
		printf("The input format is wrong!");
		return 0;
	}
	else
	{
		
		if ((*argv[argc - 1] == '-') || (argc == 1))
		{
			f = stdin;
			argc++;
			HaveName = 0;
			
		}
		else {
			f = fopen(argv[argc - 1], "r");
		}
		
		
		while ((scanfchar = fgetc(f)) != EOF)
		{
		
				ByteNumber++;
				if ((scanfchar!= '\n' )&& (scanfchar != ' ')&&(scanfchar != '\t') && (WordFlag == 0))
				{
					WordFlag = 1;
				}
			
			if (scanfchar == '\n')
			{
				LineNumber++;
			}


			if (((scanfchar == ' ')|| (scanfchar == '\n') ||(scanfchar == '\t')) &&(WordFlag==1))
			{
				WordFlag = 0;
				WordNumber++;
			}
	     }
		if (WordFlag == 1)
		{
			WordNumber++;
		}



		if ((argc == 2)||(argc==5))
		{
			printf("%d %d %d", LineNumber, WordNumber, ByteNumber);
			if (HaveName == 1)
			{
				printf(" %s\n", argv[argc - 1]);
			}
		}

		else if (argc == 3)
		     {
			if (*(argv[argc - 2] + 1) == 'l')
			{
				printf("%d", LineNumber);
				if (HaveName == 1);
				{
					printf(" %s\n", argv[argc - 1]);
				}
			}
			if (*(argv[argc - 2] + 1) == 'w')
			{
				printf("%d", WordNumber);
				if (HaveName == 1)
				{
					printf(" %s\n", argv[argc - 1]);
				}
			}
			 
			if (*(argv[argc - 2] + 1) == 'c')
			{
				printf("%d", ByteNumber);
				if (HaveName == 1)
				{
					printf(" %s\n", argv[argc - 1]);
				}
			}

		    }
		else if (argc == 4)
		{
			if ((* (argv[argc - 3] + 1) == 'l')&&(*(argv[argc - 2] + 1) == 'w'))
			{
				
				printf("%d %d", LineNumber, WordNumber);
				if (HaveName == 1)
				{
					printf(" %s\n", argv[argc - 1]);
				}
			}
                      
			
			if ((* (argv[argc - 3] + 1) == 'l')&&(*(argv[argc - 2] + 1) == 'c'))
                        {
			
                                printf("%d %d", LineNumber, ByteNumber);
								if (HaveName == 1)
								{
									printf(" %s\n", argv[argc - 1]);
								}
                        }
			if ((*(argv[argc - 3] + 1) == 'w')&&(*(argv[argc - 2] + 1) == 'l'))
			{
				
				printf("%d %d", WordNumber,LineNumber);
				if (HaveName == 1)
				{
					printf(" %s\n", argv[argc - 1]);
				}
			}
                      
			if ((* (argv[argc - 3] + 1) == 'w')&&(*(argv[argc - 2] + 1) == 'c'))
                        {
				
                                printf("%d %d",WordNumber, ByteNumber);
								if (HaveName == 1)
								{
									printf(" %s\n", argv[argc - 1]);
								}
                        }

			if ((*(argv[argc - 3] + 1) == 'c')&& (*(argv[argc - 2] + 1) == 'l'))
			{
				
				printf("%d %d", LineNumber,ByteNumber);//
				if (HaveName == 1)
				{
					printf(" %s\n", argv[argc - 1]);
				}
			}
			
			if ((*(argv[argc - 3] + 1) == 'c')&& (*(argv[argc - 2] + 1) == 'w'))
                        {
				
                                printf("%d %d", ByteNumber,WordNumber);
								if (HaveName == 1)
								{
									printf(" %s\n", argv[argc - 1]);
								}
                        }


		}

	}

  return(0);
}



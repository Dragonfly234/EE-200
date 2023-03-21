/* problem2.c - Activity summary */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{

	time_t seconds = time(NULL);
	int Number = 0;
	char TimeUnit;
	int RecordTime = 0;
	char activity[100];
	char note[100];
	int SportsTime = 0;
	int total = 0;
	int fail = 0;
	if (argc < 2)
	{
		printf("usage:\nThe imput imformation should be: duratition+week/day/year.\nFor example:1w");
	}
	else
	{
		FILE* f = fopen("activity.tsv", "r");
		if (f == NULL)
		{
			printf("error：Fail to open the File!");
			return 0;
		}
		while (fail==0)
		{
			if ((fscanf(f, "%11d\t%s\t%d\t%[^\n]", &RecordTime, &activity, &SportsTime, &note) != 4) && (feof(f) == 0))
			{
				fail=1;
				printf("error:Corrupt file!\n");
				fclose(f);
				return 0;
			}
			if(feof(f)!=0)
			{
			fail = 1;
			break;
			}
			sscanf(argv[1], "%d%c", &Number, &TimeUnit);
			if (TimeUnit == 'd')
			{
				if ((seconds - RecordTime) < 86400 * Number)
				{
					total = SportsTime + total;
				}
			}
			else if (TimeUnit == 'w')
			{
				if ((seconds - RecordTime) < 604800 * Number)
				{
					total = SportsTime + total;
				}
			}
			else if (TimeUnit == 'y')
			{
				if ((seconds - RecordTime) < 31556952 * Number)
				{
					total = SportsTime + total;
				}
			}


		}


		printf("Total exercise: %d minutes\n", total);
fclose(f);
	}



	return(0);
}


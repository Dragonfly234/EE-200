
#include "problem3.h"


int main(int argc, char* argv[])
{
	char str[2] = "cc";
	char str1[100] = "hjbsaaadfysegfgythbvjkbuihff";
	unsigned int histogram[26] = { 0 };
	find_frequency(&str, 2, histogram);
	for (int i = 0; i < 26; i++)
	{
		printf("histogram[%d] = %d\n", i, histogram[i]);
	}


	printf("*************\n");
	
	find_frequency(&str1, 100, histogram);

	for (int i = 0; i < 26; i++)
	{
		printf("histogram[%d] = %d\n", i, histogram[i]);
	}


	find_frequency(NULL, 10, histogram);
  return(0);
}

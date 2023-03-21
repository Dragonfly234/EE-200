
#include "problem4.h"


const char* find_shortest(const char* const* strings, int len)
{
	int i = 0;
	int j = 0;
	int Number_char = 0;
	int x = 0, y = 0;
	int FirstCharLocation = 0;
	if (len == 0)
	{
		return NULL;
	}

	while ((strings[i] == NULL) && (i < len))
	{
		i++;
	}

	FirstCharLocation = i;
	if (FirstCharLocation == len)
	{
		return NULL;
	}

	char* jump = strings[0];
	for (i = 0; i < len; i++)
	{

		if (jump == NULL)
		{
			jump = &strings[i + 1];
			continue;
		}


		jump = strings[i + 1];
		j = 0;
		
		

	
		while (strings[i][j] != '\0')
		{
			j++;

		}
		


		if (i == FirstCharLocation)
		{

			Number_char = j;
		}

		if (Number_char > j)
		{
			Number_char = j;
			x = i;
			y = 0;
		}
	}

	jump = strings[x];
	return jump;
}


#include "problem2.h"


void lower(char* str)
{
	if (str == NULL)
	{
		return;
	}
	for ( int i = 0; str[i]!='\0'; i++)
	{
		if (( 'A'  <= str[i]) && ('Z' >= str[i]))
			
		{
			str[i] = str[i] + 32;
	    }
	}

}



#include "problem3.h"

void find_frequency(const char* str, int len, unsigned int histogram[26])
{
	for (int i = 0; i < 26; i++)
	{
		histogram[i] = 0;
	}
	
	
	
	if (str == NULL)
	{
		return;
}
	for (int i = 0; i < len; i++)
	{
		int CharacterNubmber = (int) * (str + i);

		if ((65 <= CharacterNubmber) && (90 >= CharacterNubmber))
		{
			
			histogram[CharacterNubmber - 65]++;
	    }

		if ((97 <= CharacterNubmber) && (122 >= CharacterNubmber))
		{
			
			histogram[CharacterNubmber - 97] = histogram[CharacterNubmber - 97] + 1;
		}
	}



}

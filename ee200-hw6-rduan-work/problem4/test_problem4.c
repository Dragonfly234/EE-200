
#include "problem4.h"


int main(int argc, char* argv[])
{
	
	const char *strings[3] = {"syah","up","Blo"};
	const char*p= find_shortest(strings,3);
	printf("%s\n",p);


	const char* strings1[3] = { "I","love","China" };
	 p = find_shortest(strings1,3);
	printf("%s\n", p);
	
	

	const char* strings4[5] = {"sosoososo","aiuidwiu","uhdhuhduqw","12345","A123"};
	p = find_shortest(strings4, 5);
	printf("%s\n", p);


	const char* strings2[3] = { "I","love","China" };
	p = find_shortest(strings2, 0);
	if (p == NULL)
	{
		printf("!!\n");
		
	}
	else
	{
		printf("%s\n", p);
	}
	


	const char* strings3[3] = { "I000000\0","Alove\0","China\0" };
	p = find_shortest(strings3, 3);
	if (p == NULL)
	{
		printf("!!\n");

	}
	else
	{
		printf("%s\n", p);
	}



	
	p = find_shortest(NULL, 0);
	if (p == NULL)
	{
		printf("!!\n");

	}
	else
	{
		printf("%s\n", p);
	}

	return(0);
}


#include "problem2.h"


void print_time(time_t time)
{

  // Fill in this function
char* week=NULL;
	char* month = NULL;
	struct tm* TimePrint;
	TimePrint = gmtime(&time);
	
	int year = 0;

	year = 1900 + TimePrint->tm_year;
	


	if (TimePrint->tm_mon == 0)
	{
		month = "January";
	}
	if (TimePrint->tm_mon == 1)
	{
		month = "February";
	}
	if (TimePrint->tm_mon == 2)
	{
		month = "March";
	}
	if (TimePrint->tm_mon == 3)
	{
		month = "April";
	}
	if (TimePrint->tm_mon == 4)
	{
		month = "May";
	}
	if (TimePrint->tm_mon == 5)
	{
		month = "June";
	}
	if (TimePrint->tm_mon == 6)
	{
		month = "July";
	}
	if (TimePrint->tm_mon == 7)
	{
		month = "August";
	}
	if (TimePrint->tm_mon == 8)
	{
		month = "September";
	}
	if (TimePrint->tm_mon == 9)
	{
		month = "October";
	}
	if (TimePrint->tm_mon == 10)
	{
		month = "November";
	}
	if (TimePrint->tm_mon == 11)
	{
		month = "December";
	}


	if (TimePrint->tm_wday == 1)
	{
		week = "Monday";
	}
	if (TimePrint->tm_wday == 2)
	{
		week = "Tuesday";
	}
	if (TimePrint->tm_wday == 3)
	{
		week = "Wednesday";
	}
	if (TimePrint->tm_wday == 4)
	{
		week = "Thursday";
	}
	if (TimePrint->tm_wday == 5)
	{
		week = "Friday";
	}
	if (TimePrint->tm_wday == 6)
	{
		week = "Saturday";
	}
	if (TimePrint->tm_wday == 0)
	{
		week = "Sunday";
	}






	printf("%s, %s %d, %.2d %.2d:%.2d:%.2d\n",week,month, TimePrint->tm_mday, year, 
		                           TimePrint->tm_hour, TimePrint->tm_min, TimePrint->tm_sec);
}


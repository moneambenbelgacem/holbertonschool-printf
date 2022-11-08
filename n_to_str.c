#include "main.h"
void number_to_string(int number, int base, char *buffer)
{
	if (number < 0)
	{
		*buffer++ = '-';
		number = -number;
	}
	unsnumtostr(number, base, buffer);
}
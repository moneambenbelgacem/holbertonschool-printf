#include "main.h"
/**
 * number_to_string - Entry point
 *@number: argument entrer
 *@base: argument entrer
 *@buffer: argument entrer
 * Return: 0 on success, error code otherwise
 */
void number_to_string(long int number, int base, char *buffer)
{
	if (number < 0)
	{
		*buffer++ = '-';
		number = -number;
	}
	unsnumtostr(number, base, buffer);
}

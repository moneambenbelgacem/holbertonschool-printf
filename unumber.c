#include "main.h"
/**
 * unsnumtostr - Entry point
 *@number: argument entrer
 *@base: argument entrer
 *@buffer: argument entrer
 * Return: 0 on success, error code otherwise
 */
void unsnumtostr(long int number, int base, char *buffer)
{
	int i, cur = 0, digit;
	char buf[65];

	if (number == 0)
	{
		*buffer++ = '0';
		*buffer = 0;
		return;
	}

	for (i = 0; i < 65; i++)
		buf[i] = 0;
	while (number)
	{
		digit = number % base;
		if (digit >= 10)
		{
			buf[cur++] = 'a' + (digit - 10);
		}
		else
		{
			buf[cur++] = '0' + digit;
		}
		number /= base;
	}
	for (i = cur - 1; i != 0; i--)
		*buffer++ = buf[i];
	*buffer++ = buf[0];
	*buffer = 0;
}

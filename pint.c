#include "main.h"
/**
 * pint - Entry point
 *@args: argument entrer
 * Return: 0 on success, error code otherwise
 */
int pint(va_list args)
{
	long int n;
	int i, len = 0;
	char buf[32];

	n = va_arg(args, int);
	number_to_string(n, 10, buf);
	for (i = 0; buf[i]; i++)
	{
		putchar(buf[i]);
		len++;
	}
	return (len);
}

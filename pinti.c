#include "main.h"
/**
 * pinti - Entry point
 *@args: argument entrer
 * Return: 0 on success, error code otherwise
 */
int pinti(va_list args)
{
	int len = 0, i;
	long int n;
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

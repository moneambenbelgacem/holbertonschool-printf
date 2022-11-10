#include "main.h"
int pint(va_list args)
{
	int n = va_arg(args, int);
	int i, len= 0;
	char buf[32];
	number_to_string(n, 10, buf);
	for (i = 0; buf[i]; i++)
	{

		putchar(buf[i]);
		len++;
	}
	return (len);
}
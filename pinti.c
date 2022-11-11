#include "main.h"
int pinti(va_list args)
{
	int len = 0, i;
	long int n = va_arg(args, int);

	char buf[32];
	number_to_string(n, 10, buf);
	for (i = 0; buf[i]; i++)
	{

		putchar(buf[i]);
		len++;
	}
	
	
	return (len);
}
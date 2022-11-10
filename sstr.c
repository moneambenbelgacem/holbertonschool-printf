#include "main.h"
int sstr( va_list args)
{
	const char *s = va_arg(args, const char *);
	int len = 0 ;

	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		putchar(*s++);
		len++;
	}
	return(len);
}
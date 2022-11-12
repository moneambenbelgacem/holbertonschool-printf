#include "main.h"
/**
 * sstr - Entry point
 *@args: argument entrer
 * Return: 0 on success, error code otherwise
 */
int sstr(va_list args)
{
	const char *s = va_arg(args, const char *);
	int len = 0;

	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		putchar(*s++);
		len++;
	}
	return (len);
}

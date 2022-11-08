#include "main.h"

/**
 * print_char - prints an int
 * @args: the list of args
 */
int print_char(va_list args)
{
	putchar(va_arg(args, int));
	return (1);
}
/**
 * print_string - prints an int
 * @arg: the list of args
 */
int print_string(va_list arg)
{
	int i = 0;
	char *str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	return (0);
}

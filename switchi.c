#include "main.h"
/**
 * switchi - Entry point
 *@format: format input
 *@args: argument entrer
 * Return: 0 on success, error code otherwise
 */
int switchi(const char *format, va_list args)
{
	int len = 0, s, d, ii;

	switch (*format)
	{
	case 'c':
		putchar(va_arg(args, int));
		len++;
		break;
	case 's':
		s = sstr(args);
		len += s;
		break;
	case '%':
		putchar('%');
		len++;
		break;
	case 'd':
		d = pint(args);
		len += d;
		break;
	case 'i':
		ii = pinti(args);
		len += ii;
		break;
	default:
		putchar('%');
		putchar(*format);
		len += 2;
		break;
	}
	return (len);
}

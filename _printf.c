#include "main.h"
/**
 * _printf - Entry point
 *@format: format input
 * Return: 0 on success, error code otherwise
 */
int _printf(const char *format, ...)
{
	int res;
	va_list args;

	va_start(args, format);

	res = vprint(format, args);
	va_end(args);
	return (res);
}

#include"main.h"



int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	vprint(format, args);

	va_end(args);
	return (0);
}


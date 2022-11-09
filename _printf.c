#include"main.h"



int _printf(const char *format, ...)
{
	int res; 
	va_list args;
	va_start(args, format);

	res = vprint(format, args);

	va_end(args);
	return (res);
}


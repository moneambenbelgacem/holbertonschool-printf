#include "main.h"


int _printf(const char *format,...)
{
	int i = 0,j =0 ,g ; 
	

	va_list(fn); 
	if(format == NULL ||(strlen(format)==1 && format[i] == '%'))
	{
		return (-1); 
	}

	va_start(fn,format); 
	while (format && format[i] )
	{
		if (format[i] != '%')
		{
			putchar(format[i]); 
			j++; 
		}
		if (format[i] == '%')
		{
		g = get_printf(*(format + (i+1)),fn);
			i++;

		}

	}
	va_end(fn);
	return (j);
}
#include "main.h"
int vprint(const char *format, va_list args)
{
	int  len = 0, x;
	int state = 0;

	if (format)
	{

		while (*format)
		{
			if (state == 0)
			{
				if (*format == '%')
				{
					if (strlen(format) == 1)
						return (-1);
					state = 1;
				}
				else
				{
					putchar(*format);
					len++;
				}
			}
			else if (state == 1)
			{
				x =  switchi(format, args);
				len+=x;
				state = 0;

			}
			format++;
		}
		return (len );
	}
	return (-1);
}

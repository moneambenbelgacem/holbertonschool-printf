#include"main.h"
int vprint(const char *format, va_list args)
{
int i , len = 0 ;
	int state = 0;
	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
			{
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
			switch (*format)
			{
			case 'c':
			{

				char ch = va_arg(args, int);
				putchar(ch);
				len++;
				break;
			}
			case 's':
			{
				const char *s = va_arg(args, const char *);
				while (*s)
				{
					putchar(*s++);
					len++;
				}
			}
			break;
			case 'd':
			{
				int n = va_arg(args, int);
				char buf[32];
				number_to_string(n, 10, buf);
				for ( i = 0; buf[i]; i++)
				{

					putchar(buf[i]);
					len++;
				}

				break;
			}
			}
			state = 0;
		}
		format++;
	}
	return (len);
}
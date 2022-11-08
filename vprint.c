#include"main.h"
void vprint(const char *format, va_list args)
{
int i ;
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
				break;
			}
			case 's':
			{
				const char *s = va_arg(args, const char *);
				while (*s)
				{
					putchar(*s++);
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
				}

				break;
			}
			}
			state = 0;
		}
		format++;
	}
}
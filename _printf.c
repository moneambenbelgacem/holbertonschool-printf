#include "main.h"

int _printf(const char *format, ...)
{
	format_t methods[] = {
			{"%s", print_string},
			{"%d", print_int},
			{"%c", print_char},
			{"%i", print_unsigned},
			{"%p", print_pointer}};
	va_list list;
	int i = 0, j, len;

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 3;
		while (j >= 0)
		{
			if (methods[j].s[0] == format[i] && methods[j].s[1] == format[i + 1])
			{
				len += methods[j].f(list);
				i += 2;
				goto Here;
			}
			j--;
		}
		putchar(format[i]);
		len++;
		i++;
	}
	va_end(list);
	return (len);
}

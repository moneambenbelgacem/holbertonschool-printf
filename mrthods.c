#include "main.h"

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}

int print_string(va_list v)
{
	char *s;
	int i, len;

	s = va_arg(v, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			putchar(s[i]);
		return (len);
	}
}

int print_int(va_list v)
{
	int n = va_arg(v, int);
	int num, last = n % 10, digit, exp = 1, i = 1;

	n /= 10;
	num = n;

	if (last < 0)
	{
		putchar('-');
		num *= (-1);
		n *= (-1);
		last *= (-1);
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp *= 10;
			num /= 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			putchar(digit + '0');
			num -= (digit * exp);
			exp /= 10;
			i++;
		}
	}
	putchar(last + '0');
	return (i);
}

int print_char(va_list v)
{
	char c;
	c = va_arg(v, int);
	putchar(c);
	return (1);
}

#include "main.h"

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}

int print_hex_aux(unsigned int num)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		putchar(array[i] + '0');
	}
	free(array);
	return (counter);
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

int print_unsigned(va_list v)
{
	unsigned int n = va_arg(v, unsigned int);
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

int print_pointer(va_list v)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b, i;

	p = va_arg(v, void *);
	if (p = NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			putchar(s[i]);

		return (i);
	}
	a = (unsigned long int)p;
	putchar('0');
	putchar('x');
	b = print_hex_aux(a);
	return (b + 2);
}

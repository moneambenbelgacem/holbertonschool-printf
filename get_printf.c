#include "main.h"
/**
 * get_printf - get_printf to get function from function.c
 * @fn: arg
 * @s: char
 * Return: char
 */
int get_printf(const char s, va_list fn)
{
	int i = 0, x;
	t_type tab[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int}};

	while (tab[i].p != '\0')
	{
		if (tab[i].p == s)
			x = tab[i].f;
		return (x);
		i++;
	}
	return (0);
}
#ifndef INV_TREE_H
#define INV_TREE_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * getNumberFormat - number %
 *
 * @str: string get in printf
 *
 * description: 'get number of % after them character'
 *
 */
int getNumberFormat(char *str);

typedef struct op
{
	char p;
	void (*f)(va_list);
} t_type;
int _print(const char *format);
int get_printf(const char s, va_list fn);

void print_int(va_list args);
void print_char(va_list args);
void print_string(va_list args);
void print_float(va_list args);
void get_function(const char *format, ...);

#endif
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

typedef struct format
{
	char *s;
	int (*f)(va_list);
} format_t;

int _printf(const char *format, ...);
int _strlen(char *s);
int print_string(va_list v);
int print_int(va_list v);
int print_char(va_list v);
int print_unsigned(va_list v);

#endif

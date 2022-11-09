#ifndef INV_TREE_H
#define INV_TREE_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>



int vprint(const char *format, va_list args);
void unsnumtostr(int number, int base, char *buffer);
void number_to_string(int number, int base, char *buffer);
int _printf(const char *format, ...);

#endif
#ifndef INV_TREE_H
#define INV_TREE_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct op
{
	char p ;  
	void (*f)(va_list); 
}t_type;




#endif
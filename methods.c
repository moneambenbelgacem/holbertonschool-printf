#include "main.h"

/**
 * getNumberFormat - number %
 *
 * @str: string get in printf
 *
 * description: 'get number of % after them character'
 *
 * return: integer
 */
int getNumberFormat(char *str)
{
    int i = 0, c = 0;

    while (str[i] != '\0')
    {
        if (
            str[i] == '%' &&
            ((str[i + 1] >= 'A' && str[i + 1] <= 'Z') ||
             (str[i + 1] >= 'a' && str[i + 1] <= 'z') ||
             (str[i + 1] >= '0' && str[i + 1] <= '9') ||
             str[i + 1] == '.'))
            c++;
        i++;
    }
    return (c);
}
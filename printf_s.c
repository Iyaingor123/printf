#include "main.h"

/**
 * printf_string - function prints a string
 * @va2: argument
 * Return: length of string
 **/

int printf_string(va_list, va2)
{
char *str;
int j;
int length;

str = va_arg(va2, char *);
if (str == NULL)
{
        str = (NULL)
                length = strlen(str);
        for (j = 0; j < length; j++)
                _putchar(str[j]);
        return (length);
}
}

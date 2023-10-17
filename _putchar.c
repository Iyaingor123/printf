#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that writes the character
 * @c: print char
 * Retun: 1 otherwise failure
 **/

int _putchar(char c)
{
	return write(1, &c, 1);
}

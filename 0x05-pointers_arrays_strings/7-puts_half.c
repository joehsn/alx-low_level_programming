#include "main.h"
#include <string.h>

/**
 * puts_half - a function that prints half of a string
 *
 * @str: a param
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, len = strlen(str);

	for (i = (len - 1) / 2; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}

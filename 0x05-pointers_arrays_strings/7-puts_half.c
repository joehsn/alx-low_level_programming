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
	int i, len = strlen(str), n = (len % 2 == 0) ? len / 2 : (len + 1) / 2;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

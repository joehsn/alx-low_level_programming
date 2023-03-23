#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 *
 * @n: it determines the length of the line
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * print_times_table - a function that prints
 * the n times table, starting with 0.
 * @n: the given number for a table
 * Return: void
 */

void print_times_table(int n)
{
	int row, col;

	if (n > 15 || n < 0)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			int res = row * col;

			if (res >= 100)
			{
				_putchar('0' + (res / 100 % 10));
				_putchar('0' + (res / 10 % 10));
			}
			else if (res >= 10)
			{
				_putchar(' ');
				_putchar('0' + (res / 10 % 10));
			}
			else if (res < 10 && col != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}

			_putchar('0' + (res % 10));

			if (!(col == n))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

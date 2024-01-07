#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 * Return: void
 */

void times_table(void)
{
	int size = 10;
	int row, col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			int res = row * col;

			if (!(res / 10 == 0))
				_putchar('0' + (res / 10));
			else
				_putchar(' ');

			_putchar('0' + (res % 10));
			if (!(col + 1 == size))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

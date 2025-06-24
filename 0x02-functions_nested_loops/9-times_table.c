#include "main.h"
#include <stdio.h>

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

			if (res >= size)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				if (col > 0)
					_putchar(' ');
				_putchar((res) + '0');
			}
			if (col == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

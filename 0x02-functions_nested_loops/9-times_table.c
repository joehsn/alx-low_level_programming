/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: void
 */

#include "main.h"

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product = i * j;

			if (product < 10)
			{
				_putchar(' ');
			}
			else
				_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');	
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

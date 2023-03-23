#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int x, y;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			_putchar(x = '0');
		}
		_putchar('\n');
	}
}

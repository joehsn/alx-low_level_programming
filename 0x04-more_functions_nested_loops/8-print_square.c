#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 *
 * @size: a param
 *
 * Return: nothing
 */

void print_square(int size)
{
	int y, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

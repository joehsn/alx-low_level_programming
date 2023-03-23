#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 *
 * @size: a param
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < (size - y); x++)
			{
				_putchar(' ');
			}
			for (z = y; z > 0; z--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

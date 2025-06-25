#include "main.h"
#include <math.h>


int count_digits(const int n);
/**
 * print_times_table - a function that prints
 * the n times table, starting with 0.
 * @n: the given number for a table
 * Return: void
 */

void print_times_table(int n)
{
	int total = n * n;
	int total_digits = count_digits(total);
	int row, col;

	if (n > 15 || n < 0)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			int res = row * col;
			int res_digits = count_digits(res);
			int spaces = total_digits - res_digits;
			int divisor;

			while (spaces > 0)
			{
				_putchar(' ');
				spaces--;
			}

			if (res < 0)
			{
				_putchar('-');
				res = -res;
			}

			if (res == 0)
			{
				_putchar('0');
			}
			else
			{
				divisor = 1;

				while ((res / divisor) >= 10)
					divisor *= 10;

				while (divisor != 0)
				{
					_putchar((res / divisor) % 10 + '0');
					divisor /= 10;
				}
			}

			if (col < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

/**
 * count_digits - a function that counts the n digits.
 * @n: the given number
 * Return: int
 */
int count_digits(const int n)
{
	int t = n;
	int no_digits = 0;

	if (t == 0)
		return (1);

	if (t < 0)
	{
		no_digits++;
		t = -t;
	}

	while (t)
	{
		no_digits++;
		t /= 10;
	}

	return (no_digits);
}

#include "main.h"
#include <stdlib.h>

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
			int *rev_res_digits = (int *)malloc(sizeof(int) * res_digits);
			int spaces = total_digits - res_digits;
			int i;

			if (res == 0)
			{
				if (col > 0)
				{
					while (spaces)
					{
						_putchar(' ');
						spaces--;
					}
					_putchar('0');
				}
				else
				{
					_putchar('0');
				}
			}
			else
			{
				for (i = res_digits - 1; i >= 0; i--)
				{
					rev_res_digits[i] = res % 10;
					res /= 10;
				}

				i = 0;

				while (spaces)
				{
					_putchar(' ');
					spaces--;
				}

				for (i = 0; i < res_digits; i++)
				{
					_putchar(rev_res_digits[i] + '0');
				}
			}

			free(rev_res_digits);

			if (col == n)
				continue;

			_putchar(',');
			_putchar(' ');
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

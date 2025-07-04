#include "main.h"
/**
 * print_number - a function that prints an integer.
 *
 * @n: an integer
 *
 * Return: a void
 */
void print_number(int n)
{
	int t, divisor;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	t = n;
	divisor = 1;

	while ((t / divisor) >= 10)
		divisor *= 10;

	while (divisor != 0)
	{
		_putchar((n / divisor) % 10 + '0');
		divisor /= 10;
	}
}

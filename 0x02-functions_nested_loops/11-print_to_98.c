/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */

#include "main.h"

void print_to_98(int n)
{
	while (n != 98)
	{
		int num = n;

		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}
		if (num >= 100)
			_putchar(num / 100 + '0');
		if (num >= 10)
			_putchar((num / 10) % 10 + '0');
		_putchar(num % 10 + '0');
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else
			n++;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

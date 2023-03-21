/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */

#include "main.h"

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld = -ld;
	_putchar(ld + '0');
	return (ld);
}

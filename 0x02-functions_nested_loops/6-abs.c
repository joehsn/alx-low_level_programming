/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to compute the absolute value of
 *
 * Return: the absolute value of n
 */
#include "main.h"

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

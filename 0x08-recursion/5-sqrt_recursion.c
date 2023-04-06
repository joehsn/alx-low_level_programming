#include "main.h"

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 *
 * @n: a param
 *
 * Return: an intger
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion_helper(n, 1));
}

/**
 * _sqrt_recursion_helper - as the name describes
 *
 * @n: a param
 *
 * @i: a param
 *
 * Return: an intger
 */

int _sqrt_recursion_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_recursion_helper(n, i + 1));
}


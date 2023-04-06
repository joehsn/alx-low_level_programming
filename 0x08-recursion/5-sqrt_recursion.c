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
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int i = 1;
		int result = 1;

		while (result <= n)
		{
			i++;
			result = i * i;
		}
		return (i - 1);
	}
}


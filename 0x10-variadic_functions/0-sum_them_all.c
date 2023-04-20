#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns
 * the sum of all its parameters
 *
 * @n: an arg
 *
 * Return: a result of the sum of the args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list(vl);

	unsigned int i, res;

	va_start(vl, n);

	res = 0;
	for (i = 0; i < n; i++)
	{
		res += va_arg(vl, int);
	}

	va_end(vl);

	return (0);
}

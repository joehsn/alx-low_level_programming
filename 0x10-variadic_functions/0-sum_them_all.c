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
	va_list ap;
	unsigned int i;
	int res;

	va_start(ap, n);

	res = 0;

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		res += va_arg(ap, int);
	}

	va_end(ap);

	return (res);
}

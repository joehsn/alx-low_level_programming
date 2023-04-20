#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers,
 * followed by a new line
 *
 * @separator: an arg
 *
 * @n: an arg
 *
 * Return: a void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(vl);

	unsigned int i;

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vl, int));
		if (separator != NULL && i < n - 1)
			printf("%c", separator);
	}
	printf("\n");
	va_end(vl);
}


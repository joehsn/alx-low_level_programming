#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints stringsm
 * followed by a new line
 *
 * @separator: an arg
 *
 * @n: an arg
 *
 * Return: a void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	char *str;
	unsigned int i;

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(vl, char *);
		printf("%s", (str != NULL) ? str : "(nil)");
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(vl);
}
}


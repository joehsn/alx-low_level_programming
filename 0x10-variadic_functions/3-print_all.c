#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 *
 * @format: a constant arg
 *
 * Return: a void
 */

void print_all(const char * const format, ...)
{
	va_list(vl);

	va_start(vl, format);

	char *str;
	int i = 0;

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(vl, int));
				break;
			case 'i':
				printf("%d", va_arg(vl, int));
				break;
			case 'f':
				printf("%f", va_arg(vl, double));
				break;
			case 's':
				str = va_arg(vl, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(vl);
}


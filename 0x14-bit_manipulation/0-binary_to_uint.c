#include "main.h"
#include <math.h>

/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int.
 *
 * @b: a string of binary
 *
 * Return: a decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int len = 0, i;

	if (b == NULL)
		return (res);

	while (b[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		if (b[i] == 49)
			res += pow(2, len - i - 1);
	}

	return (res);
}

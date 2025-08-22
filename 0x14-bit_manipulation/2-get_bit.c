#include "main.h"

/**
 * get_bit - a function that returns the value of
 * a bit at a given index.
 *
 * @n: the number
 * @index: the index
 *
 * Return: either 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	n = n >> index;

	if (n & 1)
		return (1);
	else
		return (0);
}

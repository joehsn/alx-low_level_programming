#include "main.h"

/**
 * set_bit - a function that sets the value of
 * a bit to 1 at a given index.
 *
 * @n: a pointer to a number
 * @index: the index of the bit
 *
 * Return: a bit
 *
 * NOTE: to compile use the following command:
 * gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);

	*n |= 1 << index;
	return (1);
}

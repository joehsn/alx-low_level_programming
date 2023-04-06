#include "main.h"

/**
 * is_prime_number -  a function that returns 1
 * if the input integer is a prime number, otherwise return 0
 *
 * @n: a param
 *
 * Return: an intger
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);

	for (i = 2; i < n; i++)
		if (n % i == 0)
			return (0);

	return (1);
}


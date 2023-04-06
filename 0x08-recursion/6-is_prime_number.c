#include "main.h"

/**
 * IsPrime -  a function that returns 1
 * if the input integer is a prime number, otherwise return 0
 *
 * @n: a param
 *
 * @i: a param
 *
 * Return: an intger
 */

int IsPrime(int n, int i)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (IsPrime(n, i + 1));
}

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
	return (IsPrime(n, 2));
}


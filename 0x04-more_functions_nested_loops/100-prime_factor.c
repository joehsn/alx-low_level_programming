#include <stdio.h>

/**
 * main - a program that finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: 0 always
 */

int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}

	printf("%ld\n", n);

	return (0);
}

#include <stdio.h>

/**
 *
 *
 *
 *
 *
 *
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

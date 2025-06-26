#include <stdio.h>

#define ul unsigned long
/**
 * main - a program that finds and prints the sum of
 * the even-valued terms, followed by a new line.
 *
 * Return: always 0.
 */
int main(void)
{
	ul prev_1 = 0, prev_2 = 1, fib = 0, sum = 0;

	while (1)
	{
		fib = (prev_1 + prev_2);

		if (fib > 4000000)
			break;

		if ((fib % 2) == 0)
			sum += fib;

		prev_1 = prev_2;
		prev_2 = fib;
	}

	printf("%lu\n", sum);
	return (0);
}

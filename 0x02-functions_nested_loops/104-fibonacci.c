#include <stdio.h>

/**
 * main - a program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: always 0.
 */
int main(void)
{
	unsigned long prev_1 = 0, prev_2 = 1, fib;
	int i;

	for (i = 0; i < 98; i++)
	{
		fib = prev_1 + prev_2;
		if (i < 97)
			printf("%lu, ", fib);
		else
			printf("%lu\n", fib);
		prev_1 = prev_2;
		prev_2 = fib;
	}
	return (0);
}

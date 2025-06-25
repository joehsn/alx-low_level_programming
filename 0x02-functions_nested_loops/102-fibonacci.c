#include <stdio.h>

#define ul unsigned long

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: always 0
 */
int main(void)
{
	int i;
  ul prev_1 = 0, prev_2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
    sum = prev_1 + prev_2;
    printf("%lu\n", sum);
    prev_1 = prev_2;
    prev_2 = sum;
	}
	return (0);
}

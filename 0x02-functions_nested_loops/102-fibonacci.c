#include <stdio.h>


/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: always 0
 */
int main(void)
{
	int prev = 0 + 1;
	int i;

	for (i = 1; i <= 50; i++)
	{
		if (i == 50)
			printf("%d\n", prev);
		else
			printf("%d, ", prev);
		prev += i;
	}
	return (0);
}

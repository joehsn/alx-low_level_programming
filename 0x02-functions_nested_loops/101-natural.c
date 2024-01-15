#include <stdio.h>
#include "main.h"

/**
 * main - a program that computes and prints the sum of
 * all the multiples of 3 or 5 below 1024, followed by a new line.
 * Return: 0
 */

int main(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}


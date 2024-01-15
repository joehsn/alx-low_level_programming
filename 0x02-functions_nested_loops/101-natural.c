#include <stdio.h>
#include "main.h"

/**
 * main - a program that computes and prints the sum of
 * all the multiples of 3 or 5 below 1024, followed by a new line.
 * Return: 0
 */

int main(void)
{
	int target = 1024, sum = 0, i = 0;

	while (i < target)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			sum += i;
		i++;
	}

	printf("%d\n", sum);

	return (0);
}


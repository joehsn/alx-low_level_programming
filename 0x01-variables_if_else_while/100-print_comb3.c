#include <stdio.h>

/**
 * main - A program that prints all possible different
 * combinations of two digits.
 *
 * Return: ALways 0.
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
		{
			if (x != y && x < y)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				if (x == 8 && y == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

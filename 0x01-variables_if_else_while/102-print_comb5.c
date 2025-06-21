#include <stdio.h>

/**
 * main - a program that prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: always] 0
 */
int main(void)
{
	int o, x;

	for (o = 0; o < 100; o++)
	{
		for (x = o + 1; x < 100; x++)
		{
			putchar((o / 10) + '0');
			putchar((o % 10) + '0');
			putchar(' ');
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			if (o == 98 && x == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

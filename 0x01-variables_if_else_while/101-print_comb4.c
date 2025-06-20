#include <stdio.h>

/**
 * main - a program that prints all possible
 * different combinations of three digits.
 *
 * Return: always 0
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
		{
			for (z = 2; z < 10; z++)
			{
				if (x != y && z != y && z != x && x < y && y < z)
				{
					putchar((x % 10) + '0');
					putchar((y % 10) + '0');
					putchar((z % 10) + '0');
					if (x == 7 && y == 8 && z == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

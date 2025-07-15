#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that adds positive numbers
 *
 * @argc: a param
 *
 * @argv: a param
 *
 * Return: an intger
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, c, num, len;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		len = strlen(argv[i]);
		for (j = 0; j < len; j++)
		{
			c = argv[i][j];
			if (!(c > 47 && c < 58))
			{
				puts("Error");
				return (1);
			}
		}
		num = atoi(argv[i]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}


#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of
 * coins to make change for an amount of money.
 *
 * @argc: integer
 * @argv: parameters
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int cents = 0, i = 0;
	int coin;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc < 2 || argc > 2)
	{
		puts("Error");
		return (1);
	}

	coin = atoi(argv[1]);

	if (coin < 0)
	{
		printf("0\n");
		return (0);
	}

	while (coin)
	{
		if (coin - coins[i] < 0)
			i++;
		else
		{
			coin -= coins[i];
			cents++;
		}
	}

	printf("%d\n", cents);

	return (0);
}

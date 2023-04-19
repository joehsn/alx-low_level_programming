#include "3-calc.h"

/**
 * main - the main function
 *
 * @argc: the number of the args
 *
 * @argv: an array of args
 *
 * Return: an intger
 */

int main(int argc, char const *argv[])
{
	int first;
	int second;
	int result;
	char opr;
	int (*func)(int, int)

		if (argc != 4)
		{
			printf("Error\n");
			exit(98);
		}

	first = atoi(argv[3]);
	second = atoi(argv[1]);
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	opr = *argv[2];

	if ((opr == '/' || opr == '%') && second == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(first, second);
	printf("%d\n", result);
	return (0);
}


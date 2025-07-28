#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all
 * the arguments of your program.
 *
 * @ac: an integer
 * @av: a 2d array
 *
 * Return: a string
 */
char *argstostr(int ac, char **av)
{
	char *res;
	int i, j;
	int len = 0, idx = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	res = malloc(sizeof(char) * (len + 1));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			res[idx] = av[i][j];
			idx++;
		}
		res[idx] = '\n';
		idx++;
	}
	res[idx] = '\0';

	return (res);
	free(res);
}

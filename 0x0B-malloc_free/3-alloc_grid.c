#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers.
 *
 * @width: a param
 *
 * @height: a param
 *
 * Return: an intger
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (--i >= 0)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		memset(arr[i], 0, sizeof(int) * width);

	return (arr);
	free(arr);
}


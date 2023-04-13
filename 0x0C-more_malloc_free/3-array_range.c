#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 *
 * @min: a param
 *
 * @max: a param
 *
 * Return: an intger
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (size <= 0)
		return (NULL);

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = 0;

	return (array);
	free(array);
}

#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array.
 *
 * @array: an array of intgers
 *
 * @size: the size of the array
 *
 * @action: a function which will be executed on every
 * element of the given array
 *
 * Return: a void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

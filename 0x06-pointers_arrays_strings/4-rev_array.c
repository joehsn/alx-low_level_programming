#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @a: a param
 *
 * @n: a param
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < a / 2; i++)
	{
		int temp = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

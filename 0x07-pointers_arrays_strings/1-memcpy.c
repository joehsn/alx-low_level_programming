#include "main.h"
#include <string.h>

/**
 * _memcpy - a function that copies memory area.
 *
 * @dest: a param
 *
 * @src: a param
 *
 * @n: a param
 *
 * Return: a string
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}

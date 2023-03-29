#include "main.h"
#include <string.h>

/**
 * _strncpy - a function that copies a string
 *
 * @dest: a param
 *
 * @src: a param
 *
 * @n: a param
 *
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

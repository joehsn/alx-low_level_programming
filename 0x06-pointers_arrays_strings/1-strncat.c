#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatenates two strings
 * it will use at most n bytes from src.
 *
 * @dest: a param
 *
 * @src: a param
 *
 * @n: a param
 *
 * Return: A string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

#include "main.h"
#include <string.h>

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: a param
 *
 * @src: a param
 *
 * Return: A string
 */

char *_strcat(char *dest, char *src) {
  int dest_len = strlen(dest);
  int i;

  for (i = 0; src[i] != '\0'; i++) {
    dest[dest_len + i] = src[i];
  }
  dest[dest_len + i] = '\0';

  return dest;
}

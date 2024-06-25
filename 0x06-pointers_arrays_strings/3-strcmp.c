#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: a param
 *
 * @s2: a param
 *
 * Return: an intager
 */

int _strcmp(char *s1, char *s2) {
  while (*s1 && (*s1 == *s2)) {
    s1++;
    s2++;
  }
  return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

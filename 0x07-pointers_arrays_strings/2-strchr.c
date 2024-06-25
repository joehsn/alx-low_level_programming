#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: a param
 *
 * @c: a param
 *
 * Return: a string
 *
 */

char *_strchr(char *s, char c) {
  int i, n = strlen(s);
  for (i = 0; i < n; i++) {
    if (*(s + i) == c) {
      return &s[i];
    }
  }
  return (NULL);
}

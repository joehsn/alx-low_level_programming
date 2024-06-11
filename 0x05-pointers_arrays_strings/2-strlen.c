#include "main.h"
#include <string.h>

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: a param
 *
 * Return: the length of a string.
 */

int _strlen(char *s)
{
  int length = 0;
 /* This derefence the pointer to check wheihter the value is falsey value */
  while (*s)
  {
    length++;
    /* This line updates the address of the `s` pointer */
    s++;
  }
  return (length);
}

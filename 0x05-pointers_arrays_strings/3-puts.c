#include "main.h"

/**
 * _puts - Write a function that prints a string.
 *
 * @str: a param
 *
 * Return: void
 */

void _puts(char *str) {
  while (*str) {
    _putchar(*str);
    str++;
  }
  _putchar('\n');
}

#include "main.h"

/**
 * main - entry point
 * Description: write a program that prints _putchar, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *pc = "_putchar";

	while (*pc)
	{
		_putchar(*pc);
		pc++;
	}
	_putchar('\n');
	return (0);
}

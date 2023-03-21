
/**
 * main - entry point
 * Description: write a program that prints _putchar, followed by a new line.
 * @return: always success
 */

#include "main.h"

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

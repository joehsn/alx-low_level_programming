#include <stdio.h>

/**
* main - Entry point
* description: as the f file name describes
* Return: always  0 (Success)
*/

int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');

	return (0);
}


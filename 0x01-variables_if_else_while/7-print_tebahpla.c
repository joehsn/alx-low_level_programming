#include <stdio.h>

/**
* main - entry point
* return - 0
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

	return 0;
}


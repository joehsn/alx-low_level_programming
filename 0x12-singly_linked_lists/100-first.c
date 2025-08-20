#include <stdio.h>

/**
 * premain - A function that runs before the main function is executed
 *
 * Returns: a void
 */
void __attribute__ ((constructor)) premain()
{
	printf(
			"You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
	      );
}


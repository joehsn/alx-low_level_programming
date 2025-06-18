#include <string.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 * Return: Always 1 (failure)
 */
int main(void)
{
	const char *err_msg =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(STDERR_FILENO, err_msg, strlen(err_msg));

	return (1);
}

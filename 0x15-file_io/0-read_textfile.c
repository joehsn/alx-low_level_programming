#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 * Return: the actual number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t n_read, n_write;

	/* check for invalid arguments */
	if (filename == NULL || letters == 0)
		return (0);

	/* open the file for reading */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	/* read from the file into the buffer */
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write from the buffer to the standard output */
	n_write = write(STDOUT_FILENO, buffer, n_read);
	if (n_write == -1 || n_write != n_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* free the buffer and close the file */
	free(buffer);
	close(fd);

	/* return the number of letters read and printed */
	return (n_write);
}


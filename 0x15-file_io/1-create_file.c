#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - creates a file and writes text to it
 * @filename: the name of the file to create
 * @text_content: the text to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_write;
	size_t len;

	/* check for invalid arguments */
	if (filename == NULL)
		return (-1);

	/* create the file with read and write permissions for owner */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* if text_content is not NULL, write it to the file */
	if (text_content != NULL)
	{
		/* get the length of the text_content */
		len = 0;
		while (text_content[len] != '\0')
			len++;

		/* write from text_content to the file */
		n_write = write(fd, text_content, len);
		if (n_write == -1 || n_write != (ssize_t)len)
		{
			close(fd);
			return (-1);
		}
	}

	/* close the file and return success */
	close(fd);
	return (1);
}

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text to append to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_write;
	size_t len;

	/* check for invalid arguments */
	if (filename == NULL)
		return (-1);

	/* open the file for appending */
	fd = open(filename, O_WRONLY | O_APPEND);
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

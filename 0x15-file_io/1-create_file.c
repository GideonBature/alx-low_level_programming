#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to file
 * @text_content: the null terminated string
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, b_write;

	if (!filename)
		return (-1);

	if (!text_content)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		return (1);
	}

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);

	if (fd == -1)
		return (-1);

	b_write = write(fd, text_content, strlen(text_content));

	if (b_write == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}

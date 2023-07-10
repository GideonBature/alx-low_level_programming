#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters);
/**
 * read_textfile - reads text file
 * @filename: pointer to file
 * @letters: number of characters/letters it should read
 *
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t b_read, b_write;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc((letters + 1) * sizeof(const char));

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	b_read = read(fd, buf, letters);

	if (b_read <= 0)
	{
		close(fd);
		free(buf);
		return (0);
	}

	buf[b_read] = '\0';

	b_write = write(STDOUT_FILENO, buf, b_read);

	if (b_write < b_read)
	{
		close(fd);
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);

	return (b_write);
}


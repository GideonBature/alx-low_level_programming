#include "main.h"
#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - handles error
 * @exit_code: the exit code
 * @error_message: the error message
 *
 * Return: void
 */
void print_error_and_exit(int exit_code, const char *error_message)
{
	dprintf(STDERR_FILENO, "%s\n", error_message);
	exit(exit_code);
}

/**
 * copy_file - copied content from one file to another
 * @file_from: source
 * @file_to: destination
 *
 * Return: void
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
		print_error_and_exit(98, "Error: Can't read from file");

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
		print_error_and_exit(99, "Error: Can't write to file");

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written == -1)
			print_error_and_exit(99, "Error: Can't write to file");
	}

	if (bytes_read == -1)
		print_error_and_exit(98, "Error: Can't read from file");

	if (close(fd_from) == -1)
		print_error_and_exit(100, "Error: Can't close file descriptor");

	if (close(fd_to) == -1)
		print_error_and_exit(100, "Error: Can't close file descriptor");
}

/**
 * main - copies from source to destination
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;

	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to");

	file_from = argv[1];
	file_to = argv[2];

	copy_file(file_from, file_to);

	return (0);
}

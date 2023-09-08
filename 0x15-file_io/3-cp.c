#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 1024

/**
 * error_exit - Prints an error message and exits with a specified code.
 * @code: The exit code.
 * @msg: The error message.
 */
void error_exit(int code, const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char **argv)
{
	int from_fd, to_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFSIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		error_exit(98, "Error: Can't read from file");

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
		error_exit(99, "Error: Can't write to file");

	while ((bytes_read = read(from_fd, buffer, BUFSIZE)) > 0)
	{
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit(99, "Error: Can't write to file");
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file");

	if (close(from_fd) == -1)
		error_exit(100, "Error: Can't close fd");

	if (close(to_fd) == -1)
		error_exit(100, "Error: Can't close fd");

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Read and print a text file to a
 * @f: The name of the file
 * @l: The number of letters.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *f, size_t l)
{
	int fd;
	ssize_t num_read, num_written;
	char *buffer;

	if (f == NULL)
		return (0);

	buffer = malloc(sizeof(char) * l);
	if (buffer == NULL)
		return (0);

	fd = open(f, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	num_read = read(fd, buffer, l);
	if (num_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	num_written = write(STDOUT_FILENO, buffer, num_read);
	if (num_written == -1 || num_written != num_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (num_written);
}


#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fn);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @f: The name of the file r.
 *
 * Return: A pointer for buffer.
 */
char *create_buffer(char *f)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", f);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes descriptors.
 * @fn: The descriptor to close.
 */
void close_file(int fn)
{
	int n;

	n = close(fn);

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fn);
		exit(100);
	}
}

/**
 * main - Copies file to another file.
 * @argc:arg supplied to the program.
 * @argv: array to the arg.
 *
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	int from, tp, p, l;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	p = read(from, buffer, 1024);
	tp = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || p == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		l = write(tp, buffer, p);
		if (tp == -1 || l == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		p = read(from, buffer, 1024);
		tp = open(argv[2], O_WRONLY | O_APPEND);

	} while (l > 0);

	free(buffer);
	close_file(from);
	close_file(tp);

	return (0);
}

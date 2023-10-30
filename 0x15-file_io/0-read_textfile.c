#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- prints standour.
 * @file: file being read
 * @l: letters being read
 * Return: y- actual number
 *        0 when function fails
 */
ssize_t read_textfile(const char *file, size_t l)
{
	char *buf;
	ssize_t f;
	ssize_t y;
	ssize_t e;

	f = open(file, O_RDONLY);
	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * l);
	e = read(f, buf, l);
	y = write(STDOUT_FILENO, buf, e);

	free(buf);
	close(f);
	return (y);
}

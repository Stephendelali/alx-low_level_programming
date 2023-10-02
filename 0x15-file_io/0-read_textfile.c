#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- helps send test to STANDOUT
 * @fileName: name of text file
 * @l: num of read letters
 * Return: w- a num of bytes read
 *        0 when function fails
 */
ssize_t read_textfile(const char *fileName, size_t l)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(fileName, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * l);
	t = read(fd, buf, l);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

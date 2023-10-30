#include "main.h"

/**
 * create_file - used Constructs a file.
 * @file: name of file to create.
 * @text_content:  string file to write.
 *
 * Return: o
 *         Otherwise - 1.
 */
int create_file(const char *file, char *text_content)
{
	int f, y, len = 0;

	if (file == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	f = open(file, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(f, text_content, len);

	if (f == -1 || y == -1)
		return (-1);

	close(f);

	return (1);
}

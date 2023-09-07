#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Create a file with the given name .
 * @Name: The file name .
 * @text_content: The content to writea.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *Name, char *text_content)
{
	int fd, res, len;

	if (Name == NULL)
		return (-1);

	fd = open(Name, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			continue;
		res = write(fd, text_content, len);
		if (res == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

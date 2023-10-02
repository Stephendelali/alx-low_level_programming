#include "main.h"

/**
 * create_file - fille creation
 * @Name: the name of file created
 * @contentOfText: used to write file
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *Name, char *contentOfText)
{
	int fd, w, len = 0;

	if (Name == NULL)
		return (-1);

	if (contentOfText != NULL)
	{
		for (len = 0; contentOfText[len];)
			len++;
	}

	fd = open(Name, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, contentOfText, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

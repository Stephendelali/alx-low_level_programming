#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @fil: name of the file poiinter.
 * @text_content: the file sttring to add.
 *
 * Return: 0.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *fil, char *text_content)
{
	int x, y, len = 0;

	if (fil == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	x = open(fil, O_WRONLY | O_APPEND);
	y = write(x, text_content, len);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}

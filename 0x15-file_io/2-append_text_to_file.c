#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @Name: namw of file .
 * @contentOfText: The string to end file .
 *
 * Return: filename is NULL -1.
 *         If the file does not exist .
 *         else - 1.
 */
int append_text_to_file(const char *Name, char *contentOfText)
{
	int o, w, len = 0;

	if (Name == NULL)
		return (-1);

	if (contentOfText != NULL)
	{
		for (len = 0; contentOfText[len];)
			len++;
	}

	o = open(Name, O_WRONLY | O_APPEND);
	w = write(o, contentOfText, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The string to add to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content);

int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s filename text\n", argv[0]);
		exit(1);
	}
	result = append_text_to_file(argv[1], argv[2]);
	printf("-> %i\n", result);
	return (0);
}

int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);

	FILE *file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	if (text_content != NULL)
	{
		if (fputs(text_content, file) == EOF)
		{
			fclose(file);
			return (-1);
		}
	}

	fclose(file);
	return (1);
}

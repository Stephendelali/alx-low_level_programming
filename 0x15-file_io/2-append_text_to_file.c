#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @name: Name file.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *name, char *text_content)
{
    FILE *file;

    if (name == NULL)
        return (-1);

    file = fopen(name, "a");

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

/**
 * main - Entry point.
 * @argc: arg number
 * @argv:  argument strings.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char **argv)
{
    int result;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s filename text\n", argv[0]);
        exit(1);
    }

    result = append_text_to_file(argv[1], argv[2]);
    printf("-> %d\n", result);

    return (0);
}

#include "custom_header.h"
#include <unistd.h>

/**
 * custom_putchar - writes the character ch to stdout
 * @ch: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int custom_putchar(char ch)
{
	return (write(1, &ch, 1));
}

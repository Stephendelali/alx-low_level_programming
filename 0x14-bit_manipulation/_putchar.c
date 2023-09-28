#include "main.h"
#include <unistd.h>
/**
 * _putchar - used for writing the characters of c 
 * @c: the print character
 *
 * Return: On success 1.
 * In case of  error, -1 is returned, and  set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

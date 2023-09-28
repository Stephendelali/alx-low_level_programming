#include "main.h"

/**
 * get_endianness - checks the machine
 * Return: 0 for huge , 1 for smaall
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *co = (char *) &i;

	return (*co);
}

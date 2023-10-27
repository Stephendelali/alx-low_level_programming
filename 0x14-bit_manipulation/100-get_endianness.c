#include "main.h"

/**
 * get_endianness - helps in doing checks
 * Return: o for success
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *j = (char *) &y;

	return (*j);
}

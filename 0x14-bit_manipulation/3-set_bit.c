#include "main.h"

/**
 * set_bit - sets a bit given
 * @number: pointer to num to change
 * @i: bit index
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *number, unsigned int i)
{
	if (i > 63)
		return (-1);

	*number = (1UL << i | *number);
	return (1);
}

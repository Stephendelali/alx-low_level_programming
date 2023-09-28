#include "main.h"

/**
 * set_bit - gits bit and sets the given index to one
 * @num: changing number pointer
 * @ind: changing number index
 *
 * Return: 1 = success, -1 = failure
 */
int set_bit(unsigned long int *num, unsigned int ind)
{
	if (ind > 63)
		return (-1);

	*num = ((1UL << ind) | *num);
	return (1);
}

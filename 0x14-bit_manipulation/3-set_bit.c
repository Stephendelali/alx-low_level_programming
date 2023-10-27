#include "main.h"

/**
 * set_bit - changes num to 1
 * @num: change number pointer
 * @ind: index bit set
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *num, unsigned int ind)
{
	if (ind > 63)
		return (-1);

	*num = ((1UL << ind) | *num);
	return (1);
}

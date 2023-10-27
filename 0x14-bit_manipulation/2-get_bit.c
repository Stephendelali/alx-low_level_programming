#include "main.h"

/**
 * get_bit - r value of a bit at an index in a dec num
 * @w: search num
 * @in: bit index
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int w, unsigned int in)
{
	int bit_val;

	if (in > 63)
		return (-1);

	bit_val = (w >> in) & 1;

	return (bit_val);
}

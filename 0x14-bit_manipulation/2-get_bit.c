#include "main.h"

/**
 * get_bit - returns the bit value
 * @num: search number
 * @i: bit index
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int num, unsigned int i)
{
	int bit_val;

	if (i > 63)
		return (-1);

	bit_val = (num >> i) & 1;

	return (bit_val);
}

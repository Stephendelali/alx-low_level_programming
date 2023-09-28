#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a dec num
 * @n: search num
 * @i: bit index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int i)
{
	int bitVal;

	if (i > 63)
		return (-1);

	bitVal = (n >> i) & 1;

	return (bitVal);
}

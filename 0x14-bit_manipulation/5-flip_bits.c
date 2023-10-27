#include "main.h"

/**
 * flip_bits - counts the num of bits to change
 * to get from one ot another
 * @num: 1st num
 * @d: 2nd num
 *
 * Return: num of changed bits
 */
unsigned int flip_bits(unsigned long int num, unsigned long int d)
{
	int i, count = 0;
	unsigned long int cu;
	unsigned long int exclusive = num ^ d;

	for (i = 63; i >= 0; i--)
	{
		cu = exclusive >> i;
		if (cu & 1)
			count++;
	}

	return (count);
}

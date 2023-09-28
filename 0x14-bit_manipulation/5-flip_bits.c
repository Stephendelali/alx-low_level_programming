#include "main.h"

/**
 * flip_bits - number of changed bits
 * to get 
 * @n1: 1st number
 * @m2: 2nd number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n1, unsigned long int m2)
{
	int i, count = 0;
	unsigned long int cu;
	unsigned long int exclusive = n1 ^ m2;

	for (i = 63; i >= 0; i--)
	{
		cu = exclusive >> i;
		if (cu & 1)
			count++;
	}

	return (count);
}

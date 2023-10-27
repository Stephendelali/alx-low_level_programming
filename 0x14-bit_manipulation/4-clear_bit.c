#include "main.h"

/**
 * clear_bit - makes value to 1
 * @num: pointer to the number to change
 * @ind: num to clear index
 *
 * Return: 1 for success
 */
int clear_bit(unsigned long int *num, unsigned int ind)
{
	if (ind > 63)
		return (-1);

	*num = (~(1UL << ind) & *num);
	return (1);
}

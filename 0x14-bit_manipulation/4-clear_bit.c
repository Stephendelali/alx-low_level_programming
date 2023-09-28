#include "main.h"

/**
 * clear_bit - changes value of bit to 0
 * @num: number change pointer
 * @ind: clearing bit index
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *num, unsigned int ind)
{
	if (ind > 63)
		return (-1);

	*num = (~(1UL << ind) & *num);
	return (1);
}

#include "main.h"

/**
 * print_binary - print binary value
 * @w: print number
 */
void print_binary(unsigned long int w)
{
	int q, count = 0;
	unsigned long int cu;

	for (q = 63; q >= 0; q--)
	{
		cu = w >> q;

		if (cu & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

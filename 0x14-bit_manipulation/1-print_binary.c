#include "main.h"

/**
 * print_binary - prints deciimal equivalence to binary
 * @num: binary number ot print
 */
void print_binary(unsigned long int num)
{
	int i, c = 0;
	unsigned long int cu;

	for (i = 63; i >= 0; i--)
	{
		cu = num >> i;

		if (cu & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}

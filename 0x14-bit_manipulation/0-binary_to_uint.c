#include "main.h"

/**
 * binary_to_uint - converts a binary num
 * @bin: string of  binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *bin)
{
	int i;
	unsigned int dec_val = 0;

	if (!bin)
		return (0);

	for (i = 0; bin[i]; i++)
	{
		if (bin[i] < '0' || bin[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (bin[i] - '0');
	}

	return (dec_val);
}

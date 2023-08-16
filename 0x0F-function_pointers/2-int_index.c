#include "function_pointers.h"
/**
 * intIndex - return index place if comparison = true, else -1
 * @Array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int intIndex(int *Array, int size, int (*cmp)(int))
{
	int i;

	if (Array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(Array[i]))
			return (i);
	}
	return (-1);
}

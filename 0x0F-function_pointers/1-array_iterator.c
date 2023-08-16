#include "function_pointers.h"
#include <stdio.h>
/**
 * ArrayIterator - prints each array elem on a newl
 * @Array: array
 * @size: how many elem to print
 * @operation: pointer to print in regular or hex
 * Return: void
 */
void ArrayIterator(int *Array, size_t size, void (*operation)(int))
{
	unsigned int i;

	if (Array == NULL || operation == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		operation(Array[i]);
	}
}

#include <stdlib.h>
#include "main.h"

/**
 * _set_memory - fills memory with a constant byte
 * @mem: memory area to be filled
 * @byte: byte to copy
 * @length: number of times to copy byte
 *
 * Return: pointer to the memory area mem
 */
char *_set_memory(char *mem, char byte, unsigned int length)
{
	unsigned int i;

	for (i = 0; i < length; i++)
	{
		mem[i] = byte;
	}

	return (mem);
}

/**
 * _allocate - allocates memory for an array
 * @num_elements: number of elements in the array
 * @element_size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_allocate(unsigned int num_elements, unsigned int element_size)
{
	char *pointer;

	if (num_elements == 0 || element_size == 0)
		return (NULL);

	pointer = malloc(element_size * num_elements);

	if (pointer == NULL)
		return (NULL);

	_set_memory(pointer, 0, num_elements * element_size);

	return (pointer);
}

#include <stdlib.h>
#include "main.h"

/**
 * array_range - Create an array of integers within a range
 * @min_range: Minimum value of the range (inclusive)
 * @max_range: Maximum value of the range (inclusive), also array size
 *
 * Return: Pointer to the new integer array, NULL on failure or invalid input
 */
int *array_range(int min_range, int max_range)
{
	int *arr;
	int idx, arr_size;

	if (min_range > max_range)
		return (NULL);

	arr_size = max_range - min_range + 1;

	arr = malloc(sizeof(int) * arr_size);

	if (arr == NULL)
		return (NULL);

	for (idx = 0; min_range <= max_range; idx++)
		arr[idx] = min_range++;

	return (arr);
}


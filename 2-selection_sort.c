#include "sort.h"

/**
 * selection_sort - Sorts an array of integers
 * in ascending order using Selection sort
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 */

void selection_sort(int *array, size_t size)
{
	int min_index, temp;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}

		temp = array[i];

		array[i] = array[min_index];
		array[min_index] = temp;

		print_array(array, size);
	}
}

#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order using Bubble sort
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 */

void bubble_sort(int *array, size_t size)
{
	int swapped = 1;
	size_t i;

	while (swapped)
	{
		swapped = 0;

		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i];

				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				swapped = 1;
			}
		}
	}
}

#include "sort.h"
#include <stdio.h>

/**
 * partition - partitions the array
 * @array: array to be partitioned
 * @low: lowest index of the partition
 * @high: highest index of the partition
 * @size: size of the array
 * Return: index of the pivot
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j, temp;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];

			array[i] = array[j];
			array[j] = temp;
			if (i != j)
				print_array(array, size);
		}
	}
	temp = array[i + 1];

	array[i + 1] = array[high];
	array[high] = temp;
	if (i + 1 != high)
		print_array(array, size);
	return (i + 1);
}

/**
 * sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @low: lowest index of the partition
 * @high: highest index of the partition
 * @size: size of the array
 */

void sort(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		sort(array, low, p - 1, size);
		sort(array, p + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	sort(array, 0, size - 1, size);
}

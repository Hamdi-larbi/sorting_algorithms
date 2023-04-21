#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: the array to be sorted
 * @size: the length of the array
 * return nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int index, min;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		min = array[i];
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		array[index] = array[i];
		array[i] = min;
		print_array(array, size);
	}



}

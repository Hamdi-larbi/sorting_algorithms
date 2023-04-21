#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 * return nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, k;
	int j, flag;

	if (size < 2)
		return;
	for (k = 0; k < size - 1; k++)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				j = array[i];
				array[i] = array[i + 1];
				array[i + 1] = j;
				print_array(array, size);
				flag++;
			}
		}
		if (flag == 0)
			return;
	}
}

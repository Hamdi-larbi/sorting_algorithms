#include "sort.h"

/**
 * partition - function that will partition the array
 * @array: the array to be parted
 * @start: the start index of the part of the array to be parted
 * @end: the end index of the part of the array to be parted
 * @size: the size of the array to be sorted
 * Return: the index of the pivot
 */

int partition(int **array, int start, int end, size_t size)
{
	int pindex, i, temp;
	int pivot = (*array)[end];

	pindex = start;
	for (i = start; i < end; i++)
	{
		if ((*array)[i] <=  pivot)
		{
			temp = (*array)[pindex];
			(*array)[pindex] = (*array)[i];
			(*array)[i] = temp;
			print_array(*array, size);
			printf("etape %d\n", i);
		}
		pindex += 1;
	}
	temp = (*array)[end];
	(*array)[end] = (*array)[pindex];
	(*array)[pindex] = temp;
	print_array(*array, size);
	return (pindex);
}

/**
 * sort - function that will sort a partion of the array
 * @array: the array to be sorted
 * @start: the start index of the partion
 * @end: the end index of the partion
 * @size: the size of the array to be sorted
 * return: nothing
 */

void sort(int **array, int start, int end, size_t size)
{
	int pindex;

	if (start < end)
	{
		pindex = partition(array, start, end, size);
		if (pindex - start > 1)
			sort(array, start, pindex - 1, size);
		if (end - pindex > 1)
			sort(array, pindex + 1, end, size);
	}
}

/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: nothing
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	sort(&array, 0, size - 1, size);
}

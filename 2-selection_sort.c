#include "sort.h"

/**
 * selection_sort - sort array of integer using selection sort
 * @array: array to sort
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min, temp;
	size_t swapped = 0;

	if (size <= 1)
		return;

	for (i = 0; i < size; i++)
	{
		min = i;
		swapped = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
				swapped = 1;
			}
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		if (swapped == 1)
			print_array(array, size);
	}
}

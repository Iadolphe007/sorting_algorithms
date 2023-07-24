#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - swapp the array in ascending
 * order using bubble sort algorith
 * @array: array to sort
 * @size: array size
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	size_t  swapped = 0;
	size_t tmp;

	if (size <= 1)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}

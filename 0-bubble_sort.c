#include "sort.h"

/**
 *bubble_sort - sorts an array of int in ascending orde
 *@array: array of numbers
 *@size: Size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t k, i;
	int num;

	if (array == NULL  || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (k = 0; k < size - i - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				num = array[k];
				array[k] = array[k + 1];
				array[k + 1] = num;
				print_array(array, size);
			}
		}
	}
}

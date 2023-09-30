#include "sort.h"
/**
 * shell_sort -Sort an Array using shell sort
 * @array: array of Int
 * @size: array size
 **/

void shell_sort(int *array, size_t size)
{
	unsigned int gap = 1, i, x;
	int temp;

	if (array == NULL)
		return;
	if (size < 2)
		return;
	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			x = i;
			while (x >= gap && array[x - gap] > temp)
			{
				array[x] = array[x - gap];
				x -= gap;
			}
			array[x] = temp;
		}
		print_array(array, size);
		gap /= 3;
	}
}

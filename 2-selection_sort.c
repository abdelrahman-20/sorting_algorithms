#include "sort.h"

/**
 * selection_sort - sort an array with seljtion algorithm
 * @array: the array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, least_index, tmp;
	int swap_elements;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		least_index = i;
		j = i;

		for (; j < size; j++)
			if (array[j] < array[least_index])
			{
				least_index = j;
				swap_elements = 1;
			}
		if (swap_elements == 1)
		{
			tmp = array[least_index];
			array[least_index] = array[i];
			array[i] = tmp;
			print_array(array, size);
			swap_elements = 0;
		}
	}
}

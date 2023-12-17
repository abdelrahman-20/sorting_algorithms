#include "sort.h"

/**
 * bubble_sort - A Function Implements Bubble Sort Algorithms
 * @array: The Array To Sort
 * @size: The Size of The Array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array || !size)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

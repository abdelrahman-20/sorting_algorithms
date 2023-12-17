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
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
				swap(&array[i], &array[j]);
		}
	}
}

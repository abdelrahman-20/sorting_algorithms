#include "sort.h"

/**
 * swap - A Function To Swap 2 Items
 * @a: The First Item
 * @b: The Second Item
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

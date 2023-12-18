#include "sort.h"

/**
 * swap - A Function To Swap Two Nodes in The List
 * @node1: The First Node To Swap
 * @node2: The Second Node To Swap
*/

void swap(listint_t *node1, listint_t *node2)
{
	if (node1->prev)
		node1->prev->next = node2;
	if (node2->next)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;

	node1->prev = node2;
	node2->next = node1;
}


/**
 * insertion_sort_list - A Function To Implement Insertion Sort Algorithm
 * @list: The Head of The List To Sort
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *key, *j;

	if (!list || !(*list)->next)
		return;

	key = (*list)->next;
	while (key)
	{
		j = key;
		key = key->next;
		while (j && j->prev)
		{
			if (j->prev->n > j->n)
			{
				swap(j->prev, j);
				if (!j->prev)
					*list = j;

				print_list((const listint_t *)*list);
			}
			else
				j = j->prev;
		}
	}
}

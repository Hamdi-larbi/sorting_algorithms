#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: the list to be sorted
 * return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node, *ptr;

	if (*list == NULL || list == NULL)
		return;
	for (node = *list; node != NULL; node = node->next)
	{
		while (node->next && node->n > (node->next)->n)
		{
			ptr = node->next;
			node->next = ptr->next;
			ptr->prev = node->prev;
			if (node->prev)
				node->prev->next = ptr;
			node->prev = ptr;
			if (ptr->next)
				ptr->next->prev = node;
			ptr->next = node;
			if (ptr->prev)
				node = ptr->prev;
			else
				*list = ptr;
			print_list(*list);
		}
	}
}

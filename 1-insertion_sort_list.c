#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using Insertion sort
 * @list: Pointer to the head of the list
 */

void insertion_sort_list(listint_t **list)
{

	listint_t *current, *prev, *next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		next = current->next;
		prev = current->prev;

		while (prev != NULL && prev->n > current->n)
		{
			if (prev->prev != NULL)
				prev->prev->next = current;
			else
				*list = current;

			if (current->next != NULL)
				current->next->prev = prev;

			prev->next = current->next;
			current->prev = prev->prev;
			prev->prev = current;
			current->next = prev;

			print_list(*list);
			prev = current->prev;
		}
		current = next;
	}

}

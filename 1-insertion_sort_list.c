#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked
 * list of integers in ascending order using
 * the Insertion sort algorithm
 * @list: Double pointer to the head of the list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *first = NULL;
	listint_t *second = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	second = (*list)->next;
	first = second->prev;

	while (second != NULL)
	{
		first = second->prev;
		while (first != NULL && first->n > second->n)
		{
			linklist_swapping(second, first, list);
			first = second->prev;
		}
		second = second->next;
	}
}

/**
 * linklist_swapping - Swap between two nodes in a doubly linked list.
 *
 * @second: Second node to be swapped.
 * @first: First node.
 * @h: Double pointer to the head of the list.
 */

void linklist_swapping(listint_t *second, listint_t *first, listint_t **h)
{
	listint_t *s1 = second->next;
	listint_t *s2 = first->prev;

	if (s1 != NULL)
		s1->prev = first;
	if (s2 != NULL)
		s2->next = second;
	second->prev = s2;
	first->next = s1;

	second->next = first;
	first->prev = second;

	if (*h == first)
		*h = second;
	print_list(*h);
}

#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void linklist_swapping(listint_t *second, listint_t *first, listint_t **h);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quicksort_recursion(int *array, int first, int last, size_t size);
void swap(int *a, int *b);
int partition(int *array, int first, int last, size_t size);

#endif

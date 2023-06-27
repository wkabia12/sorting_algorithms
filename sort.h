#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list
 *
 * @n: Integer stored in the node
 * @prev: Pointer to previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

int _putchar(char c);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void node_swap(listint_t **list, listint_t **node1, listint_t **node2);

#endif /* SORT_H */

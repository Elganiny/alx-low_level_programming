#include "lists.h"

/**
 * print_listint - Function that prints all the elements of the linked list
 *
 * @h : a listint_t list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
			printf("%d\n", h->n);

		nodes++;
		h = h->next;
	}

	return (nodes);
}

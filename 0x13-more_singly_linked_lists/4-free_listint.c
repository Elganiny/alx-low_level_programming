#include "lists.h"

/**
 * free_listint - a function that frees a listint_t
 * @head: head of the linked list
 * Return: mo return
 */

void free_listint(listint_t *head)
{
	listint_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node);
	}
}

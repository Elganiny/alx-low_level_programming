#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: the head of the linked list
 * Return: no retun
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	while (*head)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
	}

	head = NULL;
}

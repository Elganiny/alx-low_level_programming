#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list
 *
 * @head: the head of the linked list
 * Return: a pointer ro the first node of the reevrsed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL;

	while (current != NULL)
	{
		*head = current->next;
		current->next = prev;
		prev = current;
		current = *head;
	}
	*head = prev;
	return (*head);
}

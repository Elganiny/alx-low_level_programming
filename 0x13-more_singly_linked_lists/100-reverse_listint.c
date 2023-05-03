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
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}

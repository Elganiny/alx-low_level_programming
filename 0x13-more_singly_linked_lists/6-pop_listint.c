#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint _t
 *
 * @head: head of linked list
 * Return: returns the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *free_node;

	n = (*head)->n;
	free_node=*head;

	*head = (*head)->next;
	free(free_node);
	return (n);
}

#include "lists.h"

/**
  * add_nodeint - Adds a new node at the beginning of a list
  * @head: The original linked list
  * @n: The intrger to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}

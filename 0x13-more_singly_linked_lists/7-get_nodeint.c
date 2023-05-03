#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node
 * 
 * @head: head of the linked list
 * @index: the location of the node
 * Return: returns the nth node and returns NULL does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;

	current_node = head;
	while (index--)
		current_node = current_node->next;
	return (current_node);
}

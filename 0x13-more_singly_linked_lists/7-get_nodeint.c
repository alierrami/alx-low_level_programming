#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: a pointer to the listint_t list
 * @index: index of the node
 * Return: the node at index n or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current && count < index)
	{
		count++;
		current = current->next;
	}
	return (current ? current : NULL);
}





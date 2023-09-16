#include "lists.h"
/**
 * dlistint_len - counts the number of nodes in the linked list
 * @h: a pointer to the beginning of the linked list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}


#include "lists.h"
/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: a pointer to the listint_t list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}


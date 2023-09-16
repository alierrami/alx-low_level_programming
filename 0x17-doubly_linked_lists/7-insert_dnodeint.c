#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the beginning of the linked list
 * @idx: index at which to insert the new node
 * @n: the data to enter into the new node
 *
 * Return: a pointer to the new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_nod, *next_nod, *current_nod;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current_nod = *h;
		for (i = 0; i < idx - 1 && current_nod != NULL; i++)
			current_nod = current_nod->next;
		if (current_nod == NULL)
			return (NULL);
	}
	new_nod = malloc(sizeof(dlistint_t));
	if (new_nod == NULL)
		return (NULL);
	new_nod->n = n;
	if (idx == 0)
	{
		next_nod = *h;
		*h = new_nod;
		new_nod->prev = NULL;
	}
	else
	{
		new_nod->prev = current_nod;
		next_nod = current_nod->next;
		current_nod->next = new_nod;
	}
	new_nod->next = next_nod;
	if (new_nod->next != NULL)
		new_nod->next->prev = new_nod;
	return (new_nod);
}


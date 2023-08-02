#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the first element of a listint_t list
 * @idx: index of position to insert the new node
 * @n: the integer to add
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	for (int i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
		return (NULL);

	new->next = temp->next;
	temp->next = new;
	return (new);
}



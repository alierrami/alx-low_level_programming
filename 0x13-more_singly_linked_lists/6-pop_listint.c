#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: double pointer to the listint_t list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);
	while (*head)
	{
		*head = (*head)->next;
		free(temp);
	}
	return ((*head)->n);
}


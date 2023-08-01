#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to the listint_t list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	while (*head)
	{
		temp = *head->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}



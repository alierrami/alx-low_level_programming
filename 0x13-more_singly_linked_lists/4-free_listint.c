#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the listint_t list to free
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}



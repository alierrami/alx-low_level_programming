#include "lists.h"
/**
 * sum_listint - calcultes the sum of all the data of a listint_t list
 * @head: a pointer to the first node of the listint_t list
 * Return: the sum of all data or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
	if (head == NULL)
		return (0);
}


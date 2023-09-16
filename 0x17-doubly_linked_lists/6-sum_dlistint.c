#include "lists.h"
/**
 * sum_dlistint - sums all of the data
 * @head: a pointer to the beginning of the linked list
 *
 * Return: the sum of all the data or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}


#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: double pointer to the listint_t list
 * Return: the head node's data to be deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int num;

	if (head == NULL || (*head) == NULL)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}


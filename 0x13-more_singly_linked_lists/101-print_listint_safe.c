#include "lists.h"
/**
 * print_listint_safe - prints a listint_t list
 * @head: a pointer to the first node of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	size_t node_count = 0;

	while (temp != NULL && temp > temp->next)
	{
		printf("%d\n", temp->n);
		node_count++;
		temp = temp->next;
	}
	if (temp != NULL)
	{
		printf("%d\n", temp->n);
		exit(98);
	}
	return (node_count);
}



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
		printf("[%p] %d\n", temp, temp->n);
		node_count++;
		temp = temp->next;
	}
	if (temp != NULL)
	{
		printf("-> [%p] %d\n", temp, 98);
		exit;
	}
	return (node_count);
}



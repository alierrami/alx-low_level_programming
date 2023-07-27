#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 *@h: a pointer to list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t n = 0;

	while (current == NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		current = current->next;
		n++;
	}
	return (n);
}

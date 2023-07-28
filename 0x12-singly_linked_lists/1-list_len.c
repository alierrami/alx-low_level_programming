#include "lists.h"
/**
 *list_len - returns the number of elements in a list_t list
 *@h: pointer to a list_t list to print
 *Return: number of elements in a list_t list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		n++;
	}
	return (n);
}


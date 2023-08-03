#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to the list
 * Return: the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = *h;
	size_t len = 0;

	if (h == NULL || *h == NULL)
		return (0);

	while (temp != NULL)
	{
		free(temp);
		len++;
		temp = temp->next;
	}
	*h = NULL;
	return (len);
}




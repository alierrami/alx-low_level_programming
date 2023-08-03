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
	int diff;

	if (!h || !*h)
		return (0);

	while (temp != NULL)
	{
		diff = temp - temp->next;
		if (diff > 0)
		{
			temp = temp->next;
			free(temp);
			len++;
			temp = temp->next;
		}
		else
		{
			free(temp);
			temp = NULL;
			len++;
			break;
		}
	}

	*h = NULL;
	return (len);
}

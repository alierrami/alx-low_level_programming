#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to the list
 * Return: the size of the list to free
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = *h;
	size_t Num = 0;

	while (temp != NULL)
	{
		free(temp);
		Num++;
		temp = temp->next;
	}
	*h = NULL;
	return (Num);
}




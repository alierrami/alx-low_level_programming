#include "lists.h"
/**
 *add_node - adds a new node at the beginning of a list_t list
 *@head: pointer to pointer to lis_t list
 *@str : string to add to the node
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->str = strdup(str);
		newNode->len = strlen(str);
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
}


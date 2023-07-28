#include "lists.h"
/**
 *add_node_end - adds a new node at the end of a list_t list
 *@head: pointer to pointer to lis_t list
 *@str : string to add to the node
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = NULL;
		NULL = newnode;
		return (newnode);
	}
}


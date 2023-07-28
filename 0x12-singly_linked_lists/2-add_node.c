#include "lists.h"

/**
 *add_node - function that adds a new node at the beginning of a list_t list.
 *@head: pointer to a pointer
 *@str : pointer to a string.
 *Return: list_t
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

#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the first element of a listint_t list
 * @idx: index of position to insert the new node
 * @n: the integer to add
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

unsigned int i;
listint_t *newNode;
listint_t *current = *head;
newNode = malloc(sizeof(listint_t));

if (newNode == NULL)
return (NULL);

if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}

for (i = 1; i < idx; i++)
{
if (current != NULL)
{
current = current->next;
}
else
{
return (NULL);
break;
}
}
newNode->n = n;
newNode->next = current->next;
current->next = newNode;
return (newNode);
}

#include "lists.h"

/**
 *print_list - function that prints all the elements of a list_t list.
 *@h: pointer to a list_t
 *
 *Return: return size_t.
 */

size_t print_list(const list_t *h)
{
size_t n = 0;
const list_t *current = h;

while (current != NULL)
{
if (current->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", current->len, current->str);
}
current = current->next;
n++;
}
return (n);
}

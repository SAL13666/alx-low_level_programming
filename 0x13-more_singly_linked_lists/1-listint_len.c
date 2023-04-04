#include "lists.h"
/**
 * listint_len - function that return the count of nodes
 * @h: the root of linked list
 * Return: the count of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}



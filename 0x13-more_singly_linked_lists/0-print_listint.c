#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that print the node value and count
 * @h: the root of linked list
 * Return: the count of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}


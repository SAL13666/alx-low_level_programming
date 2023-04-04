#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a nodes of linked list
 * @head: a double pointer to the root
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *next_node;

if (head == NULL)
return;
while (*head != NULL)
{
next = (*head)->next;
free(*head);
*head = next;
}
}

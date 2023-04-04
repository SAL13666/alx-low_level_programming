#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end- function that add node to the back of the list
 * @head: the root of linked list
 * @n: the value of the node
 * Return: the count of nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *temp;
if (head == NULL)
return (NULL);
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
temp = *head;
while (temp != NULL)
{
if (temp->next == NULL)
{
temp->next = new_node;
break;
}
temp = temp->next;
}
return (new_node);
}



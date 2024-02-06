#include "lists.h"
/**
 *add_nodeint - adds node to list
 *@head: pointer head of linked list
 *@n: n isn the commands to fill in the space
 *Return: malloce'd space in memory
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}

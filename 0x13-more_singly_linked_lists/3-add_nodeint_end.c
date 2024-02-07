#include "lists.h"
/**
*add_nodeint_end - adds node at the end of the list
*@head: pointer to the head of the list
*@n: info to fill the place with
*Return: listint_t
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (new  == NULL)
{
return (NULL);
}

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (*head);
}

while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
return (*head);
}

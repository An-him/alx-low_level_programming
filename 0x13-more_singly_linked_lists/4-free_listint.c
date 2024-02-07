#include "lists.h"
/**
*free_listint - frees a list
*@head: head of list
*Return: void
**/
void free_listint(listint_t *head)
{
listint_t *current = head;
listint_t *trav;

if (current == NULL)
{
return;
}

while (current != NULL)
{
trav = current->next;
free(current);
current = trav;
}
}

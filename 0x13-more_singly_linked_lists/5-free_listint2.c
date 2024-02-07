#include "lists.h"
/**
*free_listint2 - function removes a mode
*@head: head of l
*
*
*
**/
void free_listint2(listint_t **head)
{
listint_t *current = *head;
listint_t *trav;
while (current != NULL)
{
trav = current->next;
free(current);
current = trav;
}
*head = NULL;
}

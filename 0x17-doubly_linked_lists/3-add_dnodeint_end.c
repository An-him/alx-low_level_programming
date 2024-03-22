#include "lists.h"
/**
 *add_dnodeint_end - adds node to the end of list
 *@head: pointer to head
 *@n: data to appemd
 *Return: dll
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *New;
	dlistint_t *temp = *head;

	New = malloc(sizeof(dlistint_t));

	if (New == NULL)
	{
		return (NULL);
	}

	New->n = n;
	New->next = NULL;

	if (*head == NULL)
	{
		New->prev = NULL;
		*head = New;
		return (New);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
		temp->next = New;
		New->prev = temp;

	return (New);
}

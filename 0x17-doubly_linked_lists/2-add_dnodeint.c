#include "lists.h"
/**
 *add_dnodeint - adds node at the beginning
 *@head: head of list
 *@n: data to append
 *Return: dlistint_t
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *New_;

	New_ = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (New_ == NULL)
	{
		return (NULL);
	}
	New_->n = n;
	New_->next = (*head);
	New_->prev = NULL;

	if (*head)
	{
		(*head)->prev = New_;
	}

	(*head) = New_;

	return (New_);
}

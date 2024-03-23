#include "lists.h"
/**
 *sum_dlistint - gives result of data
 *@head: of the list
 *Return: int
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int result = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		result += temp->n;
		temp = temp->next;
	}
	return (result);
}

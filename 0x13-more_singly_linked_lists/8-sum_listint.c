#include "lists.h"
/**
 *sum_listint - returns sum of list
 *@head: pointer to head
 *Return: int
 **/
int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		result += temp->n;
		temp = temp->next;
	}
	return (result);
}

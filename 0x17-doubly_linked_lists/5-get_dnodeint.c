#include "lists.h"
/**
 *get_dnodeint_at_index - gets node at index
 *@head: head of node
 *@index: of nth node
 *Return: dlistint_t
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int iter;
	
	iter = 0;
	while (current != NULL)
	{
		if (iter == index)
		{
			return (current);
		}
	iter++;
	current = current->next;
	}

	return (NULL);
}

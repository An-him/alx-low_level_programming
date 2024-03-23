#include "lists.h"
/**
*free_list - function that frees a list_t list.
*@head: pointer to head
*Return: void
**/
void free_list(list_t *head)
{
	list_t *temp = NULL;

	temp = head;
	while (temp != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
		temp = head;
	}

}

#include "lists.h"
/**
*add_node_end - that adds a new node at the end of a list_t list
*@head: head pf node
*@str: string to append
*Return: Address of new element
**/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NewNode = NULL;
	list_t *temp = *head;

	if (str == NULL)
	{
		return (NULL);
	}
	NewNode = malloc(sizeof(list_t));
	if (NewNode == NULL)
	{
		return (NULL);
	}
	NewNode->str = strdup(str);
	NewNode->len =  strlen(NewNode->str);
	NewNode->next =  NULL;

	if (*head == NULL)
	{
		*head = NewNode;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = NewNode;
	return (NewNode);
}

#include "lists.h"
/**
*add_node - adds a new node at the beginning of a list_t list.
*@head: Reference of the first node in memory
*@str: string in question
*Return: Address to the new element
**/
list_t *add_node(list_t **head, const char *str)
{
	list_t *NewNode;

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
	NewNode->next = (*head);
	(*head) = NewNode;

	return (NewNode);
}

#include "lists.h"
/**
*free_list - function that frees a list_t list.
*@head: pointer to head
*Return: void
**/
void free_list(list_t *head)
{
free(head);
}

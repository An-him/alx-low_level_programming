#include "lists.h"
/**
*list_len - function return length of list
*@h: pointer to head of list
*Return: size_t
**/
size_t list_len(const list_t *h)
{
size_t length;
const list_t *temp = NULL;
temp = h;
while (temp != NULL)
{
length++;
temp = temp->next;
}
return (length);
}

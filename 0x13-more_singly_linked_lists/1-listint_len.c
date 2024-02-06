#include "lists.h"
/**
*listint_len - returns the number of elements in a linked listint_t list
*@h: pointer to head
*Return: Number of elements
**/
size_t listint_len(const listint_t *h)
{
size_t result;
result = 0;
while (h != NULL)
{
result++;
h = h->next;
}
return (result);
}

#include "lists.h"
/**
*print_listint - prints all elements of listint_t
*@h: pointer to head of list
*Return: Number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t result;
result = 0;
while (h != NULL)
{
printf("%i\n", h->n);
h = h->next;
result++;
}
return (result);
}

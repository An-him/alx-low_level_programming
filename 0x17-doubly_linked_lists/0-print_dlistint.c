#include "lists.h"
/**
*print_dlistint - prints contents of linked list
*@h: address of the head
*Return: size_t
**/
size_t print_dlistint(const dlistint_t *h)
{
	size_t Number_of_elements = 0;

	while (h)
	{
		printf("%i\n", h->n);
		Number_of_elements++;
		h = h->next;
	}
	return (Number_of_elements);
}


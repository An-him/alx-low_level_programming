#include "lists.h"
/**
 *dlistint_len - returns the number of elements in DLL
 *@h: pointer to head
 *Return: size_t
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t Number_of_elements = 0;

	while (h)
	{
		Number_of_elements++;
		h = h->next;
	}
	return (Number_of_elements);
}

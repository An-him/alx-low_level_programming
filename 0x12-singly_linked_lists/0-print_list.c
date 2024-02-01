#include "lists.h"
/**
*print_list - function prints the list
*@h: pointer head of the function
*Return: 0
**/
size_t print_list(const list_t *h)
{
size_t NumberOfNodes;
const list_t *temp = NULL;

NumberOfNodes = 0;
temp = h;

if (temp->str == NULL)
{
printf("[0] (nil)\n");
}
while (temp != NULL)
{
printf("[%i] %s\n", temp->len, temp->str);
temp = temp->next;
NumberOfNodes++;
}
return (NumberOfNodes);
}

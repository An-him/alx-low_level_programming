#include "dog.h"
/**
*free_dog - frees list
*@d: head of list
*Return: void
**/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}

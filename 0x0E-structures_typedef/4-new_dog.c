#include "dog.h"
/**
*new_dog -  function that creates a new dog.
*@name: name of dog
*@age: age in dog years
*@owner: Dog/Pet owner
*Return: Malloced space
**/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
dog = malloc(sizeof(struct dog));
if (dog == NULL)
{
return (NULL);
}
dog->name = strdup(name);
dog->age = age;
dog->owner = strdup(owner);
return (dog);
}

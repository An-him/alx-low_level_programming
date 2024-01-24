#include "dog.h"
/**
*init_dog - intializes the struct dog
*@name: name of the dog
*@age: age of the dog
*@owner: owner of the animal
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d-> owner = owner;
}

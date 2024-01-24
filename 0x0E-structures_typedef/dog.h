#ifndef DOG_H
#define DOG_H

/**
 * struct dog - stores dog.h data type definition
 * @name: dog's name
 * @age: dog's age in years
 * @owner: owner of dog
 * Description: stores dog's Identification fields
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

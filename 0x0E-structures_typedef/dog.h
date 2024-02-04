#ifndef DOG_H
#define DOG_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct dog - stores dog.h data type definition
 * @name: dog's name
 * @age: dog's age in years
 * @owner: owner of dog
 * Description: stores dog's Identification fields
 */
typedef struct dog
{
char *name;
float age;
char *owner;
}
dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

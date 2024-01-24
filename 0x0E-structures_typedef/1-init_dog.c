#include "dog.h"


/**
 * init_dog - a function that initialize the variables
 * @d: pointer to the struct
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 * Return: void
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

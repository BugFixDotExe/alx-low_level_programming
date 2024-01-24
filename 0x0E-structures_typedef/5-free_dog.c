#include "dog.h"
#include "stdlib.h"

/**
 * free_dog - a function that frees dogs
 * @d: a pointer to a struct of type dog_t
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}

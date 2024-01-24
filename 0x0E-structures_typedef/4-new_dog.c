#include "dog.h"
#include <string.h>

/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a pointee to the new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	if (name == NULL  || owner == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * strlen(name) + 1);
	if (new_dog->name == NULL)
		free(new_dog);
	strcpy(new_dog->name, name);

	new_dog->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
	}
	strcpy(new_dog->owner, owner);

	new_dog->age = age;
	return (new_dog);
}


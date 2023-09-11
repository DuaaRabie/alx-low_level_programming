#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creats varible of type dog
 * @name: the name value
 * @age: the age value
 * @owner: the owner value
 * Return: pointer to the dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}

	d->name = malloc(sizeof(char) * strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);

	return (d);
}

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

	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = strdup(owner);
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;

	return (d);
}

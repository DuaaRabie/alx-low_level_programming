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

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	if (name != NULL)
		d->name = strdup(name);
	else
		d->name = "";
	d->age = age;
	d->owner = strdup(owner);

	return (d);
}

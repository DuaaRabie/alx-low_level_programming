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
	char *dog_name = name;
	char *dog_owner = owner;

	(void) dog_name;
	(void) dog_owner;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = strdup(name);
	d->owner = strdup(owner);
	d->age = age;

	return (d);
}

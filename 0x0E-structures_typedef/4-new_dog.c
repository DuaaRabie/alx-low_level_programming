#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creats varible of type dog
 * @name: the name value
 * @age: the age value
 * @owner: the owner value
 * Return: pointer to the dog struct
 */
struct dog *new_dog(char *name, float age, char *owner)
{
	struct dog *d;
	char *dog_name = name;
	char *dog_owner = owner;
	(void) dog_name;
	(void) dog_owner;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free dog
 * @d: pointer to the dog variable
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

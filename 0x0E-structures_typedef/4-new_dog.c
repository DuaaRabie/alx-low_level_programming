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
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
/*	char *dog_name = name;
	char *dog_owner = owner;

*/	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

	return (d);
}

#include <stdio.h>
#include "dog.h"

/**
 * init_dog - creats varible of type dog
 * @d: pointer to the struct
 * @name: the name value
 * @age: the age value
 * @owner: the owner value
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		struct dog my_dog;

		d = &my_dog;
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

#include "dog.h"
#include <stdio.h>

/**
 * main - check thee code
 *
 * Return: 0
 */
int main(void)
{
	dog my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);

	return (0);
}

#include "main.h"

/**
 * print_name - prints name
 * @name: name string
 * @f: pointer to function used to print name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

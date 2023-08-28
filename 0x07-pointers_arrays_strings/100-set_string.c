#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to string address
 * @to: pointer to string
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}

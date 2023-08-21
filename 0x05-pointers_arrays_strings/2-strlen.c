#include "main.h"

/**
 * _strlen - compute the lenght of a string
 * @s: address of a string
 * Return: the length
 */
int _strlen(char *s)
{
	int count;
	int length = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		length += 1;
	}
	return (length);
}

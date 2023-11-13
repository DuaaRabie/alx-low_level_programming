#include "main.h"

/**
 * *_strcpy - copis the string including termination
 * @src: pointer of a string
 * @dest: pointer of buffer
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int count;
	int length = 0;

	for (count = 0; src[count] != '\0'; count++)
	{
		length += 1;
	}
	for (count = 0; count <= length; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}

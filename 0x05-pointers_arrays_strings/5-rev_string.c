#include "main.h"

/**
 * rev_string -  reverse a string
 * @s: address of a string
 * Return: nothing
 */
void rev_string(char *s)
{
	int count;
	char r;
	int length = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		length += 1;
	}
	for (count = length - 1; count > length / 2; count--)
	{
		r = s[count];
		s[count] = s[length - 1 - count];
		s[length - 1 - count] = r;
	}
}

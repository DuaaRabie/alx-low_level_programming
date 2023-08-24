#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: 0 equal
 * negative value if s1 is less than s2
 * positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int dif = 0;
	int i = 0;

	for (; (s1[i] != '\0' || s2[i] != '\0'); i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;
	}

	dif = s1[i] - s2[i];

	return (dif);
}

#include "main.h"

/**
 * strsum - count the sum of string
 * @str: pointer to string
 * Return: the sum
 */
int strsum(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		count += str[i];
		i++;
	}
	return (count);
}


/**
 * length - count the string length
 * @str: pointer to string
 * Return: the length
 */
int length(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count += 1;
	}
	return (count);
}


/**
 * _strcmp - compare two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: 0 equal
 * -15 s1 is less than s2
 *  15 s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int sum1 = strsum(s1);
	int sum2 = strsum(s2);
/*	int l1 = length(s1);
	int l2 = length(s2);*/
	int def = s1[0] - s2[0];

	if (sum1 == sum2)
	{
		return (0);
	}
	else if (sum1 < sum2)
	{
		return (def);
	}
	else
	{
		return (def);
	}
}

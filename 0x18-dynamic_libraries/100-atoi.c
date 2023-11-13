#include "main.h"

/**
 * _atoi - convert string to number
 * @s: address of a string
 * Return: nothing
 */
int _atoi(char *s)
{
	unsigned int n = 0;
	int sign = 1;
	int number;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);
	number = n * sign;

	return (number);
}

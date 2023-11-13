#include <stdio.h>
/**
 * _islower - checks lowercase characters
 * Return: 1 Success | 0 Faild
 * @c: the number to be checked
*/
int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
		return (0);
}

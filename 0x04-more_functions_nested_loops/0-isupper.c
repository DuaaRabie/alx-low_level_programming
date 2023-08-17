#include "main.h"
/**
 * _isupper - checks upper case characters
 * Return: 1 Success | 0 Faild
 * @c: the number to be checked
*/
int _isupper(int c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	else
		return (0);
}

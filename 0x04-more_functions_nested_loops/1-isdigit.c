#include "main.h"
/**
 * _isdigit - checks upper case characters
 * Return: 1 Success | 0 Faild
 * @c: the number to be checked
*/
int _isdigit(int c)
{
	if (c < 58 && c > 47)
	{
		return (1);
	}
	else
		return (0);
}

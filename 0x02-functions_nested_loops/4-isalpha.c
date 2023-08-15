#include <stdio.h>
/**
 * _isalpha - checks lowercase characters
 * Return: 1 Success | 0 Faild
 * @c: the number to be checked
*/
int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 66))
	{
		return (1);
	}
	else
		return (0);
}

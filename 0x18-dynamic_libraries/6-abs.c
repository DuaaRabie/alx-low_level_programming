#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *@i: the integet
 * Return: 0 success
*/
int _abs(int i)
{
	if (i < 0)
	{
		i *= -1;
		return (i);
	}
	else
	{
		return (i);
	}
}

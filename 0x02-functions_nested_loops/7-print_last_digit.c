#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: the number
 * Return: the value
*/
int print_last_digit(int n)
{
	int LastDigit;

	if (n < 0)
	{
		n = n * -1;
	}
	LastDigit = (n % 10);
	if (LastDigit < 0)
	{
		LastDigit *= -1;
	}
	_putchar(LastDigit + '0');
	return (LastDigit);
}

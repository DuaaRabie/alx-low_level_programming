#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 * main - check the code
 *
 * Return: 0
 */
int main(void)
{
	int r;
	int min = INT_MIN;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	print_last_digit(min);
	_putchar('\n');
	printf("%d\n",min);
	_putchar(8 + '0');
	return (0);
}

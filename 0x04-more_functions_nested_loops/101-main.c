#include "main.h"
#include <limits.h>

int main(void)
{
	int mini = INT_MIN;
	int maxi = INT_MAX;
	
	print_number(0);
	_putchar('\n');
	print_number(3);
	_putchar('\n');
	print_number(-1);
	_putchar('\n');
	print_number(10);
	_putchar('\n');
	print_number(-99);
	_putchar('\n');
	print_number(1024);
	_putchar('\n');
	print_number(-4096);
	_putchar('\n');
	print_number(maxi);
	_putchar('\n');
	print_number(mini);
	_putchar('\n');
	print_number(123456789);
	_putchar('\n');

	return (0);
}

#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 for Success
 */
int main(void)
{
	char output[] = "_putchar\n";
	int i;
	for (i=0; i<10; i++)
	{
		_putchar(output[i]);
	}
	return 0;
}

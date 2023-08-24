#include "main.h"

/**
 * print_buffer - print contents of a buffer
 * @b: the buffer
 * @size: size of the buffer
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%c", b[j]);
		}
		printf("\n");
	}
}

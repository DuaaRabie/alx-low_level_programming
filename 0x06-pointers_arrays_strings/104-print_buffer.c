#include "main.h"

/**
 * print_buffer - print contents of a buffer
 * @b: the buffer
 * @size: size of the buffer
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i, j, k;
	int count = 1;
	int c = 0;

	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%04x ", &b[i + c]);
			printf("%04x ", &b[j + 2 + c]);
			printf("%04x ", &b[j + 4 + c]);
			printf("%04x ", &b[j + 6 + c]);
			printf("%04x ", &b[j + 8 + c]);
			printf("%04x ", &b[j + 10 + c]);
			for (k = i * count; k <= 10; k++)
			{
				printf("%c", b[k]);
			}
			c += 10;
			count += 10;
		}
		printf("\n");
	}
}

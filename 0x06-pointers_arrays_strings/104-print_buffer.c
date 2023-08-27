#include "main.h"
#include <ctype.h>

/**
 * print_buffer - print contents of a buffer
 * @b: the buffer
 * @size: size of the buffer
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i, j, k, r;
	int count = 0, remain = size;

	for (i = 1; i <= 10; i++)
	{
		while (remain > 1)
		{
			j = 0;
			printf("%08x: ", 0 + count);
			for (k = 0; k < 10; k++)
			{
				if (remain == 0)
					break;
				if (remain > 0)
				{
					printf("%02x", b[count + k]);
					remain--;
					j++;
				}
				if (!(remain > 0))
				{
					for (r = k; r < 10; r++)
					{
						printf("  ");
					}
				}
				if (k % 2 == 1)
					printf(" ");
			}
			for (k = count; k < count + 10; k++, j--)
			{
				if (isprint(b[k]) && j > 0)
					printf("%c", b[k]);
				else if (iscntrl(b[k]) && j > 0)
					printf(".");
			}
			printf("\n");
			count += 10;
		}
	}
}

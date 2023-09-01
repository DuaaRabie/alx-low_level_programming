#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: starting address to copy memory to
 * @src: starting address to copy memory from
 * @n: the number of bytes to be copied
 * Return: the copied to address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}


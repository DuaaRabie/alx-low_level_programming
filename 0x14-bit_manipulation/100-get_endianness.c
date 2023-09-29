#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ch = (char *) &num;

	if (*ch != 1)
		return (0);
	else
		return (1);
}

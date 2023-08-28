#include "main.h"

/**
 * main - check the code
 *
 * Return: 0
 */
int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, '\0');

	if (f != NULL)
	{
		printf("%s\n", f);
	}

	return (0);
}

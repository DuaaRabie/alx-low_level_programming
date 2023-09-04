#include "main.h"

/**
 * main - check the code
 *
 * Return: 0
 */
int main(void)
{
	char *s;

	s = str_concat("Best", NULL);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}

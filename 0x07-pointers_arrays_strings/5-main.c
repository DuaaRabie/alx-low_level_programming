#include "main.h"

/**
 * main - check the code
 *
 * Return: 0
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "llos";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);

	return (0);
}

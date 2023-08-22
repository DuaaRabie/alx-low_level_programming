#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - check the code
 *
 * Return: 0
 */
int main(void)
{
	int password;

	srand(time(0));
	password = rand();
	printf("%d",password);
	return (0);
}

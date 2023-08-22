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
	int password[20];
	int count;

	for (count = 0; count < 20; count++)
	{
		srand(time(0));
		password[count] = rand() - RAND_MAX / 2;
	}
	return (0);
}

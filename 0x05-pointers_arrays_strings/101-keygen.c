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
	int sum;

	srand(time(NULL));
	while (sum < 2772)
	{
		password = rand() % 128;
		sum += password;
		putchar(password);
	}
	putchar(2772 - sum);
	return (0);
}

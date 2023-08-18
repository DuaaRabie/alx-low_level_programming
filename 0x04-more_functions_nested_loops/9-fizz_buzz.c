#include "main.h"
/**
 * main - prints numburs and fizzbuzz
 *
 * Return: 0
*/

int main(void)
{
	int i;
	int n = 1;

	for (i = 0; i < 100; i++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			if ((n % 3 == 0) && !(n % 5 == 0))
			{
				printf("Fizz");
			}
			else if (!(n % 3 == 0) && (n % 5 == 0))
			{
				printf("Buzz");
			}
			else if ((n % 3 == 0) && (n % 5 == 0))
			{
				printf("FizzBuzz");
			}
		}
		else
		{
			printf("%d", n);
		}

		n++;

		if (i != 99)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}

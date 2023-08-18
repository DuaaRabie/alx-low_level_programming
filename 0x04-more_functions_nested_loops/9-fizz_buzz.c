#include "main.h"
/**
 * fizz_buzz - prints numburs and fizzbuzz
 *
 * Return: void
*/
void fizz_buzz(void)
{
	int i;
	int n = 1;

	for (i = 0; i <= 99; i++)
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
		else
		{
			printf("%d", n);
		}
		n++;
		if (i != 99)
		{
			printf(" ");
		}
	}
	printf("\n");
}

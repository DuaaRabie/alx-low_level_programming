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
	int w = 8;
	char word[w]; 


	for (i = 0; i <= 99; i++)
	{
		if ((n % 3 ==0) || (n % 5 == 0))
		{
			if ((n % 3 == 0) && !(n % 5 == 0))
			{
				w = 4;
				word[] = "Fizz";
			}
			else if (!(n % 3 == 0) && (n % 5 == 0))
			{
				w = 4;
				word[] = "Buzz";
			}
			else if ((n % 3 == 0) && (n % 5 == 0))
			{
				word[] = "FizzBuzz"
			}
			printf("%s ", word);
		}
		else
		{
			printf("%d ", n);
		}
		n++
	}
	printf("\n");
}

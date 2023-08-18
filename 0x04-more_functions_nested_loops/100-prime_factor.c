#include "main.h"
/**
 * sq - find square root
 * @num: the number need to find root for
 * Return: square root of num
 */
double sq(double num)
{
	float sqrt, tmp;

	sqrt = num / 2;
	tmp = 0;
	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (num / tmp + tmp) / 2;
	}

	return (sqrt);
}



/**
 * largest_prime_factor - prints the largest prime number
 * @n: the number
 * Return: void
 */

void largest_prime_factor(long int n)
{
	int prime, lprime;

	while (n % 2 == 0)
	{
		n = n / 2;
	}

	for (prime = 3; prime <= sq(n); prime += 2)
	{
		while (n % prime == 0)
		{
			n = n / prime;
			lprime = prime;
		}
	}

	if (n > 2)
	{
		lprime = n;
	}
	printf("%d\n", lprime);
}


/**
 * main - Entry point
 *
 * Return: 0 success
 */

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}


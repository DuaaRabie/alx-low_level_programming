 #include "main.h"

/**
 * check_prime - check if n is a multiple of a number between 2 and n - 1
 * @n: the number to be checked
 * @div: the divided number between 2 and n - 1
 * Return: 1 if n is a prime number otherwise 0
 */
int check_prime(int n, int div)
{
	if (n % div == 0)
		return (0);
	div--;
	if (div > 1)
		return (check_prime(n, div));
	return (1);
}
/**
 * is_prime_number - check if the number is a prime number or not
 * @n: the number to be checked
 * Return: 1 if n is a prime number otherwise 0
 */
int is_prime_number(int n)
{
	int div = n - 1;

	if (n < 0)
		return (1);
	if (n == 0 || n == 1)
		return (0);
	return (check_prime(n, div));
}

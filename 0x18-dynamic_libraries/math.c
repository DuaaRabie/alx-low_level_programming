#include "math.h"

/**
 * add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: summation result
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtract two integers
 * @a: first integer
 * @b: second integer
 * Return: subtraction result
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply two integers
 * @a: first integer
 * @b: second integer
 * Return: multiplication result
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divide two integers
 * @a: first integer
 * @b: second integer
 * Return: division result
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (-1);
	}
	return (a / b);
}

/**
 * mod - mod two integers
 * @a: first integer
 * @b: second integer
 * Return: mod result
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (-1);
	}
	return (a % b);
}

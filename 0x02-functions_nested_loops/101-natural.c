#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
*/
int main(void)
{
	int multi3;
	int multi5;
	int sum = 0;

	for (multi3 = 0; multi3 < 1024; multi3++)
	{
		if (multi3 % 3 == 0)
		{
			sum += multi3;
		}
	}
	for (multi5 = 0; multi5 < 1024; multi5++)
	{
		if (multi5 % 5 == 0 && multi5 % 3 != 0)
		{
			sum += multi5;
		}
	}
	printf("%d\n", sum);
	return (0);
}

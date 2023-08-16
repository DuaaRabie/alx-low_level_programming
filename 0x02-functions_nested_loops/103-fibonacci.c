#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
*/
int main(void)
{
	unsigned long long f1 = 0;
	unsigned long long f2 = 1;
	unsigned long long f = 0;
	unsigned long long = i;

	while(f <= 4000000)
	{
		f = f1 + f2;
		printf("%lu", f);
		f1 = f2;
		f2 = f;
		if (f % 2 == 1)
		{
			printf("f");
		}
		if (f = 4000000)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}

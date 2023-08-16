#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
*/
int main(void)
{
	unsigned long f1 = 0;
	unsigned long f2 = 1;
	unsigned long f = 0;
	unsigned long sum = 0;

	while(f <= 4000000)
	{
		f = f1 + f2;
		if (f % 2 == 0)
		{
			sum += f;
		}
		f2 = f;
		f1 = f2;
	}
	printf("%lu\n",sum);
	return (0);
}

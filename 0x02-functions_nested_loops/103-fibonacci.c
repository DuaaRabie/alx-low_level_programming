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
	unsigned long f = f1 + f2;
	float sum = 0;

	while (f <= 4000000)
	{
		if ((f % 2) == 0)
		{
			sum += f;
		}
		f2 = f;
		f1 = f2;
	}
	printf("%.0f\n", sum);
	return (0);
}

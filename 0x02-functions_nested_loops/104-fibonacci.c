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
	unsigned long f;
	float sum = 0;

	while (1)
	{
		f = f1+ f2;
		if (f <= 4000000)
		{
			if ((f % 2) == 0)
			{
				sum += f;
			}
		f2 = f;
		f1 = f2;
		}
		else
		{
			return (0);
		}
	}
	printf("%.0f\n", sum);
	return (0);
}

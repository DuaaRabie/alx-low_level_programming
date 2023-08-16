#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
*/
int main(void)
{
	int f1 = 0;
	int f2 = 1;
	int f;

	for (f = 1;  f <= 50; f++)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		printf("%d", f);
		if (f == 50)
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

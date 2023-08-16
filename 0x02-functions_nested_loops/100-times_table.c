#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table
 *
 * Return: void
*/
void print_times_table(int n)
{
	int i ;
	int j ;
	int k ;

	if (!(n > 15 || n < 0 ))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i;
				if (k > 99)
				{
					printf(" %d",k);
				}
				else if (k > 9)
				{
					printf("  %d",k);
				}
				else
				{
					if (!(j == 0))
					{
						printf("   %d",k);
					}
					else
					{
						printf("%d",k);
					}
				}
				if (j != n)
				{
					printf(",");
				}
			}
			printf("\n");
		}		
	}
}

#include <stdio.h>

int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;
	p = a + 1;
	*p = 98;
	p2 = a + 3;
	*p2 = *p + 1337;
	printf("a[1]: %d\n", *p);
	printf("a[3]: %d\n", *p2);
	return (0);
}

#include <stdio.h>

int main(void)
{
int n;
int *p;

n = 98;
p = &n;

printf("Address of 'n': %p\n", &n);
printf("Value of 'p': %p\n", p);

return (0);
}
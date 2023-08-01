#include <stdio.h>

int main(void)
{
	int a[5] = {98, 402, 1024, 0, -98};
	int *p;

	p = a + 2;
	printf("a[2] = %d\n", *(p));
	return (0);
}


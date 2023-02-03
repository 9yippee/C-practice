#include <stdio.h>

int main()
{
	int i = 10;
	int* p;
	p = &i;
	printf("i = %d\n", i);
	printf("%d\n", p);
	*p = 20;
	printf("i = %d\n", i);
	printf("%d", p);
	
	return 0;

}
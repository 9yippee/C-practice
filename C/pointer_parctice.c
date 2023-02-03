#include <stdio.h>

int main()
{
	int a = 70;
	int* b;
	b = &a;
	printf("%d\n", b);
	printf("%d", *b);
	return 0;

}
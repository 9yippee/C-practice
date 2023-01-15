#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a;
	int N = 1;

	scanf("%d", &a);
	for (int i = 2; i <= a; i++)
	{
		N *= i;
	}
	printf("%d", N);
	return 0;
}
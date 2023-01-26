#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int j = i; j <= a - 1; j++)
			printf("*");

		printf("\n");
	}
	return 0;
}
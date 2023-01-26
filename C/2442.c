#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	
	int a;
	scanf("%d", &a);
	for (int i = 1; i < a + 1; i++)
	{
		for (int j = i; j < a; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= i * 2 - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;

}
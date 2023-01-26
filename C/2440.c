#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		for (int j = i; j < a; j++)
		{
			printf("*");
		}
		/*for (int k = 0; k <= i; k++)
		{
			printf(" ");
		}*/
		printf("\n");
	}
	return 0;

}
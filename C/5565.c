#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a, b;
	int c = 0; // 알고 있는 책의 가격
	scanf("%d", &a);

	for (int i = 1; i <= 9; i++)
	{
		scanf("%d", &b);
		c += b;
	}
	printf("%d", a - c);

	return 0;
}
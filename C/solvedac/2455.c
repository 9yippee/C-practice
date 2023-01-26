#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a, b; // 초기 a는 내린 사람 수, b는 탄 사람 수
	int max = 0;
	int x = 0;

	for (int i = 0; i < 4; i++)
	{
		scanf("%d %d", &a, &b);
		max += -a + b;
		if (max > x)
			x = max;
	}
	printf("%d", x);
	return 0;
}
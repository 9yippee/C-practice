#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int N, num;
	int min = 1000000, max = -1000001;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		if (num > max) max = num;
		if (num < min) min = num;
	}
	printf("%d %d", min, max);
}
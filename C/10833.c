#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int N;
	int a, b, c;
	int d = 0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		scanf("%d %d", &a, &b);
		c = b % a;
		d += c;
	}
	printf("%d", d);
}
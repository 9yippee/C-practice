#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int N, M;
	scanf("%d %d", &N, &M);

	if (N > M)
	{
		if (N == M * M) printf("%d * %d = %d", M, M, N);
		else printf("none");
	}
	else if (N < M)
	{
		if (M == N * N) printf("%d * %d = %d", N, N, M);
		else printf("none");
	}
}
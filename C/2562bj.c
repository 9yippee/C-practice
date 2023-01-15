#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int N;
	int max = 0;
	int index = 0;

	for (int i = 1; i <= 9; i++)
	{
		scanf("%d", &N);
		if (N > max) {
			max = N;
			index = i;
		}

	}

	printf("%d\n", max);
	printf("%d", index);

	return 0;
}
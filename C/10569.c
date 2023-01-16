#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
int main()
{
	int a;
	int V, E;
	scanf("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		scanf("%d %d", &V, &E);
		if (V > E) printf("%d\n", V - E + 2);
		else printf("%d\n", E - V + 2);
	}
	return 0;
}
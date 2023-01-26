#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a, b, c;
	while (1)
	{
		scanf("%d %d %d", &a, &b, &c);
		int n1, n2, n3;
		n1 = a * a, n2 = b * b; n3 = c * c;

		if (a == 0 && b == 0 && c == 0) break;
		
		if (n1 + n2 == n3 || n1 + n3 == n2 || n2 + n3 == n1) printf("right\n");
		else printf("wrong\n");
	}
	
	return 0;
}
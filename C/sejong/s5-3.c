#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a, b, c, d, e;
	int num = 0;

	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	if (a > 0) num += a;
	if (b > 0) num += b;
	if (c > 0) num += c;
	if (d > 0) num += d;
	if (e > 0) num += e;
	printf("%d", num);
	
	return 0;
}
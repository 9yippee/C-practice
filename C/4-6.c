#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
	{
		if (b > c) printf("%d", b);
		else printf("%d", c);
	}
	if (b > a && b > c)
	{
		if (a > c) printf("%d", a);
		else printf("%d", c);
	}
	if (c > a && c > b) {
		if (a > b) printf("%d", a);
		else printf("%d", b);
	}
}
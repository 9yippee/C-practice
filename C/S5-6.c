#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c)
	{
		if (b > c) printf("%d %d", a, c);
		else printf("%d %d", a, b);
	}
	if (b > c && b > a)
	{
		if (a > c) printf("%d %d", b, c);
		else printf("%d %d", b, a);
	}
	if (c > a && c > b)
	{
		if (b > a) printf("%d %d", c, a);
		else printf("%d %d", c, b);
	}
}
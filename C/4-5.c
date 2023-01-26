#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a;
	int b, c, d, e;
	scanf("%d", &a);

	b = a / 100;
	c = a / 10 % 10;
	d = a % 10;

	if (b > c && b > d) printf("%d", b);
	else if (c > b && c > d) printf("%d", c);
	else if (d > c && b < b) printf("%d", d);
}
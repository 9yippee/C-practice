#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	double a, b;
	scanf("%lf %lf", &a, &b);
	if (a > b) printf("%.0lf", a - b);
	else printf("%.0lf", b - a);

}
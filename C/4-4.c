#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a, b, c, d, e;
	int reverse = 0;
	scanf("%d", &a);
	b = a % 10; //1의 자리 수
	c = a % 100 / 10; // 10의 자리수 
	d = a / 100 % 10; // 100의 자리수
	e = a / 1000; // 1000의 자리수

	reverse = (b * 1000 + c * 100 + d * 10 + e);
	if (a > reverse) printf("%d", a - reverse);
	else printf("%d", reverse - a);

	return 0;
}
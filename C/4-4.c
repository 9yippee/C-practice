#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a, b, c, d, e;
	int reverse = 0;
	scanf("%d", &a);
	b = a % 10; //1�� �ڸ� ��
	c = a % 100 / 10; // 10�� �ڸ��� 
	d = a / 100 % 10; // 100�� �ڸ���
	e = a / 1000; // 1000�� �ڸ���

	reverse = (b * 1000 + c * 100 + d * 10 + e);
	if (a > reverse) printf("%d", a - reverse);
	else printf("%d", reverse - a);

	return 0;
}
#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a, b; // �ʱ� a�� ���� ��� ��, b�� ź ��� ��
	int max = 0;
	int x = 0;

	for (int i = 0; i < 4; i++)
	{
		scanf("%d %d", &a, &b);
		max += -a + b;
		if (max > x)
			x = max;
	}
	printf("%d", x);
	return 0;
}
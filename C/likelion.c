#include <stdio.h>
#pragma warning (disable:4996)

int	ft_calculate(int a, int b);

int	ft_calculate(int a, int b)
{
	int sum_num, sub_num, multi_num;
	float div_num;

	sum_num = a + b;
	sub_num = a - b;
	multi_num = a * b;
	div_num = (float)a / b;
	
	printf("%d + %d = %d\n", a, b, sum_num);
	printf("%d - %d = %d\n", a, b, sub_num);
	printf("%d * %d = %d\n", a, b, multi_num);
	printf("%d / %d = %.1f", a, b, div_num);
	
	return (0);
}

int main()
{
	int a, b;

	printf("ù ��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("�� ��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &b);
	
	ft_calculate(a, b);
	
	return (0);
}



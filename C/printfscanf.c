#include <stdio.h>
#pragma warning (disable:4996)
int main(void)
{
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d", age);*/

	//printf
	//����
	/*int add = 3 + 7;
	printf("3 + 7 = %d\n", add);
	printf("%d x %d = %d\n", 30, 70, 30 * 70);*/

	//scanf
	//Ű���� �Է��� �޾Ƽ� ����
	/*int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է��� �� : %d\n", input);
	*/

	/*int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù ��° �� : %d\n", one);
	printf("�� ��° �� : %d\n", two);
	printf("�� ��° �� : %d\n", three);
	*/

	//����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
	/*char c = 'A';
	printf("%c\n", c);
	*/

	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);
	*/

	char name[256];
	printf("�̸��� ������ ? :");
	scanf("%s", name);

	int age;
	printf("�� ���̿��� ? :");
	scanf("%d", &age);

	float weight;
	printf("�����Դ� �� kg �̿���? :");
	scanf("%f", &weight);

	double height;
	printf("Ű�� �� cm �̿��� ? :");
	scanf("%lf", &height);

	char what[256];
	printf("���� ���˸� ��������� ? :");
	scanf("%s", what);

	// ���� ���� ���

	printf(" \n\n--- ������ ���� ---\n\n");
	printf(" �̸�		: %s\n", name);
	printf(" ����		: %d\n", age);
	printf(" ������		: %.2f\n", weight);
	printf(" Ű		: %.2lf\n", height);
	printf(" ���� ����	: %s\n", what);




	return 0;
}
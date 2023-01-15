#include <time.h>
#pragma warning (disable:4996)

#include<stdlib.h>
#include<stdio.h>
int main_condition()
{
	/*int age = 15;
	if (age >= 20) printf("�Ϲ��� �Դϴ�");
	else printf("�л��Դϴ�");*/

	// < if, else if, else >

	/*int age = 8;
	if (age >= 8 && age <= 13) printf("�ʵ��л�");
	else if (age >= 14 && age <= 16) printf("���л�");
	else if (age >= 17 && age <= 19) printf("�����л�");
	else printf("�л� x");*/

	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("�������� ���� ������");
			break;
		}
		printf("%d�� �л��� ��ǥ �غ� �ϼ���\n", i);
	}*/

	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d�� �л��� �Ἦ�Դϴ�\n", i);
				continue;
			}
			printf("%d�� �л��� ��ǥ �غ� �ϼ���\n", i);

		}
	}*/

	// || �� or �� �� �� �ϳ��� ���̸� ok
	// && �� and �� �� �� ���̾�� ok


		//srand(time(NULL)); // ���� �ʱ�ȭ 
		//int num = rand() % 3 + 1; // 1 ~ 3
		//return 0;

		/*printf("���� �ʱ�ȭ ���� ..\n");
		for (int i = 0; i < 10; i++) printf("%d", rand() % 10);

		srand(time(NULL));

		printf("\n\n���� �ʱ�ȭ ���� ..\n");
		for (int i = 0; i < 10; i++) printf("%d", rand() % 10);*/
		/*srand(time(NULL));
		int i = rand() % 3;
		switch (i)
		{
		case 0:printf("����\n"); break;
		case 1:printf("����\n"); break;
		case 2:printf("��\n"); break;
		default:printf("�����\n"); break;
		}*/

	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("���� = %d\n", num);
	int answer = 0;
	int chance = 5;
	while (chance > 0)
	{
		printf("\n���� ��ȸ : %d��\n", chance--);
		printf("���ڸ� ����������(1~100) :");
		scanf("%d", &answer);
		if (answer < num)
		{
			printf("UP\n");
		}
		else if (answer > num)
		{
			printf("DOWN\n");
		}
		else if (answer == num)
		{
			printf("����");
			break;
		}
		else
		{
			printf("�� �� ���� ���� �߻�");
		}
		if (chance == 0)
		{
			printf("\n��ȸ�� ��� ���, �ƽ����ϴ�");
		}

	}
	return 0;
}
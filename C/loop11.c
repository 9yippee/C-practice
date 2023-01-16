//반복문
//for, while, do while

#include <stdio.h>
#pragma warning (disable:4996)

int main_loopp()
{
	//****for (선언; 조건; 증감)
	/*for (int i = 1; i <= 10; i++)
	{
		printf("dd %d\n", i);

	}*/



	//****while (조건)
	/*int i = 1;
	while (i <= 10) {
		printf("gg %d\n", i++);
	}
*/


//****do {} while (조건);

/*int i = 1;
do {
	printf("aaa %d\n", i);
	i++;
} while (i <= 10);*/



//****2중 반복문
/*for (int i = 1; i <= 3; i++)
{
	printf("a : %d\n", i);

	for (int j = 1; j <= 5; j++) {

		printf("    b : %d\n", j);
	}
}*/

/*for (int i = 2; i <= 9; i++)
{
	printf("%d단 계산\n", i);
	for (int j = 1; j <= 9; j++)
	{
		printf("  %d x %d = %d\n", i, j, i*j);
	}
}*/

/*for (int i = 0; i < 5; i++)
{
	for (int j = 0; j <= i; j++)
	{
		printf("*");
	}
	printf("\n");
}*/


/*for (int i = 0; i < 5; i++)
{
	for (int j = i; j < 5 - 1; j++)
	{
		printf(" ");
	}
	for (int k = 0; k <= i; k++)
	{
		printf("*");
	}
	printf("\n");
}*/


	int floor;
	printf("층 수 : ");
	scanf("%d", &floor);
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < floor - 1; j++)
		{
			printf(" ");

		}
		for (int k = 0; k <= i * 2 + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
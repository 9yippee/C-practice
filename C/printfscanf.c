#include <stdio.h>
#pragma warning (disable:4996)
int main(void)
{
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d", age);*/

	//printf
	//연산
	/*int add = 3 + 7;
	printf("3 + 7 = %d\n", add);
	printf("%d x %d = %d\n", 30, 70, 30 * 70);*/

	//scanf
	//키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력한 값 : %d\n", input);
	*/

	/*int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫 번째 값 : %d\n", one);
	printf("두 번째 값 : %d\n", two);
	printf("세 번째 값 : %d\n", three);
	*/

	//문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	/*char c = 'A';
	printf("%c\n", c);
	*/

	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);
	*/

	char name[256];
	printf("이름이 뭐에요 ? :");
	scanf("%s", name);

	int age;
	printf("몇 살이에요 ? :");
	scanf("%d", &age);

	float weight;
	printf("몸무게는 몇 kg 이에요? :");
	scanf("%f", &weight);

	double height;
	printf("키는 몇 cm 이에요 ? :");
	scanf("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요 ? :");
	scanf("%s", what);

	// 조사 내용 출력

	printf(" \n\n--- 범죄자 정보 ---\n\n");
	printf(" 이름		: %s\n", name);
	printf(" 나이		: %d\n", age);
	printf(" 몸무게		: %.2f\n", weight);
	printf(" 키		: %.2lf\n", height);
	printf(" 범죄 정보	: %s\n", what);




	return 0;
}
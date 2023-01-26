#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int N;
	char arr[100] = { 0, };
	int sum = 0;
	
	scanf("%d", &N);
	scanf("%s", &arr);
	
	for (int i = 0; i < N; i++)
	{
		sum += arr[i] - '0';
	}
	printf("%d", sum);

}
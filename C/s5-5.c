#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int N;
	scanf("%d", &N);
	if ((N % 2 == 0) && (N % 3 == 0) && (N % 5 == 0)) printf("A");
	else if (((N % 2 == 0) && (N % 3 == 0)) && (N % 5 != 0)) printf("B");
	else if (((N % 2 == 0) && (N % 5 == 0)) && (N % 3 != 0)) printf("C");
	else if (((N % 5 == 0) && (N % 3 == 0)) && (N % 2 != 0)) printf("D");
	else if ((N % 2 == 0) && ((N % 3 != 0) && (N % 5 != 0)) || 
		(N % 3 == 0) && ((N % 2 != 0) && (N % 5 != 0)) || (N % 5 == 0) && ((N % 3 != 0) && (N % 2 != 0)))
		printf("E");
	else printf("N");
}
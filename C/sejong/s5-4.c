#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	char a;
	scanf("%c", &a);
	if (a >= 'A' && a <= 'Z') printf("%c", a - 'A' + 'a');
	else if(a >= 'a' && a <= 'z') printf("%c", a - 'a' + 'A');
	else printf("none");
	return 0;
}
#include <stdio.h>
#pragma warning (disable:4996)
int swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}


int main()
{
	int x = 1;
	int y = 2;
	swap(&x, &y);
	printf("x = %d \ny = %d", x, y);
	
	return 0;

}
#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
    int n;
    int num, count = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        for (int j = 2; j <= num; j++)
        {
            if (num == j)
                count++;
            if (num % j == 0)
                break;
        }
    }

    printf("%d", count);
}
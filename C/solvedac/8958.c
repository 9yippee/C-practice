#include <stdio.h>
#pragma warning (disable:4996)
#include <string.h>
int main()
{
	int t, sum, score;
	char str[80];
	
	scanf("%d", &t);
	
	for (int i = 0; i < t; i++)
	{
		sum = 0;
		score = 1;
		scanf("%s", &str);
		for (int j = 0; j < strlen(str); j++)
		{
			if (str[j] == 'O')
			{
				sum += score;
				score++;
			}
			if (str[j] == 'X') score = 1;
		}
		printf("%d\n", sum);
	}
}
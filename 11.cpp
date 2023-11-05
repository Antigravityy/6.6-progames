#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char num[10];
	int n;
	printf("Please input 8 numbers:\n");
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("Ok,the reverse num is :\n");
	for (int i = 7; i >= 0; i--)
	{
		printf("%d ", num[i]);
	}
	printf("\nDone!\n");
	return 0;
}
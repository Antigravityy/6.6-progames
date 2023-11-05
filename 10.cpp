#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int top, low, sum=0;
	printf("Enter lower and upper integer limits:");
	scanf("%d %d", &low, &top);
	while (low < top)
	{
		for (int i = low; i <= top; i++)
			sum += i * i;
		printf("The sum of the squares form %d to %d is %d\n",
			low * low, top * top, sum);
		printf("Enter lower and upper integer limits:");
		scanf("%d %d", &low, &top);
	}
	printf("Done!");
	return 0;
}
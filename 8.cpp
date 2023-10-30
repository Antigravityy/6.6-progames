#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	float num1, num2, all;
	printf("Please input two numbers:\n");
	while (scanf("%f %f", &num1, &num2) == 2)
	{
		all = (num1 - num2) / (num1 * num2);
		printf("%.4f\n", all);/*如果考虑内存大小可以不定义all*/
		printf("Please input next two numbers(input 'q'to quit):\n");
	}
	printf("\n");
	return 0;

}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float sum(float num1, float num2);
int main(void)
{
	float num1, num2;
	printf("Please input two numbers:\n");
	while (scanf("%f %f", &num1, &num2) == 2)
	{
		printf("%.4f\n", sum(num1,num2));/*调用函数的返回值*/
		printf("Please input next two numbers(input 'q'to quit):\n");
	}
	printf("\n");
	return 0;
}
float sum(float num1, float num2)
{
	float all;
	all = (num1 - num2) / (num1 * num2);
	return all;
}
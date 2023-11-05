#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int t;
	float fm = 1.0;
	double sum = 0;
	printf("Please input the times(0 to over):");
	scanf("%d", &t);
	while (t > 0)
	{
		sum = 0.0;
		for (int n = 1; n <= t; n++)/*计算1.0+1.0/2.0+1.0/3.0+1.0/4.0+...的总和*/
		{
			sum = sum + 1.0 / fm;
			fm++;/*为什么用fm和用n的结果不同*/
		}
		printf("The sum is %lf\n", sum);

		sum = 0.0;
		fm = 1.0;
		for (int n = 1; n <= t; n++)/*计算1.0-1.0/2.0+1.0/3.0-1.0/4.0+...的总和*/
		{
			if (n % 2 != 0)
				sum += 1.0 / n;
			else
				sum -= 1.0 / n;
		}
		printf("The sum is %lf\n", sum);
		printf("Please input the times(0 to over):");
		scanf("%d", &t);
	}
	printf("Done!\n");

	return 0;
}
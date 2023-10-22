/*思路：整个金字塔分为三个板块代码（空格、正序、逆序）*/
#define _CRT_SECURE_NO_WARNINGS/*嵌套循环，金字塔*/
#include<stdio.h>
int main(void)
{
	char ch;
	int i, j, k, l;
	printf("Please input a letter:");
	scanf("%c", &ch);
	for (i = 1; i <= 5; i++)
	{
		for (j = 5; j > i; j--)/*控制金字塔形状，不足空格补充*/
			printf(" ");
		for (k = 1; k < i; k++)/*正序打印*/
			printf("%c", ch++);
		for (l = 0; l < i; l++, ch--)/*逆序打印，最后会多减一次*/
			printf("%c", ch);
		ch++;/*加回来*/
		
		printf("\n");

	}
	return 0;
}
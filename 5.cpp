/*˼·��������������Ϊ���������루�ո���������*/
#define _CRT_SECURE_NO_WARNINGS/*Ƕ��ѭ����������*/
#include<stdio.h>
int main(void)
{
	char ch;
	int i, j, k, l;
	printf("Please input a letter:");
	scanf("%c", &ch);
	for (i = 1; i <= 5; i++)
	{
		for (j = 5; j > i; j--)/*���ƽ�������״������ո񲹳�*/
			printf(" ");
		for (k = 1; k < i; k++)/*�����ӡ*/
			printf("%c", ch++);
		for (l = 0; l < i; l++, ch--)/*�����ӡ��������һ��*/
			printf("%c", ch);
		ch++;/*�ӻ���*/
		
		printf("\n");

	}
	return 0;
}
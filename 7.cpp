#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
int main(void)
{
	char word[30];
	printf("Please input a word:");
	scanf("%s", word);
	printf("The word you input is :");
	printf("%s\n", word);
	for (int i = strlen(word) - 1; i >= 0; i--)
	{
		printf("%c", word[i]);
		/*���ڴ�ӡ������������ʴ�ӡ��
		�����%c�ַ���ת��˵��*/
	}
	printf("\n");
	return 0;
}
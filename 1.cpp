/*��26����ĸ�ŵ�26��Ԫ�ص����飬Ȼ��һһ��ӡ*/
#include<stdio.h>
#define LETTERS 26
int main(void)
{
	char ch[LETTERS];
	char letter = 'A';
	int first;
	for (first = 0; first < LETTERS; first++, letter++)
		ch[first] = letter;
	for (first = 0; first < LETTERS;first++ )
		printf("%c ", ch[first]);
	printf("\n");
	return 0;
}
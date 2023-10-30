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
		/*由于打印逆序是逐个单词打印，
		因此用%c字符的转换说明*/
	}
	printf("\n");
	return 0;
}
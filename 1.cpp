/*把26个字母放到26个元素的数组，然后一一打印*/
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
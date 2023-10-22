/*Ç¶Ì×Ñ­»·*/
#include<stdio.h>
int main(void)
{
	int i, j;
	char ch1;
	for (i = 1; i <= 6; i++)
	{
		for (j = 0,ch1='F'; j < i; j++, ch1--)
			printf("%c", ch1);
		printf("\n");
	}

	return 0;
}
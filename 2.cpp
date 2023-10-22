/*Ç¶Ì×Ñ­»·*/
#include<stdio.h>
int main(void)
{
	int l, h;

	for (l = 1; l <= 5; l++)
	{
		for (h = 1; h <= l; h++)
			printf("$");
		printf("\n");
	}
	return 0;
}
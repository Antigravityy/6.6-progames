#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int min, max;
	printf("Please enter two numbers as lower limit and top limit:\n");
	scanf("%d %d", &min,&max);
	printf("   Ori:    Square:      Cubic:\n");
	for (; min <= max;min++)
	{
		printf("%6d  %10d  %10d\n", min, min * min, min * min * min);
	}

	return 0;
}
#include<stdio.h>
int main(void)
{
	int data[8];
	data[1] = 2;
	for (int i = 2; i <= 8; i++)
	{
		data[i] = data[i - 1] * 2;
	}
	int i=1;
	do
	{
		printf("The data[%d] = %d\n", i, data[i]);
	} while (i++ < 8);

	return 0;
}
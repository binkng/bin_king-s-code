#include<stdio.h>
int main()
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	for (j = 0; j < 10; j++)
	{
		printf("%d", j + 1);
	}
	return 0;
}
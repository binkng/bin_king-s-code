#include<stdio.h>
void Print(int a)
{
	int b = 0;
	b = a % 10;
	if(a>9)
	Print(a / 10);
	printf("%d ", b);
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	Print(i);
	return 0;
}
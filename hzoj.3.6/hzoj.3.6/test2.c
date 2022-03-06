#include<stdio.h>
int Sum(int n)
{
	if (n <=0)
		return 0;
	else
		return Sum(n - 1) + n;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret=Sum(n);
	printf("%d", ret);
	return 0;
}
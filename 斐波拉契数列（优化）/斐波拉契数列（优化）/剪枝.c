#include<stdio.h>
int vis[20] = { 0 };
int Fib(int n)
{
	if (n == 1)
		return 1;
	if (n == 0)
		return 0;
	if (vis[n] != 0)
		return vis[n];
	int sum= Fib(n - 1) + Fib(n - 2);
	vis[n] = sum;//  ��¼�Ѿ����������
	return sum;
}
int main()
{
	int n;
	scanf("%d", &n);
	int ret=Fib(n);
	printf("%d", ret);
	return 0;
}
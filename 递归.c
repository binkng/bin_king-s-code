#include<stdio.h>
int Fac(int n)
{
	if (n > 1)
	{
		return n * Fac(n - 1);
	}
	return 1;
}

int Fac2(int n)
{
	int nval = 1;
	for(int i = 1; i <= n; i++)
	{
		nval = i * nval;
	}
	return nval;
}

//斐波那契
//1 2 3 4 5 6 7 8 
//1 1 2 3 5 8 13 21

int Fibonacci(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int Fibo(int t)
{
	int val = 0;
	int n = 1;
	int m = 1;
	if (n < 3)
		val = 1;
	for (int i = 3; i <= t; i++)// 利用循环用3个变量来回倒
	{
		val = m + n;
		m = n;
		n = val;
	}
	return val;
}
int Mystrlen(char* str)//利用递归自定义求字符串长度
{
	if (*str == '\0')
		return 0;
	return 1 + Mystrlen(str + 1);// 当前字符+后续的字符串
}
void Print(char* str)
{
	if (*str == '\0')
	{
		return;
	}
	//printf("%c", *str);// 正向打印
	Print(str + 1);
	printf("%c", *str);//逆向打印
}
int main()
{/*
	int n=Fac(5);
	int n1 = Fac2(5);*/



	//int t = Fibo(45);
	//int m = Fibonacci(45);
	int s = Mystrlen("abcd");
	Print("abcdefg");
	printf("%d\n", Mystrlen("abcd"));
	return 0;
}
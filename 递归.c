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

//쳲�����
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
	for (int i = 3; i <= t; i++)// ����ѭ����3���������ص�
	{
		val = m + n;
		m = n;
		n = val;
	}
	return val;
}
int Mystrlen(char* str)//���õݹ��Զ������ַ�������
{
	if (*str == '\0')
		return 0;
	return 1 + Mystrlen(str + 1);// ��ǰ�ַ�+�������ַ���
}
void Print(char* str)
{
	if (*str == '\0')
	{
		return;
	}
	//printf("%c", *str);// �����ӡ
	Print(str + 1);
	printf("%c", *str);//�����ӡ
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
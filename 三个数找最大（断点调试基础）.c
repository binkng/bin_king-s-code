#include<stdio.h>
int main()
{
	////��һ
	//int a = 8, b = 15, c = 27;// Ҳ���������һ��max���� �洢���ֵ
	//if (a > b) 
	//{
	//	if (a > c)
	//	{
	//		printf("a���");
	//	}
	//	else
	//	{
	//		printf("c���");
	//	}
	//}
	//else
	//{
	//	if (b > c)
	//	{
	//		printf("b���");
	//	}
	//	else
	//	{
	//		printf("c���");
	//	}
	//}
	//����
	int a = 18; // ���ڼӶϵ� �ϵ�����if else ���� �Ӷ���ϵ���һ���ϵ�ֱ����ת����һ���ϵ� ���Ե�ʱ��
	int b = 8;
	int c = 65;
	int max = 0;
	if (a > b)
		max = a;
	else
		max = b;
	if (max > c)
		printf("���ֵ��%d",max);
	else
		printf("���ֵ��%d",c);
	return 0;
}
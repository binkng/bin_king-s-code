#include<stdio.h>
// ��1��+2��+3��+....+n!=?
int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = 0;//  �����������Ľ��
	int i = 0;
	
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		int m = 1;//  ��������n�Ľ׳�
		for (j = 1; j <= i; j++)
		{
			m *= j;
		}
		sum += m;
	}
	printf("sum=%d\n", sum);
	return 0;
}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//
//	return 0;
//}
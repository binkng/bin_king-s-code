#include<stdio.h>
// 求1！+2！+3！+....+n!=?
int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = 0;//  用来保存最后的结果
	int i = 0;
	
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		int m = 1;//  用来保存n的阶乘
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
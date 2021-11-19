//#include<stdio.h>
//      算法一 一个一个去统计二进制的每一位
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (m % 2 != n % 2)
//		{
//			count++;
//		}
//		m = m / 2;
//		n = n / 2;
//	}
//	printf("count=%d\n", count);
//	return 0;
//
//}


///                       算法二  利用"   ^     "相同为0 不同位1
//int get_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);//  每进行一次运算 tmp 就少一个1
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = 0;
//	count = get_bit(m, n);
//	printf("count=%d\n", count);
//	return 0;
//
//}



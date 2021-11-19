//#include<stdio.h>
//// 求从1到100中含9的数字的个数
////int main()
////{
////	int i = 0;
////	int count = 0;
////	for (i = 1; i <= 100; i++)
////	{
////		if (i % 10 == 9)
////		{
////			count++;
////		}
////		if (i / 10 == 9)
////		{
////			count++;
////		}
////		
////	}
////	printf("count=%d\n", count);
////	return 0;
////}
//// 
//// 
////      计算1/1-1/2+1/3-1/4........+1/99-1/100的值，打印出结果
//// 算法1
////int main()
////{
////	int i = 0;
////	double a = 0;
////	double b = 0;
////	for (i = 1; i < 100; i += 2)
////	{
////		a = a + 1.0 / i;// 注意 至少的又一个为浮点数
////	}
////	for (i = 2; i <= 100; i += 2)
////	{
////		b = b + 1.0 / i;
////	}
////	double c = a - b;
////	printf("c=%lf\n", c);
////	return 0;
////}
////          算法2
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("sum=%lf", sum);
//	return 0;
//}
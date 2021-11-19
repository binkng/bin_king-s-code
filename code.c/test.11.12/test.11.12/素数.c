//#include<stdio.h>
////                                                               算法境界1
////int main()
////{
////	int i = 0;
////	int count = 0;
////	for (i = 100; i <= 200; i++)
////	{
////		//判断i是否为素数(只能被1和本身整除)
////		// 素数判断规则
////		//试除法 产生2到i-1个数分别去一个个除
////		int j = 0;
////		for (j = 2; j < i; j++)
////		{
////			if (i % j == 0)
////			{
////				break;// 跳出for循环
////			}         //有两种情况 1：i不是素数 2： j=i
////		}
////		if (j == i) // 说明i除完2到i-1个数不能整除 此时i为素数
////		{
////			printf("%d ", i);
////			count++;
////		}
////		
////	}
////	printf("\ncount=%d", count);
////	return 0;
////}
////                                                              算法境界2
//
//
//
////      因为所有素数都是奇数，所以可优化为：
////int main()
////{
////	int i = 0;
////	int j = 0;
////	int count = 0;
////	for (i = 101; i <= 200; i += 2)
////	{
////		for (j = 2; j < i; ++j)
////		{
////			if (i % j == 0)
////				break;
////		}
////		if (j == i)
////		{
////			printf("%d是素数\n", i);
////			count++;
////		}
////	}
////	printf("%d\n", count);
////	system("pause");
////	return 0;
////}
//// 
//// 
//// 
////                                                   算法境界3
////除了2以外，所有可能的质因数都是奇数，先尝试2，再尝试从3开始直到x / 2的所有奇数
////int main()
////{
////	int i = 0;
////	int j = 0;
////	int count = 0;
////	for (i = 101; i <= 200; i += 2)
////	{
////		for (j = 2; j < i / 2; j++)
////		{
////			if (i % j == 0)
////				break;
////		}
////		if (j == i / 2)
////		{
////			printf("%d是素数\n", i);
////			count++;
////		}
////
////	}
////	printf("%d\n", count);
////	system("pause");  //暂停的意思，等待用户信号
////	return 0;
////}
////                                        算法境界4
//// 素数如果i=a*b 则a和b中至少有一个数字<=开平方i
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		
//		int j = 0;
//		// sqrt-开平方的数学库函数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}         
//		}
//		if (j > sqrt(i)) 
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//                      

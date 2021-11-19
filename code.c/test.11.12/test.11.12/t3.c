//#include<stdio.h>
//int main()
//{
//	int m = 24; // 假设一个位24 另一个为18
//	int n = 18;
//	int r;
//  scanf("%d%d",&m,&n);  //自己输入两个数 求其公约数
//	// 求两个数之间的最大公约数 
//	// 采用辗转相除法
//	// 算法实现
//	while (m%n)
//	{
//		r = m % n;// 把a和b取模后结果赋值给r
//		m = n;   // 把n赋值给m
//		n = r;   // 再把m和n取模结果给n 然后进行循环
//	}
//	printf("%d\n", n);
//
//	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	// 判断闰年 
//	//1：能被4整除并且不能被100整除
//	//2：能被400整除
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}

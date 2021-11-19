//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n= 0;
//	scanf("%d%d", &m, &n);
//
//
//	return 0;
//}



//  统计二进制中1的个数
//  写一个函数返回参数二进制中1的个数
//                  算法一
//int count_bit(unsigned int n)   //unsigned 表示当为负数时也能准确得到二进制（补码）中1的个数
//{
//	// 膜2 除2得到二进制1或0
//	int count = 0;//  用来计数
//	while (n)    //当n！=0时就一直循环
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//                 算法二
//int count_bit(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	
//	return count;
//}
 
//                  算法三（最优算法）
//n=n&(n-1)     //n每&一次（n-1）最开始的n就少一个1
//n
//13
//1101 n
//1100 n-1
//1011 n
//1000 n
//0111 n-1
//0000 n
//int count_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//			count++;
//	 }
//	return count;
//}
//
//
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//写一个函数求a的二进制（补码）表示中有几个1
//	int count = count_bit(a);
//	printf("count=%d", count);
//	return 0;
//}
//

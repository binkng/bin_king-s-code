//#include<stdio.h>
////           算法一 使用递归 （当n过大效率太低）
//int Sum(int n)// 使用递归算法效率太低
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Sum(n - 1) + Sum(n - 2);
//}
////    算法二  使用循环来实现
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)//   因为最开始两个数为1 直接return即可
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;    //限制进入循环的次数
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = Sum(n);//  运用递归函数实现
//	printf("sum=%d\n", sum);
//	int Sum = Fib(n);
//	printf("Sum=%d\n", Sum);
//	return 0;
//}
//#include<stdio.h>
////  题目描述：   打印整数二进制的奇数位和偶数位
//void Print(int a)//  只需要打印即可 不需要返回值
//{
//	int i = 0;
//	int  b = 0;
//	printf("奇数位为：");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		b = (a>>i) & 1;
//		printf("%d ", b);
//	}
//	printf("\n");
//	printf("偶数位为：");
//	for (i = 31; i >= 1;i -= 2)
//	{
//		b = (a >> i) & 1;
//		printf("%d ", b);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	Print(a);
//	
//	return 0;
//}
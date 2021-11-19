//#include<stdio.h>
//// 错误算法 使用非递归
////int DigitSum(int i)
////{
////	int count = 0;
////	while (i / 10)
////	{
////		count = count + i % 10;
////		i = i / 10;
////	}
////	return count;
////}
////int main()
////{
////	signed int i = 0;
////	scanf("%d", &i);
////	int num = DigitSum(i);
////	printf("num=%d\n", num);
////	return 0;
////}
//
////          使用递归算法
//
//int Digitsum(int i)
//{
//	if (i > 9)
//		return i % 10 + Digitsum(i / 10);
//	else
//		return i;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int sum = Digitsum(i);
//	printf("sum=%d\n", sum);
//	return 0;
//}
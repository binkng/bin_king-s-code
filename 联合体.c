//#include<stdio.h>
//union AA
//{
//	int a;   // 4字节
//	short b; // 2字节
//	char c;  // 1字节
//};
////所有成员共享一块空间 
//// 联合体大小 由最大成员决定
//int main()
//{
//	union AA a;
//	a.b = 20;
//	printf("%d\n", a.a);
//	printf("%d\n", a.b);
//	printf("%d\n", a.c);
//
//	printf("%p\n", &a.a);
//	printf("%p\n", &a.b);
//	printf("%p\n", &a.c);
//	return 0;
//}
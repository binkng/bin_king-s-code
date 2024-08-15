//#include<stdio.h>
//// 结构体内存对齐：以结构体中的最大类型去对齐
//typedef struct AA
//{
//	int a;
//	short b;
//	char c;
//}A;
//typedef struct BB
//{
//	char a;
//	char b;
//	char c;
//}B;
//typedef struct CC
//{
//	int a;
//	char c[7];// 相当于是7个char
//}C;
//typedef struct DD
//{
//	short b;
//	int a;
//	char c;
//}D;
//typedef struct EE
//{
//	int a;
//	short* b;
//	double c;
//	float d;
//	char e;
//	short f;
//}E;
//int main()
//{
//	/*A a;
//	B b;
//	C c;
//	D d;*/
//	printf("%d\n", sizeof(A));
//	printf("%d\n", sizeof(B));
//	printf("%d\n", sizeof(C));
//	printf("%d\n", sizeof(D));
//	printf("%d\n", sizeof(E));
//	return 0;
//}
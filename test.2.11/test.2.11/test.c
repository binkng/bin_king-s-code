#include<stdio.h>
int main()
{
	////联合类型的声明
	//union Un
	//{
	//	char c;
	//	int i;
	//};
	////联合变量的定义
	//union Un un;
	////计算连个变量的大小
	//printf("%d\n", (int)sizeof(un));// 联合体的大小是最大成员的大小
	//return 0;
	//union Un
	//{
	//	int i;
	//	char c;
	//};
	//union Un un;
	//// 下面输出的结果是一样的吗？
	//printf("%d\n", &(un.i));
	//printf("%d\n", &(un.c));
	///*un.i = 8;
	//printf("%d", un.c);*/
	//un.i = 0x11223344;
	//un.c = 0x55;
	//printf("%x\n", un.i);
	union Un1
	{
		char c[5];
		int i;
	};
	union Un2
	{
		short c[7];
		int i;
	};
	//下面输出的结果是什么？
	printf("%d\n", (int)sizeof(union Un1));
	printf("%d\n", (int)sizeof(union Un2));
	return 0;
}
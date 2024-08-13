#include<stdio.h>
enum AA{shitou,jiandao=100,bu};// 默认：shitou==0,jiandao==1,bu==2  
// 也可以在内部对 shitou jiandao bu 进行赋值
//枚举常量是符号常量，它们有固定的名字和与之关联的整数值，
//这提高了代码的可读性和可维护性。
//枚举常量在C语言中被视为整型常量，
//它们提供了一种方便的方式来定义一组命名的整数值，
//提高了代码的可读性和可维护性。
int main()
{
	enum AA a=shitou;//使用枚举常量来初始化枚举变量 以提高代码的可读性和可维护性
	switch(a)
	{
	case shitou:
		printf("石头\n");
		break;
	case jiandao:
		printf("剪刀\n");
		break;
	case bu:
		printf("布\n");
		break;
	}

	return 0;
}
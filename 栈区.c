//#include<stdio.h>
// 栈区
// 主要用来存储 局部变量->其生命周期 出生：声明时 消亡：所在作用域结束
// 作用域{。。。。。。} 两个大括号之间
// 局部变量的使用范围：所在作用域之内
////


#include<stdio.h>
int* AA()
{
	int a = 5;
	return &a;
}
int main()
{
	int* p = AA();
	printf("%d\n", *p);//输出5//原因是因为AA（）函数中属于局部变量 作用域结束即消亡
	printf("%d\n", *p);//输出乱码
	printf("%d\n", *p);//输出乱码
	printf("%d\n", *p);//输出乱码
	printf("%d\n", *p);//输出乱码
	return 0;
}
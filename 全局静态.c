//#include<stdio.h>
////全局变量
////生命周期 出生：程序运行时 消亡：程序结束时
////使用范围：整个程序
//// 特性：会默认初始化为0
//int a;
//
////静态变量
////生命周期 出生：程序运行时 消亡：程序结束时
////使用范围：当前源文件中（全局静态变量）
//// 特性：会默认初始化为0  只会初始化一次
//static int b;
//
////局部静态变量
////生命周期 出生：程序运行时 消亡：程序结束时
////使用范围：所在作用域内
////特性：只会初始化一次
//
////静态变量可以细分未数据段区和BSS区
////数据段  初始化过的全局/静态变量
////BSS     未初始化过的全局/静态变量
//int* AA()
//{
//	static int c = 100;
//	c++;
//	return &c;
//}
//int main()
//{
//	//c = 10;// 错误 不可再对c赋值
//	a += 2;
//	b += 5;
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	int* p = AA();
//	printf("%d\n", *p);
//	printf("%d\n", *p);
//	printf("%d\n", *p);
//
//	printf("%d\n", *AA());
//	printf("%d\n", *AA());
//	printf("%d\n", *AA());// 与上述*p *p*p相比较 调用了3次
//
//	return 0;
//}
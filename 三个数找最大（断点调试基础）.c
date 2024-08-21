#include<stdio.h>
int main()
{
	////法一
	//int a = 8, b = 15, c = 27;// 也可以再添加一个max变量 存储最大值
	//if (a > b) 
	//{
	//	if (a > c)
	//	{
	//		printf("a最大");
	//	}
	//	else
	//	{
	//		printf("c最大");
	//	}
	//}
	//else
	//{
	//	if (b > c)
	//	{
	//		printf("b最大");
	//	}
	//	else
	//	{
	//		printf("c最大");
	//	}
	//}
	//法二
	int a = 18; // 关于加断点 断点别加在if else 里面 加多个断点会从一个断点直接跳转到下一个断点 调试的时候
	int b = 8;
	int c = 65;
	int max = 0;
	if (a > b)
		max = a;
	else
		max = b;
	if (max > c)
		printf("最大值是%d",max);
	else
		printf("最大值是%d",c);
	return 0;
}
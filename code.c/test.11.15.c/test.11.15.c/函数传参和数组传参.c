#include<stdio.h>
//void Init(int a[],int sz)//用Init（）函数初始化数组
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		a[i] = i;
//	}
//}
//void Printf(int a[], int sz)// 实现打印数组的每个元素
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//void reverse(int a[],int sz)// 完成对数组元素的逆置
//{
//	int left = 0;
//	int right = sz-1;
//	int trmp = 0;// 引入第三个变量用于交换两个变量
//	while (left < right)
//	{
//		trmp = a[left];
//		a[left] = a[right];
//		a[right] = trmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int a[10] = { 0 };
//	int sz = sizeof(a) / sizeof(a[0]);
//		Init(a,sz);
//		Printf(a,sz);
//
//		reverse(a,sz);
//		Printf(a, sz);
//	
//	return 0;
//}


int main()
{
	//     题目要求：将a和b两数组的内容交换 数组一样大
	int a[10] = { 1,2,3,4,5,6,7,8,9,11 };
	int b[10] = { 2,3,4,5,6,7,8,12,11,99 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
		

	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);


	}
	printf("\n");
	int trmp = 0;
	for (i = 0; i < 10; i++)
	{
		trmp = a[i];
		a[i] = b[i];
		b[i] = trmp;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);


	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);


	}
	printf("\n");

	return 0;
}


//#include<stdio.h>
//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[10];
//	//数组名是一个常量
//	// arr++;// 错误的写法arr 不能++
//
//	//数组名一般情况下 代表的是首元素的地址 
//	// 当数组名与 & 或者sizeof结合时 代表的是整个数组
//	// 对数组的地址的间接引用得到首元素的地址
//	// 一个* 抵消一个&
//	printf("%d %d\n", arr[0], *arr);
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);// 偏移一个int型字节长度
//
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);// 偏移一个数组个字节的大小
//	printf("%p\n", *&arr);// 一个* 抵消一个&
//
//	return 0;
//}
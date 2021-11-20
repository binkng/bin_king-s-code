//#include<stdio.h>
////void test(int arr[])
////{
////	int sz = sizeof(arr) / sizeof(arr[0]);// 因为vs调的是x64得平台 所以指针占8个字节
////	printf("%d\n", sz);
////}
////int main()
////{
////	int arr[10] = { 0 };
////	test(arr);// arr传的是首元素的地址
////	return 0;
////}
//
////int main()
////{
////	char* p = "abcdef";//  注： p中放的是首元素的地址
////   //printf("%c\n", *p);// *p指向a 所以打印的就是a
////	printf("%s\n", p);// printf要打印的是%s字符串 因为p指向a 所以从首元素地址a开始打印 直到遇到\0(0)就停止打印
////
////	return 0;
////}
//int main()
//{
//	int a1[] = { 1,2,3 };
//	int a2[] = { 4,5,6 };
//	int a3[] = { 7,8,9 };
//	int* p[] = { a1,a2,a3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		//printf("%d", * p[i]);
//	}
//	return 0;
//}
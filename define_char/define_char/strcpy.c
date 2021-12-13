////字符串拷贝函数
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
////#include<string.h>
//char* my_strcpy(char* arr1, const char* arr2)//  可以把arr1和arr2换成dest src
//{
//
//	assert(arr1 && arr2);
//	assert(strlen(arr1) > strlen(arr2));// 目的是让目标字符串的空间大于源字符串// 我自己加的 实际上库函数源码并没有
//	char* ret = arr1;
//
//
//	//while (*arr2)
//	//{
//	//	*arr1++ = *arr2++;
//	//	/**arr1 = *arr2;
//	//	arr1++;
//	//	arr2++;*/
//	//}
//	//*arr1 = *arr2//*arr1 = 0;// 拷贝\0
//
//// 把上述代码简化
//	while (*arr1++ = *arr2++);
//
//		return ret;
//}
//int main()
//{
//	char arr1[20] = "bcdhlufeitou";
//	printf("%s\n", arr1);
//	char arr2[] = "abcdf";
//	//strcpy(arr1, arr2);
//	printf("%s\n", my_strcpy(arr1, arr2));
//	printf("%s\n", arr2);
//	return 0;
//}
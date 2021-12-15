////字符串比较函数(比较其前num个字符)
//#include<stdio.h>
//#include<string.h>
////#include<assert.h>
////int my_strncmp(const char* str1, const char* str2,size_t num)
////{
////	assert(str1 && str2);
////	while (*str1&&*str2&&(*str1==*str2) && --num)//  注意：这里可千万不能把--num 改成num--
////	{
////		str1++;
////		str2++;
////	}
////	return *str1 - *str2;
////}
//int main()
//{
//	char arr1[] = "abcdtou";
//	char arr2[] = "abcdain";
//	int  ret=strncmp(arr1, arr2, 4);
//	//int ret = my_strncmp(arr1, arr2, 4);
//	if (ret > 0)
//		printf("arr1>arr2");
//	else if (ret < 0)
//		printf("arr1<arr2");
//	else
//		printf("arr1=arr2");
//	return 0;
//}
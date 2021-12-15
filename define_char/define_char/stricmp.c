////  字符串比较函数（不区分大小写）
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int my_stricmp(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 && *str2)
//	{
//		if (*str1 >= 'A' && *str1 <= 'Z')
//			*str1 +=   'a' - 'A';//       注意：此时在定义形参时不能用const
//		if (*str2 >= 'A' && *str2 <= 'Z')
//			*str2 +=  'a' - 'A';
//		if (*str1 != *str2)
//		{
//			break;
//		}
//		str1++;
//		str2++;																																																				
//	}
//}
//int main()
//{
//	char arr1[] = "Abdc";
//	char arr2[] = "abDc";
//	//int ret = stricmp(arr1, arr2);//  arr1=arr2
//	int ret=my_stricmp(arr1, arr2);
//		if (ret > 0)
//		printf("arr1>arr2");
//	else if (ret < 0)
//		printf("arr1<arr2");
//	else
//		printf("arr1=arr2");
//
//	return 0;
//}
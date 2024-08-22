//#include<stdio.h>
//#include<string.h>
// 字符串拷贝
//char* my_strcpy(char* str, char* str1)// 将str1赋值给str
//{
//	char* p = str;//记录str的首地址
//	while (*str1)
//	{
//		*str = *str1;
//		str++;
//		str1++;
//	}
//	*str = '\0';
//	return p;
//
//}
//char* my_strncpy(char* str1, int n, char* str2)
//{
//	char* p = str1;//用来记录str1首地址
//	for (int i = 0; i < n; i++)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = 0;// 要看str1有没有移动
//	return p;
//}
//	int main()
//	{
//	char str2[] = "asdfgaaefgdfggh";
//	char str1[10];
//	/*strcpy_s(str1, sizeof(str1), str2);
//	printf("%s\n", str1);*/
//	//my_strcpy(str1, str2);// 当str2的字符串长度大于str1会出错误
//	//printf("%s\n", str1);
//	//strncpy_s(str1, 10, str2, 9);
//	//printf("%s\n", str1);
//	my_strncpy(str1,8,str2);
//	printf("%s\n", str1);
//	return 0;
//	}
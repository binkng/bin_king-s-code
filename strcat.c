//#include<stdio.h>
//#include<string.h>
////字符串拼接
//char* my_strcat(char* str1,char* str2)//str2拼接到str1
//{
//	//1,找到目标的结尾位置
//	//2，遍历源字符串，将字符拷贝到目标中
//	char* p = str1;
//	while (*str1)
//	{
//		str1++;
//	}
//	while (*str2)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = '\0';
//	return p;
//}
//int main()
//{
//	char str1[20] = "abcdddgdf";
//	char str2[] = "1234";
//	//printf("%s\n", my_strcat(str1, str2));
//	strncat_s(str1, 20, str2, 3);
//	//strcat_s(str1,10,str2);
//	printf("%s\n", str1);
//	return 0;
//}
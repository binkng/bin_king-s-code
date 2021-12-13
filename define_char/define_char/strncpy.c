//#include<stdio.h>
//#include<assert.h>
//// 函数原型 char* strncpy(char* destination,const char* source,size_t num)
////  size_t == unsigned int
//char* my_strncpy(char* a1,const char* a2,int num)// a2字符串不可以被修改 num表示被拷贝的源字符串的个数
//{
//	assert(a1 && a2);
//	char* str1=a1;
//	while (num--)
//	{
//		*str1++ = *a2++;
//	}
//	*str1 = 0;
//	return a1;
//}
//int main()
//{
//	char a1[20] = "abcdef";
//	char a2[] = "abcp";
//	my_strncpy(a1, a2, 5);
//	printf("%s", a1);
//	return 0;
//}
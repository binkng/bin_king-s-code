//#include<stdio.h>
////#include<string.h>
//#include<assert.h>
// //函数原型 char* strncat(char* destination,const char* source,size_t num);
// //字符串追加函数
//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* str = dest;// 保留dest的首地址
//	while (*str)
//	{
//		str++;
//	}//  找到目标空间的 \0
//	//while (*src)
//	//{
//	//	*str++ = *src++;
//	//}
//	//*str = *src;//  把源字符串的 \0 追加过去
//
//	//                  上面是错误算法
//
//
//	//  正确算法
//	for (int i = 0; i < num; i++)
//	{
//		*str ++ =*src++;// 将要连接的num个字符赋给目标空间字符串中
//	}
//	*str = '\0';
//	return dest;
//}
//int main()
//{
//	char arr1[20] = "hello\0abcddsfss";
//	char arr2[] = "world";
//	printf("%s\n", arr1);
//	//char* ret=strncat(arr1, arr2, 5);//  系统后面自己会补上 \0
//	char* ret = my_strncat(arr1, arr2, 8);
//	printf("%s", ret);
//	return 0;
//}
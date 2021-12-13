//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//字符串追加函数
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest)
//		dest++;// 1,先在目标字符串中找到 \0
//	while(*dest++=*src++)// 在dest后面追加字符
//		{
//		/**dest = *src;
//		dest++;
//		src++;*/
//		;
//		}
//	return ret;
//	
//}
//int main()
//{
//	char arr1[20] = "chen";
//	printf("%s\n", arr1);
//	char arr2[] = "bin";
//	/*strcat(arr1, arr2);
//	printf("%s\n", arr1);*/
//	//char* ret=my_strcat(arr1, arr2);
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}
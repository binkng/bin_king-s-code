//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//�ַ���׷�Ӻ���
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest)
//		dest++;// 1,����Ŀ���ַ������ҵ� \0
//	while(*dest++=*src++)// ��dest����׷���ַ�
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
//#include<stdio.h>
////#include<string.h>
//#include<assert.h>
// //����ԭ�� char* strncat(char* destination,const char* source,size_t num);
// //�ַ���׷�Ӻ���
//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* str = dest;// ����dest���׵�ַ
//	while (*str)
//	{
//		str++;
//	}//  �ҵ�Ŀ��ռ�� \0
//	//while (*src)
//	//{
//	//	*str++ = *src++;
//	//}
//	//*str = *src;//  ��Դ�ַ����� \0 ׷�ӹ�ȥ
//
//	//                  �����Ǵ����㷨
//
//
//	//  ��ȷ�㷨
//	for (int i = 0; i < num; i++)
//	{
//		*str ++ =*src++;// ��Ҫ���ӵ�num���ַ�����Ŀ��ռ��ַ�����
//	}
//	*str = '\0';
//	return dest;
//}
//int main()
//{
//	char arr1[20] = "hello\0abcddsfss";
//	char arr2[] = "world";
//	printf("%s\n", arr1);
//	//char* ret=strncat(arr1, arr2, 5);//  ϵͳ�����Լ��Ჹ�� \0
//	char* ret = my_strncat(arr1, arr2, 8);
//	printf("%s", ret);
//	return 0;
//}
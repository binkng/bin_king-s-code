//#include<stdio.h>
//#include<assert.h>
//// ����ԭ�� char* strncpy(char* destination,const char* source,size_t num)
////  size_t == unsigned int
//char* my_strncpy(char* a1,const char* a2,int num)// a2�ַ��������Ա��޸� num��ʾ��������Դ�ַ����ĸ���
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
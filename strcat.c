//#include<stdio.h>
//#include<string.h>
////�ַ���ƴ��
//char* my_strcat(char* str1,char* str2)//str2ƴ�ӵ�str1
//{
//	//1,�ҵ�Ŀ��Ľ�βλ��
//	//2������Դ�ַ��������ַ�������Ŀ����
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
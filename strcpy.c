//#include<stdio.h>
//#include<string.h>
// �ַ�������
//char* my_strcpy(char* str, char* str1)// ��str1��ֵ��str
//{
//	char* p = str;//��¼str���׵�ַ
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
//	char* p = str1;//������¼str1�׵�ַ
//	for (int i = 0; i < n; i++)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = 0;// Ҫ��str1��û���ƶ�
//	return p;
//}
//	int main()
//	{
//	char str2[] = "asdfgaaefgdfggh";
//	char str1[10];
//	/*strcpy_s(str1, sizeof(str1), str2);
//	printf("%s\n", str1);*/
//	//my_strcpy(str1, str2);// ��str2���ַ������ȴ���str1�������
//	//printf("%s\n", str1);
//	//strncpy_s(str1, 10, str2, 9);
//	//printf("%s\n", str1);
//	my_strncpy(str1,8,str2);
//	printf("%s\n", str1);
//	return 0;
//	}
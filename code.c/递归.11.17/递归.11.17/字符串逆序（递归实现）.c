//// ��дһ������reverse_string(char * string)(�ݹ�ʵ��)
////ʵ�֣��������ַ����е��ַ���������
////Ҫ�󣺲���ʹ��c��������ַ�����������
//#include<stdio.h>
// //                  �㷨һ������д ������Ҫ��(�ǵݹ�)
////#include<string.h>
////void reverse_string(char str[])
////{
////	int l = 0;
////	int r = strlen(str) - 1;
////	while (l < r)
////	{
////		char t = '\0';
////		t = str[l];
////		str[l] = str[r];
////		str[r] = t;
////		l++;
////		r--;
////	}
////}
////                  
////                           �㷨��
//int my_strlen( char str[])  //������Ҳ���Ըĳ�char* str(��Ԫ�ص�ַ��������str[]��������str����Ԫ�ص�ַ 
////  ����ָ�������ַ�������
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
// 
////void reverse_string(char str[])
////{
////	int l = 0;
////	int r = my_strlen(str) - 1;   //   �Լ�����һ�����������ַ����ĳ���
////		while (l < r)
////	{
////		char t = '\0';
////		t = str[l];
////		str[l] = str[r];
////		str[r] = t;
////		l++;
////		r--;
////	}
////}
// //                                 �㷨��
//void reverse_string(char str[])
//{
//	char tmp = str[0];
//	int len = my_strlen(str);
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';// ʹ��ʣ��Ҫ�ݹ���ַ����Թ�����\0��β���ַ���
//	if (my_strlen(str + 1) >= 2)//  ʣ��Ҫ�ݹ���ַ���ֻҪ����2��2���ϸ��ַ��ͼ����ݹ�
//		reverse_string(str + 1);
//	str[len - 1] = tmp;
//
//}
//int main()
//{
//	char str[] = {"abcdef"};
//	//scanf("%s", str);
//	printf("%s\n", str);
//	reverse_string(str);
//	printf("%s\n", str);
//	return 0;
//}





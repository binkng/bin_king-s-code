#include<stdio.h>
#include<string.h>
int p_move(char* arr1,char* arr2)
{
	//1. ��arr1����׷��һ��arr1�ַ���
	// strcat(arr1,arr1);//err �˺��������ں���׷��һ����ͬ���ַ���
	strncat(arr1, arr1, 6);//���� abcdef  abcdefabcdef
	// 2.�ж�arr2ָ����ַ����Ƿ�Ϊarr1ָ����ַ������ִ�
	// �⺯��strstr �����������Ӵ���
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
		return 0;
	else
		return 1;
}
int main()
{
	char arr1[30] = "abcdefg";
	char arr2[] = "defgabc";
	int ret=p_move(arr1, arr2);
	if (ret == 1)
		printf("YES\n");
	else
		printf("No\n");
	return 0;
}
////�ַ����ȽϺ���(�Ƚ���ǰnum���ַ�)(�����ִ�Сд)
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abctou";
	char arr2[] = "ABCbin";
	int ret = strnicmp(arr1, arr2, 5);
	if (ret > 0)
		printf("arr1>arr2");
	else if (ret < 0)
		printf("arr1<arr2");
	else
		printf("arr1=arr2");
	return 0;
}
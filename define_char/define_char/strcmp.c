#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strcmp(const char* arr1, const char* arr2)
{
	assert(arr1 && arr2);
	// �Ƚ�
	//while(*arr1++==*arr2++)  ע�� ������д���Ǵ���� ���� ��arr1 Ϊ aba arr2 Ϊabaa ʱ Ҳ�ó���ȵĽ��
	while (*arr1 == *arr2)
	{
		if (*arr1 == '\0')//  ���arr1��ǰ����0��
		{
			return 0;
		}// ���
		arr1++;
		arr2++;
	}
	//if (*arr1 > *arr2)// ÿ����ĸ��Ӧ��ascallֵ���бȽ�
	//	return 1;
	//else
	//	return -1;
	  
	return(*arr1 - *arr2);
	// ����


}
int main()
{
	char arr1[] = "aba";
	char arr2[] = "abaa";
	int ret = strcmp(arr1, arr2);
	//int ret = my_strcmp(arr1, arr2);
	if (ret > 0)
		printf("arr1>arr2");
	else if (ret < 0)
		printf("arr1<arr2");
	else
		printf("arr1=arr2");

	return 0;
}
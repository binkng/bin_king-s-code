#include <stdio.h>
#include <malloc.h>

int main()
{
	int A[5] = { 1,2,3,4,5 };
	int len = 0;
	printf("������������Ҫ���������ĳ��ȣ� len = \n");
	scanf("%d", &len);
	int* pArr = (int*)malloc(sizeof(int) * len);

	for (int i = 0; i < len; ++i)
	{
		//scanf("%d",&pArr[i]);
		scanf("%d", pArr + i);
	}
	for (int i = 0; i < len; ++i)
	{
		printf("%d\n", pArr[i]);
	}
	for (int i = 0; i < len; ++i)
	{
		printf("����A�����ֵ:\n");
		printf("%d\n", A[i]);
		//printf("%d\n",*(pArr + i));
	}
	return 0;
}

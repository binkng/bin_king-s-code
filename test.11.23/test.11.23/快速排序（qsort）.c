#include<stdio.h>
#include<stdlib.h>
void Print(int arr[10], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int comp(void* e1, void* e2)
{
	return (*(int*)e2 - *(int*)e1);
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(arr, sz);
	qsort(arr, sz, sizeof(arr[2]), comp);//compΪ�Զ���ıȽϺ����ĺ�����ַ
	//arrΪ������ָ�����Ҫ���������
	//sz������Ԫ�صĸ���
	// ÿ��Ԫ�صĳ��ȣ��ֽ�����Ϊ��λ
	//������ַ 
	Print(arr, sz);


	return 0;
}
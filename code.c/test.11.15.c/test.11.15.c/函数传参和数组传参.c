#include<stdio.h>
//void Init(int a[],int sz)//��Init����������ʼ������
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		a[i] = i;
//	}
//}
//void Printf(int a[], int sz)// ʵ�ִ�ӡ�����ÿ��Ԫ��
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//void reverse(int a[],int sz)// ��ɶ�����Ԫ�ص�����
//{
//	int left = 0;
//	int right = sz-1;
//	int trmp = 0;// ����������������ڽ�����������
//	while (left < right)
//	{
//		trmp = a[left];
//		a[left] = a[right];
//		a[right] = trmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int a[10] = { 0 };
//	int sz = sizeof(a) / sizeof(a[0]);
//		Init(a,sz);
//		Printf(a,sz);
//
//		reverse(a,sz);
//		Printf(a, sz);
//	
//	return 0;
//}


int main()
{
	//     ��ĿҪ�󣺽�a��b����������ݽ��� ����һ����
	int a[10] = { 1,2,3,4,5,6,7,8,9,11 };
	int b[10] = { 2,3,4,5,6,7,8,12,11,99 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
		

	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);


	}
	printf("\n");
	int trmp = 0;
	for (i = 0; i < 10; i++)
	{
		trmp = a[i];
		a[i] = b[i];
		b[i] = trmp;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);


	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);


	}
	printf("\n");

	return 0;
}


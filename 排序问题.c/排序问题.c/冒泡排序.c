#include<stdio.h>
void Print(int a[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void Mp(int a[], int sz)
{
	int x = 0;
	for (x = 0; x < sz-1; x++)   //��һ��������Ԫ�رȽ�һ��
	{
		int j = 0;
		for (j = 0; j<sz-1-x; j++)  //  �ر�ע��sz-x
		{
			if (a[j]<a[j+1])  // �����ڵ������Ƚ�(��j������)
			{
				int trp = 0;
				trp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = trp;

			}
		}
	}
}
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };//  �Ѵ�1��10�ĳɵ���
	int sz = sizeof(a) / sizeof(a[0]);
	Print(a, sz);//  �Զ���һ����ӡ����
	Mp(a, sz);
	Print(a, sz);
	return 0;
}

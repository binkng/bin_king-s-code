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
	for (x = 0; x < sz-1; x++)   //第一个与后面的元素比较一遍
	{
		int j = 0;
		for (j = 0; j<sz-1-x; j++)  //  特别注意sz-x
		{
			if (a[j]<a[j+1])  // 将相邻的两个比较(用j来控制)
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
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };//  把从1到10改成倒序
	int sz = sizeof(a) / sizeof(a[0]);
	Print(a, sz);//  自定义一个打印函数
	Mp(a, sz);
	Print(a, sz);
	return 0;
}

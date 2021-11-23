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
	qsort(arr, sz, sizeof(arr[2]), comp);//comp为自定义的比较函数的函数地址
	//arr为参数所指向的需要排序的数组
	//sz数组中元素的个数
	// 每个元素的长度（字节数）为单位
	//函数地址 
	Print(arr, sz);


	return 0;
}
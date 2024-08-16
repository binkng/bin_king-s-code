#include<stdio.h>
int main()
{
	//在有序数组中找到具体的那个数的下标
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 7;
	int begin = 0;
	int end = 9;
	int mid = 0;
	while (begin<=end)
	{
		mid = (begin + end) / 2;
		if (arr[mid]<n)
		{
			begin = mid + 1;
		}
		else if (arr[mid] > n)
		{
			end = mid - 1;
		}
		else
		{
			printf("%d\n", mid);
			break;// 注意找到之后别忘了跳出循环
		}
	}
	printf("%d\n", arr[mid]);
	return 0;
}
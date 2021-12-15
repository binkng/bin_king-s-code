#include<stdio.h>
//int Find(int arr[4][4], int k,int row,int col)
//{
//	int i = 0;
//	int j = col-1;
//	while (i <= row - 1 && j >= 0)
//	{
//		if (arr[i][j] > k)
//		{
//			j--;
//		}
//		else if (arr[i][j]<k)
//		{
//			i++;
//		}
//		else
//		{
//           printf("位置是：%d %d\n", i, j); // 这样写也可以 但是太low了
//			return 1;//  说明此时找到了
//		}
//	}
//	return 0; // 没找到
//}
//int main()
//{
//	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	// 找出该数的具体位置
//	int k = 5;
//	int x = 4;
//	int y = 4;
//	int ret=Find(arr,5,4,4);// 其核心思想就是找右上或左下
//	if (ret == 1)
//		printf("找到了");
//	else
//		printf("没找到");
//	return 0;
//}

int Find(int arr[4][4], int k, int* row, int* col)
{
	int i = 0;
	int j = *col  - 1;
	while (i <= *row - 1 && j >= 0)
	{
		if (arr[i][j] > k)
		{
			j--;
		}
		else if (arr[i][j]<k)
		{
			i++;
		}
		else
		{
			*row = i;
			*col = j;
			return 1;//  说明此时找到了
		}
	}
	return 0; // 没找到
}
int main()
{
	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	// 找出该数的具体位置
	int k = 8;
	int x = 4;
	int y = 4;
	int ret = Find(arr, k, &x, &y);// 返回型参数 传址
	//int ret=Find(arr,5,4,4);// 其核心思想就是找右上或左下
	if (ret == 1)
	{
		printf("找到了\n");
		printf("位置是：%d %d", x, y);
	}
	else
		printf("没找到");
	return 0;
}
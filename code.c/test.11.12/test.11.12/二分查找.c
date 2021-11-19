////编写代码在一个整型有序数组中查找具体的某个数
//	//找到了就打印数字所在的下标，找不到则输出：找不到
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k;
//	k = 6;
//	int sz;
//	sz = sizeof(arr) / sizeof(arr[0]);//求元素个数
//
//	int left;
//	left = 0; //左下标
//	int right;
//	right = sz - 1; //右下标
//	while (left <= right) //说明两个下标之间有元素
//	{
//		int mid;
//		mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//
//	return 0;
//
//}
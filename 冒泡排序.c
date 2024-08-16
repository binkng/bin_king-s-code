//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 6,4,11,7,12,19,58,69,73,75 };
//	int t = 0;// 临时变量
//	int count = 0;
//	法一 每次都是两个俩个替换 一共进行9趟 每趟需要9次对比 一共81次
//	/*for (int j = 0; j < 10 - 1; j++)
//	{
//		for (int i = 0; i < 10 - 1; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				t = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i+1] = t;
//			}
//			count++;
//		}
//	}*/
//
//	 法二：经典冒泡排序
//	for (int j = 0; j < 10 - 1; j++)
//	{
//		for (int i = 0; i < 10 - 1-j; i++)// 每一趟后 对比次数就减少一次
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				t = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = t;
//			}
//			count++;
//		}
//	}
//
//	 法三 在冒泡排序的基础上再优化 当已经有序的时候就提前终止排序 从而减少对比次数
//	int flag = 0; // 通过定义一个标签 来判断是否已经达到有序 从而可以提前终止排序
//	for (int j = 0; j < 10 - 1; j++)
//	{
//		flag = 0;
//		for (int i = 0; i < 10 - 1 - j; i++)// 每一趟后 对比次数就减少一次
//		{
//			if (arr[i] > arr[i + 1])// 当进入if语句中 证明还未达到有序 需要交换排序
//			{
//				t = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = t;
//				flag = 1;
//			}
//			count++;
//		}
//		if (flag == 0)// / 当进入未if语句中 证明该趟排序已经达到有序 可以提前终止 从而减小趟数
//			break;
//	}
//
//	return 0;
//}
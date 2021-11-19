#include<stdio.h>
//int main()
//{
//	//  打印一个数组arr的内容 不使用数组下标 使用指针
//	int arr[] = { 1,2,3,4,5,6,7,8,8,9 };
//	int* p = arr;  // 实际上是指向arr[0]
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", *p);
//		//p++;
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	return 0;
//}
int DigitSum(int i)
{
	int count = 0;
	while (i / 10)
	{
		count = count + i % 10;
		i = i / 10;
	}
	return count;
}
int main()
{
	signed int i = 0;
	scanf("%d", &i);
	int num = DigitSum(i);
	printf("num=%d\n", num);
	return 0;
}



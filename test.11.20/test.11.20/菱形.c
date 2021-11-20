#include<stdio.h>
//   打印菱形
int main()
{
	int i = 0;
	int j = 0;// i，j为当前元素所在位置坐标
	int a = 0;//由于菱形的行列坐标相等
	scanf("%d", &a);// a代表将打印出来的菱形的行列坐标
	for (i= 1; i<= (a+1)/2; i++);//   遍历每一行
	{
		for (j = 1; j <= a; j++)    // 遍历每一行中每列的元素
		{
			if ((a + 1) / 2 - (i - 1) <= j && (a + 1) / 2 + (i - 1) >=j)
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	// 此时打印的是上半部分
	// 现在的打印下半部分
	for (i = (a + 1) / 2 + 1; i <= a; i++)
	{
		for (j = 1; j <= a; j++)
		{
			if ((a + 1) / 2 - (a - i) <= j && (a + 1) / 2 + (a - i) >= j)
				printf("*");
			else
				printf(" ");

		}
		printf("\n");
	}

	return 0;
}
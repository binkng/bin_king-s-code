//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
//
//数据范围：序列长度和序列中的值都满足 1 \le n \le 501≤n≤50
//输入描述：
//第一行输入一个整数(0≤N≤50)。
//
//第二行输入N个整数，输入用空格分隔的N个整数。
//
//第三行输入想要进行删除的一个整数。
//
//输出描述：
//输出为一行，删除指定数字之后的序列

  // 算法一
#include<stdio.h>
#define N 51
int main()
{
    int delet;
    int t;
    int i, j, n;
    int a[N];
    for (int i = 0; i < 51; i++)
        a[i] = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &delet);
    for (i = 0; i < n; i++)
    {
        if (a[i] == delet)
        {
            for (j = i; j <= n; j++)
                a[j] = a[j + 1];
              n--;
            i = -1;// 将数组中重复出现得元素再进行比较
        }
    }
    for (j = 0; j < n; j++)
        printf("%d ", a[j]);
}

//  算法二
//#include<stdio.h>
//int main()
//{
//    int i, j;
//    int n;
//    int arr_1[100];
//    int arr_2[100];
//    int del;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr_1[i]);
//    }
//    scanf("%d", &del);
//    for (i = 0, j = 0; i < n; i++)
//    {
//
//        if (del != arr_1[i])
//        {
//            arr_2[j] = arr_1[i];
//            j++;
//        }
//    }
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr_2[i]);
//    }
//    return 0;
//}

//          算法三              投机取巧的方法

//#include<stdio.h>
//int main()
//{
//	int a[50] = { 0 };
//	int i ,n;
//	int del;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &del);
//	for (i = 0; i < n; i++)
//	{
//		if (del != a[i])
//		{
//			printf("%d ", a[i]);
//		}
//
//	}
//	return 0;
//}
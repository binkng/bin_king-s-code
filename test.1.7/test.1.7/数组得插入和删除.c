//#include<stdio.h>
//void Print(int a[10])
//{
//	int i = 0;
//	for (i = 0; i <20; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//void Del(int m[10])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (m[i] == 4)
//		{
//			int j = i;
//			for (j = i; j < 10; j++)
//			{
//				m[j] = m[j + 1];
//			}
//		}
//	}
//}
//void Insert(int* m)
//{
//
//}
//int main()
//{
//	int a[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	Print(a);
//	Del(a);// 自定义一个delete函数
//	Print(a);
//	Insert(a);// 自定义一个插入函数
//	Print(a);
//	return 0;
//}


//    插入算法
//# include <stdio.h>
//int main(void)
//{
//    int a[23] = { 1, 5, 66, 8, 55, 9, 1, 32, 5, 65, 4, 8, 5, 15, 64, 156, 1564, 15, 1, 8, 9, 7, 215 };
//    int b[24];  //用来存放插入数字后的新数组, 因为又插入了一个值, 所以长度为24
//    int Index;  //插入值的下标, Index是“下标”的英文单词
//    int num;  //插入的值
//    int i;  //循环变量
//    printf("请输入插入值的下标：");
//    scanf("%d", &Index);
//    printf("请输入插入的数值：");
//    scanf("%d", &num);
//    for (i = 0; i < 24; ++i)
//    {
//        if (i < Index)
//        {
//            b[i] = a[i];  /*循环变量i小于插入值位置Index时, 每一个元素所放的位置不变*/
//        }
//        else if (i == Index)
//        {
//            b[i] = num;  //i等于Index时, 将插入值赋给数组b
//        }
//        else
//        {
//            b[i] = a[i - 1];  /*因为插入了一个新的元素, 所以插入位置后的每一个元素所存放的位置都要向后移一位*/
//        }
//    }
//    for (i = 0; i < 24; ++i)
//    {
//        printf("%d\x20", b[i]);  // \x20  是16进制的转义字符  表示空格
//    }
//    printf("\n");
//    return 0;
//}

                  //       删除算法
# include <stdio.h>
int main()
{
    int a[23] = { 1, 5, 66, 8, 55, 9, 1, 32, 5, 65, 4, 8, 5, 15, 64, 156, 1564, 15, 1, 8, 9, 7, 215 };
    int b[22];  /*用来存放删除数字后的新数组, 因为删除了一个值, 所以长度为22*/
    int Index;  //要删除的值的下标
    int i;  //循环变量
    printf("请输入要删除的值的下标：");
    scanf("%d", &Index);
    for (i = 0; i < 23; ++i)
    {
        if (i < Index)
        {
            b[i] = a[i];  /*循环变量i小于插入值位置Index时, 每一个元素所存放的位置不变*/
        }
        else
        {
            b[i] = a[i + 1];  /*删除值后面的元素都往前移一位, 要删除的值直接被覆盖*/
        }
    }
    for (i = 0; i < 22; ++i)
    {
        printf("%d\x20", b[i]);  // \x20表示空格          \x20  是16进制的转义字符  表示空格
    }
    printf("\n");
    return 0;
}
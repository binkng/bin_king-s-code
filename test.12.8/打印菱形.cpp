//#include<stdio.h>
//void Print(int k)
//{
//	// 打印上半部分
//	int i = 0;
//		for (i = 0; i < k; i++)
//		{
//			//打印空格
//			int j = 0;
//			for (j = 0; j < k - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			// 打印 *
//			for (j = 0; j < 2 * i + 1; j++)
//			{
//		    	printf("*");
//			}
//			printf("\n");
//		}
//		// 打印下半部分
//		for (i = 0; i < k - 1; i++)
//		{
//			int j = 0;
//			// 打印空格
//			for (j = 0; j <= i; j++)
//			{
//				printf(" ");
//			}
//			// 打印*
//			for (j = 0; j < 2 * (k - 1 - i) - 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//}
//
//int main()
//{
//	int k = 20;
//	Print(k);
//	return 0;
//}
//
// 
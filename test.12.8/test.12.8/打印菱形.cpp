//#include<stdio.h>
//void Print(int k)
//{
//	// ��ӡ�ϰ벿��
//	int i = 0;
//		for (i = 0; i < k; i++)
//		{
//			//��ӡ�ո�
//			int j = 0;
//			for (j = 0; j < k - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			// ��ӡ *
//			for (j = 0; j < 2 * i + 1; j++)
//			{
//		    	printf("*");
//			}
//			printf("\n");
//		}
//		// ��ӡ�°벿��
//		for (i = 0; i < k - 1; i++)
//		{
//			int j = 0;
//			// ��ӡ�ո�
//			for (j = 0; j <= i; j++)
//			{
//				printf(" ");
//			}
//			// ��ӡ*
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
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n= 0;
//	scanf("%d%d", &m, &n);
//
//
//	return 0;
//}



//  ͳ�ƶ�������1�ĸ���
//  дһ���������ز�����������1�ĸ���
//                  �㷨һ
//int count_bit(unsigned int n)   //unsigned ��ʾ��Ϊ����ʱҲ��׼ȷ�õ������ƣ����룩��1�ĸ���
//{
//	// Ĥ2 ��2�õ�������1��0
//	int count = 0;//  ��������
//	while (n)    //��n��=0ʱ��һֱѭ��
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//                 �㷨��
//int count_bit(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	
//	return count;
//}
 
//                  �㷨���������㷨��
//n=n&(n-1)     //nÿ&һ�Σ�n-1���ʼ��n����һ��1
//n
//13
//1101 n
//1100 n-1
//1011 n
//1000 n
//0111 n-1
//0000 n
//int count_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//			count++;
//	 }
//	return count;
//}
//
//
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//дһ��������a�Ķ����ƣ����룩��ʾ���м���1
//	int count = count_bit(a);
//	printf("count=%d", count);
//	return 0;
//}
//

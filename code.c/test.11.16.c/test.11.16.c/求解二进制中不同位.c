//#include<stdio.h>
//      �㷨һ һ��һ��ȥͳ�ƶ����Ƶ�ÿһλ
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (m % 2 != n % 2)
//		{
//			count++;
//		}
//		m = m / 2;
//		n = n / 2;
//	}
//	printf("count=%d\n", count);
//	return 0;
//
//}


///                       �㷨��  ����"   ^     "��ͬΪ0 ��ͬλ1
//int get_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);//  ÿ����һ������ tmp ����һ��1
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = 0;
//	count = get_bit(m, n);
//	printf("count=%d\n", count);
//	return 0;
//
//}



//#include<stdio.h>
//// ���1��100�к�9�����ֵĸ���
////int main()
////{
////	int i = 0;
////	int count = 0;
////	for (i = 1; i <= 100; i++)
////	{
////		if (i % 10 == 9)
////		{
////			count++;
////		}
////		if (i / 10 == 9)
////		{
////			count++;
////		}
////		
////	}
////	printf("count=%d\n", count);
////	return 0;
////}
//// 
//// 
////      ����1/1-1/2+1/3-1/4........+1/99-1/100��ֵ����ӡ�����
//// �㷨1
////int main()
////{
////	int i = 0;
////	double a = 0;
////	double b = 0;
////	for (i = 1; i < 100; i += 2)
////	{
////		a = a + 1.0 / i;// ע�� ���ٵ���һ��Ϊ������
////	}
////	for (i = 2; i <= 100; i += 2)
////	{
////		b = b + 1.0 / i;
////	}
////	double c = a - b;
////	printf("c=%lf\n", c);
////	return 0;
////}
////          �㷨2
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("sum=%lf", sum);
//	return 0;
//}
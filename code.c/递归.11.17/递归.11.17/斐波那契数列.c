//#include<stdio.h>
////           �㷨һ ʹ�õݹ� ����n����Ч��̫�ͣ�
//int Sum(int n)// ʹ�õݹ��㷨Ч��̫��
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Sum(n - 1) + Sum(n - 2);
//}
////    �㷨��  ʹ��ѭ����ʵ��
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)//   ��Ϊ�ʼ������Ϊ1 ֱ��return����
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;    //���ƽ���ѭ���Ĵ���
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = Sum(n);//  ���õݹ麯��ʵ��
//	printf("sum=%d\n", sum);
//	int Sum = Fib(n);
//	printf("Sum=%d\n", Sum);
//	return 0;
//}
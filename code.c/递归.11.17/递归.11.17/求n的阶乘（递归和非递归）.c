//#include<stdio.h>
//int Sum(int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	return sum;
//}
//int Suum(int n)
//{
//	/*int sum = 1;
//	if(n>1)                  �������
//	sum = n * Suum(n - 1);
//	return sum;*/
//
//
//	//   ��ȷ�ݹ��㷨
//	if (n <= 1)
//		return 1;
//	else
//		return n * Suum(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int s = 0;
//	s = Sum(n);//  �ǵݹ�
//	printf("s=%d\n",s);
//	s = Suum(n);//  �ݹ�
//	printf("s=%d\n", s);
//	return 0;
//}
//#include<stdio.h>
//double Fax( int n, int k)
//{
//	//  �㷨ʵ��ԭ��n^k=n*n^(k-1)
//	if (k < 0)
//		return  (1.0 / (Fax(n, -k)));  //  �ر�ע�⣺����Ҫ���ǵ�k<0ʱ����� ��k��Ϊ+����ֻ��Ҫ��k�Ӹ�-�ż��ɣ�-k��
//	else if (k == 0)
//		return 1;
//	else
//		return n * Fax(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double a = Fax(n, k);
//	printf("a=%lf\n", a);
//	return 0;
//}
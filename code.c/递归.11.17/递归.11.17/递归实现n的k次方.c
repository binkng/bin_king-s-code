//#include<stdio.h>
//double Fax( int n, int k)
//{
//	//  算法实现原理：n^k=n*n^(k-1)
//	if (k < 0)
//		return  (1.0 / (Fax(n, -k)));  //  特别注意：我们要考虑当k<0时的情况 将k变为+数，只需要在k加个-号即可（-k）
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
//#include<stdio.h>
//  例如123想要得到它的每一位上的数字
//  只需要对其进行%10 和 /10即可
//同理 想要得到a的补码只需对其进行%2 /2 即可
//int main()   //算法1 只适用于正整数
//{
//	 //求一个整数内存中二进制1得个数
//	int a = 0;
//	scanf("%d", &a);
//	//统计a的补码中1的个数
//    int count = 0;
//	while (a)//直到最后为0 跳出循环
//	{
//		if (a % 2 == 1)
//			count++;
//		a = a / 2;  //把该位统计完 不管它是不是1 都去掉
//
//	}
//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	int i = 0;
//	//32bit
//	// a&1==1
//	//000001
//	//000011
//	//000001
//	// 由此可得出当二进制最后一位为1 与1 进行&运算一定的到1
//	for (i = 1; i <= 32; i++)
//	{
//		if (1 == ((a >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}  
//    算法3
//int main()
//{
//	
//	int num = -1;
//	int i = 0;
//	int count = 0;// 计数
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//
//	}
//	printf("%d", count);
//	return 0;
//}
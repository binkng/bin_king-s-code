//#include<stdio.h>
//void swap(int* x, int* y)
//{
//	int c = 0;
//	c = *x;
//	*x= *y;
//	*y = c;
//}
//int main()
//{
//	int a = 2;
//	int b = 5;
//	swap(&a, &b);
//	printf("%d %d", a, b);
//
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
/////*求出0~100000之间所有“水仙花数”并输出
//// 水仙花数是指一个n位数 其各位数字的n次方之和等于该数本身
////  例如 153=1*/^3+5^3+3^3
//
//
//int sum(int i)//  计算此时i的位数
//{
//	int count = 1;
//	if (i == 0)
//		return 0;
//	while (i > 9)
//	{
//		i = i / 10;
//		count++;
//	}
//	return count;
//}
//
//int A(int i, int m)
//{
//	int a = 0;
//	if (i == 0)
//	{
//		return 0;
//	}
//	int Sum = 0;
//	for (a = 1; a <= m; a++)
//	{
//		Sum += pow(i%10,m);//  次方调用库函数pow（）
//		i = i / 10;
//	}
//	return  Sum;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int m=sum(i);// 封装一个函数求解该数的位数
//		int n = A( i, m);// 求该数的次方
//		if (i == n)
//			printf("%d ", i);
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int Mul(int i)
//{
//    int mul = 0;
//    mul = (i / 10000) * (i % 10000) + ((i / 1000) * (i % 1000)) + ((i / 100) * (i % 100)) + ((i / 10) * (i % 10));
//    return mul;
//}
//int main()
//{
//    int i = 0;
//    for (i = 10000; i < 100000; i++)
//    {
//        int m = Mul(i);//计算拆分后的乘积
//        if (i == m)
//            printf("%d ", i);
//    }
//    return 0;
//}


//#include<stdio.h>
//void Print(int b[])
//{
//    int a = b[0];
//    int i = 0;
//    int tmp = 0;
//    for (i = 1; i = 20; i++)
//    {
//        for (int j = i + 1; j < 20; j++)
//        {
//            if (b[j] > b[i])
//            {
//                tmp = b[i];
//                b[i] = b[j];
//                b[j] = b[i];
//            }
//        }
//    }
//    printf("%d ", b[i]);
//
//}
//int main()
//{
//    int a = 0;//  学生数
//    int b[20] = { 0 };
//    scanf("%d ", &a);
//    scanf("%d ", &b);
//    Print(b);
//    return 0;
//}
//
//#include<stdio.h>
//int main() {
//    int arr[40] = { 0 };
//    int num = 0;
//    scanf("%d", &num);//输入几名
//    for (int k = 0; k <= num; k++) {//输入成绩
//        scanf("%d", &arr[k]);
//    }
//    int temp = 0;
//    for (int i = 0; i < num; i++) {//第i位为最大数
//        for (int j = i + 1; j < num; j++) {//从第i+1位开始遍历剩余数
//            if (arr[j] > arr[i]) {//存在大于最大数的数
//                temp = arr[i];//把最大数和比较数进行交换
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//
//        }
//    }
//    for (int k = 0; k < 5; k++)
//        printf("%d ", arr[k]);
//
//    return 0;
//}


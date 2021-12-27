//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int ret = 0;
//    int i = 0;
//    while (n)
//    {
//        int w = n % 10;
//        if (0 == w % 2)
//        {
//            w = 0;
//        }
//        else
//        {
//            w = 1;
//        }
//        ret += w * pow(10, i++);
//        n /= 10;
//    }
//
//    printf("%d\n", ret);
//
//    return 0;
//}


//C语言pow()函数：求x的y次方（次幂）
//头文件：#include <math.h>

//pow() 函数用来求 x 的 y 次幂（次方），其原型为：
//double pow(double x, double y);
//
//pow()用来计算以x 为底的 y 次方值，然后将结果返回。设返回值为 ret，则 ret = xy。
//
//可能导致错误的情况：
//如果底数 x 为负数并且指数 y 不是整数，将会导致 domain error 错误。
//如果底数 x 和指数 y 都是 0，可能会导致 domain error 错误，也可能没有；这跟库的实现有关。
//如果底数 x 是 0，指数 y 是负数，可能会导致 domain error 或 pole error 错误，也可能没有；这跟库的实现有关。
//如果返回值 ret 太大或者太小，将会导致 range error 错误。
//
//错误代码：
//如果发生 domain error 错误，那么全局变量 errno 将被设置为  EDOM；
//如果发生 pole error 或 range error 错误，那么全局变量 errno 将被设置为 ERANGE。
//
//注意，使用 GCC 编译时请加入 - lm。
//
//【实例】请看下面的代码。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    printf("7 ^ 3 = %f\n", pow(7.0, 3.0));
//    printf("4.73 ^ 12 = %f\n", pow(4.73, 12.0));
//    printf("32.01 ^ 1.54 = %f\n", pow(32.01, 1.54));
//    return 0;
//}
//输出结果：
//7 ^ 3 = 343.000000
//4.73 ^ 12 = 125410439.217423
//32.01 ^ 1.54 = 208.036691

//    算法二  采用数组
#include<stdio.h>
int main()
{
    int n;
    int a[9];//定义一个数组用于存放每位数字上是奇数还是偶数
    int count = 0;//定义一个count，用于对位数进行计数
    int result = 0;
    scanf("%d", &n);
    while (n != 0)//从最后一位开始检查每一位上是奇数还是偶数，注意a[0]存放的是最后一位，得出数组后需要从数组最后一位开始计算
    {
        int m = n % 10;
        if (m % 2 == 0)
            a[count++] = 0;
        else
            a[count++] = 1;
        n = n / 10;
    }
    for (int i = count - 1; i >= 0; i--)//从数组最后一位开始计算得出的数，也就是原数的顺序来算
        result = result * 10 + a[i];
    printf("%d", result);
   // return 0;
}
//#include<stdio.h>
////   算法一 递归实现
//////台阶为1,2时走法分别1，2种 1:(1) 2:(1,1),(2)
////要走完n阶时，即我第一步要么走的1阶，要么就是2阶，   eg:      上3阶
////若第一步是走1阶的时候，那么还剩n-1个台阶          第一步：走1阶，剩余2阶
////若第一步是走2阶的时候，那么还剩n-2个台阶          第一步：走2阶，剩余1阶
////即转变为求我走1阶剩余台阶的走法+走2阶时剩余台阶的走法，即可递推到走最后一步的走法有多少种
//int Count(int n)
//{
//    return n <= 2 ? n : Count(n - 1) + Count(n - 2);
// if (n == 1)
//return  1;
//    else if (n == 2)
//    return   2;
//    else
//    return Upstairs(n - 1) + Upstairs(n - 2);

//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Count(n);
//    printf("%d", ret);
//    return 0;
//}
#include<stdio.h>
int Count(int n)
{
    return n <= 2 ? n : Count(n - 1) + Count(n - 2);
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = Count(n);
    printf("%d", ret);
    return 0;
}
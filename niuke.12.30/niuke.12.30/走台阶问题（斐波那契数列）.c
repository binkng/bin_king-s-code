//#include<stdio.h>
////   �㷨һ �ݹ�ʵ��
//////̨��Ϊ1,2ʱ�߷��ֱ�1��2�� 1:(1) 2:(1,1),(2)
////Ҫ����n��ʱ�����ҵ�һ��Ҫô�ߵ�1�ף�Ҫô����2�ף�   eg:      ��3��
////����һ������1�׵�ʱ����ô��ʣn-1��̨��          ��һ������1�ף�ʣ��2��
////����һ������2�׵�ʱ����ô��ʣn-2��̨��          ��һ������2�ף�ʣ��1��
////��ת��Ϊ������1��ʣ��̨�׵��߷�+��2��ʱʣ��̨�׵��߷������ɵ��Ƶ������һ�����߷��ж�����
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
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


//C����pow()��������x��y�η������ݣ�
//ͷ�ļ���#include <math.h>

//pow() ���������� x �� y ���ݣ��η�������ԭ��Ϊ��
//double pow(double x, double y);
//
//pow()����������x Ϊ�׵� y �η�ֵ��Ȼ�󽫽�����ء��践��ֵΪ ret���� ret = xy��
//
//���ܵ��´���������
//������� x Ϊ��������ָ�� y �������������ᵼ�� domain error ����
//������� x ��ָ�� y ���� 0�����ܻᵼ�� domain error ����Ҳ����û�У�������ʵ���йء�
//������� x �� 0��ָ�� y �Ǹ��������ܻᵼ�� domain error �� pole error ����Ҳ����û�У�������ʵ���йء�
//�������ֵ ret ̫�����̫С�����ᵼ�� range error ����
//
//������룺
//������� domain error ������ôȫ�ֱ��� errno ��������Ϊ  EDOM��
//������� pole error �� range error ������ôȫ�ֱ��� errno ��������Ϊ ERANGE��
//
//ע�⣬ʹ�� GCC ����ʱ����� - lm��
//
//��ʵ�����뿴����Ĵ��롣
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    printf("7 ^ 3 = %f\n", pow(7.0, 3.0));
//    printf("4.73 ^ 12 = %f\n", pow(4.73, 12.0));
//    printf("32.01 ^ 1.54 = %f\n", pow(32.01, 1.54));
//    return 0;
//}
//��������
//7 ^ 3 = 343.000000
//4.73 ^ 12 = 125410439.217423
//32.01 ^ 1.54 = 208.036691

//    �㷨��  ��������
#include<stdio.h>
int main()
{
    int n;
    int a[9];//����һ���������ڴ��ÿλ����������������ż��
    int count = 0;//����һ��count�����ڶ�λ�����м���
    int result = 0;
    scanf("%d", &n);
    while (n != 0)//�����һλ��ʼ���ÿһλ������������ż����ע��a[0]��ŵ������һλ���ó��������Ҫ���������һλ��ʼ����
    {
        int m = n % 10;
        if (m % 2 == 0)
            a[count++] = 0;
        else
            a[count++] = 1;
        n = n / 10;
    }
    for (int i = count - 1; i >= 0; i--)//���������һλ��ʼ����ó�������Ҳ����ԭ����˳������
        result = result * 10 + a[i];
    printf("%d", result);
   // return 0;
}
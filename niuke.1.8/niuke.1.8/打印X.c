#include<stdio.h>
//X��ͼ�����Բ�ֳ�����б�ߣ�����i==jʱ����Ǻţ�����i==n-i-1ʱ����Ǻż��ɣ��������������ո�
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        //��������
        for (int i = 0; i < n; i++)
        {
            //������
            for (int j = 0; j < n; j++)
            {
                if (i == j || i + j == n - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
//��һ���������У��������ظ�������������ɾ��ָ����ĳһ�����������ɾ��ָ������֮������У�������δ��ɾ�����ֵ�ǰ��λ��û�з����ı䡣
//
//���ݷ�Χ�����г��Ⱥ������е�ֵ������ 1 \le n \le 501��n��50
//����������
//��һ������һ������(0��N��50)��
//
//�ڶ�������N�������������ÿո�ָ���N��������
//
//������������Ҫ����ɾ����һ��������
//
//���������
//���Ϊһ�У�ɾ��ָ������֮�������

  // �㷨һ
#include<stdio.h>
#define N 51
int main()
{
    int delet;
    int t;
    int i, j, n;
    int a[N];
    for (int i = 0; i < 51; i++)
        a[i] = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &delet);
    for (i = 0; i < n; i++)
    {
        if (a[i] == delet)
        {
            for (j = i; j <= n; j++)
                a[j] = a[j + 1];
              n--;
            i = -1;// ���������ظ����ֵ�Ԫ���ٽ��бȽ�
        }
    }
    for (j = 0; j < n; j++)
        printf("%d ", a[j]);
}

//  �㷨��
//#include<stdio.h>
//int main()
//{
//    int i, j;
//    int n;
//    int arr_1[100];
//    int arr_2[100];
//    int del;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr_1[i]);
//    }
//    scanf("%d", &del);
//    for (i = 0, j = 0; i < n; i++)
//    {
//
//        if (del != arr_1[i])
//        {
//            arr_2[j] = arr_1[i];
//            j++;
//        }
//    }
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr_2[i]);
//    }
//    return 0;
//}

//          �㷨��              Ͷ��ȡ�ɵķ���

//#include<stdio.h>
//int main()
//{
//	int a[50] = { 0 };
//	int i ,n;
//	int del;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &del);
//	for (i = 0; i < n; i++)
//	{
//		if (del != a[i])
//		{
//			printf("%d ", a[i]);
//		}
//
//	}
//	return 0;
//}
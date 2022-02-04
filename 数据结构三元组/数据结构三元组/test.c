#include<stdio.h>
#define ElemType int
#define MaxSize 100

//������Ԫ�����Ա��е�����Ԫ�ش洢�ṹ
typedef struct
{
    int row;        //�к�
    int col;        //�к�
    ElemType d;     //Ԫ��ֵ��ElemTypeΪ����Ԫ������

} TupNode; //��Ԫ�鶨��


//������Ԫ�����Ա�洢�ṹ
typedef struct
{
    int rows;                   //����ֵ
    int cols;                   //����ֵ
    int nums;                   //����Ԫ�ظ���
    TupNode data[MaxSize];      //data������

} TSMatrix; //��Ԫ��˳�����

//������ʽɨ���ά����A����������Ԫ�ؼ��뵽��Ԫ��t
//��3��4�е�ϡ�����Ϊ��
void CreatMat(TSMatrix* t, int arr[3][4])
{
    int i;
    int j;
    t->rows = 3;
    t->cols = 4;
    t->nums = 0;

    //ɨ������еķ���Ԫ��
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            //ֻ�����ֵ������Ԫ�鷽ʽ
            if (arr[i][j] != 0)
            {
                t->data[t->nums].row = i;
                t->data[t->nums].col = j;
                t->data[t->nums].d = arr[i][j];
                t->nums++;
            }
        }
    }
}
//����Ԫ�����Ա���ָ��λ�õ�Ԫ��ֵ��ֵ������x
void arr_Assign(TSMatrix t, int* data, int i, int j)
{
    int k = 0;
    //i��j�Ƿ�Ϸ�
    if (i >= t.rows || j >= t.cols)
    {
        return;
    }

    //�ҵ�ָ��Ԫ�ص����±�
    while (k < t.nums && i > t.data[k].row)
    {
        k++;
    }

    //���ҵ�ָ��Ԫ�ص����±�����ҵ�ָ��Ԫ�ص����±�
    while (k < t.nums && i == t.data[k].row && j > t.data[k].col)
    {
        k++;
    }
    //���ָ��Ԫ�ص��к��ж���ȣ�˵���ҵ���
    if (t.data[k].row == i && t.data[k].col)
    {
        *data = t.data[k].d;
    }
    else
    {
        //˵��û�ҵ�
        *data = 0;
    }
}
//�޸���Ԫ��Ԫ���е�ֵ��ִ��A[i][j]=x
void arr_Value(TSMatrix* t, int data, int i, int j)
{
    int k = 0;
    int k1;
    //ָ�����к����Ƿ�Ϸ�
    if (i >= t->rows || j >= t->cols)
    {
        return;
    }
    //�Ȳ�����
    while (k < t->nums && i > t->data[k].row)
    {
        k++;
    }

    //������
    while (k < t->nums && i == t->data[k].row && j > t->data[k].col)
    {
        k++;
    }

    //���ҵ�ָ��λ��ʱֱ���޸�
    if (i == t->data[k].row && j == t->data[k].col)
    {
        t->data[k].d = data;
    }
    else
    {
        //���ָ��λ�ò����ڣ���˵����Ԫ��ֵΪ0����ʱ����
        for (k1 = t->nums; k1 >= k; k1--)
        {
            t->data[k1 + 1].col = t->data[k1].col;
            t->data[k1 + 1].row = t->data[k1].row;
            t->data[k1 + 1].d = t->data[k1].d;
        }
        //��������
        t->data[k].row = i;
        t->data[k].col = j;
        t->data[k].d = data;
        t->nums++;
    }
}
void DispMat(TSMatrix* t)
{
    int i;
    if (t->nums <= 0)
    {
        return;
    }
    printf("\t����:%d\t����:%d\tԪ�ظ���:%d\n", t->rows, t->cols, t->nums);
    printf(" ------------------\n");
    //������е���Ԫ��
    for (i = 0; i < t->nums; i++)
    {
        printf("\t��%d��\t��%d��\t%d\n", t->data[i].row, t->data[i].col, t->data[i].d);
    }
}

int main(void)
{
    //ͨ���Զ���3��4�еĶ�ά��������ʾϡ�����
    int arr[3][4] = {
                    {0 , 1 , 0 , 0},
                    {0 , 0 , 0 , 2},
                    {3 , 0 , 0 , 4}
    };

    int data = 0;
    TSMatrix t = { 0 };
    CreatMat(&t, arr);
    //�����Ԫ��
    DispMat(&t);
    //��ȡϡ�����ָ��λ�õ�ֵ,data��ֵӦ��Ϊ1�Ŷ�
    arr_Assign(t, &data, 0, 1);
    printf("---------------\n");
    printf("��0�е�1�е�����Ԫ��ֵ��%d\n\n", data);
    printf("----------------\n");

    //��ϡ������0�е�0��Ԫ�ص�ֵ����Ϊ1
    arr_Value(&t, data, 0, 0);
    //�����Ԫ��
    DispMat(&t);
    return 0;
}
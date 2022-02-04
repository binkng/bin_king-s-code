#include<stdio.h>
#define ElemType int
#define MaxSize 100

//定义三元组线性表中的数据元素存储结构
typedef struct
{
    int row;        //行号
    int col;        //列号
    ElemType d;     //元素值，ElemType为数据元素类型

} TupNode; //三元组定义


//定义三元组线性表存储结构
typedef struct
{
    int rows;                   //行数值
    int cols;                   //列数值
    int nums;                   //非零元素个数
    TupNode data[MaxSize];      //data数据域

} TSMatrix; //三元组顺序表定义

//以行序方式扫描二维矩阵A，将其非零的元素加入到三元组t
//以3行4列的稀疏矩阵为例
void CreatMat(TSMatrix* t, int arr[3][4])
{
    int i;
    int j;
    t->rows = 3;
    t->cols = 4;
    t->nums = 0;

    //扫描矩阵中的非零元素
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            //只存非零值，以三元组方式
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
//将三元组线性表中指定位置的元素值赋值给变量x
void arr_Assign(TSMatrix t, int* data, int i, int j)
{
    int k = 0;
    //i和j是否合法
    if (i >= t.rows || j >= t.cols)
    {
        return;
    }

    //找到指定元素的行下标
    while (k < t.nums && i > t.data[k].row)
    {
        k++;
    }

    //当找到指定元素的行下标后，再找到指定元素的列下标
    while (k < t.nums && i == t.data[k].row && j > t.data[k].col)
    {
        k++;
    }
    //如果指定元素的行和列都相等，说明找到了
    if (t.data[k].row == i && t.data[k].col)
    {
        *data = t.data[k].d;
    }
    else
    {
        //说明没找到
        *data = 0;
    }
}
//修改三元组元素中的值：执行A[i][j]=x
void arr_Value(TSMatrix* t, int data, int i, int j)
{
    int k = 0;
    int k1;
    //指定的行和列是否合法
    if (i >= t->rows || j >= t->cols)
    {
        return;
    }
    //先查找行
    while (k < t->nums && i > t->data[k].row)
    {
        k++;
    }

    //查找列
    while (k < t->nums && i == t->data[k].row && j > t->data[k].col)
    {
        k++;
    }

    //当找到指定位置时直接修改
    if (i == t->data[k].row && j == t->data[k].col)
    {
        t->data[k].d = data;
    }
    else
    {
        //如果指定位置不存在，则说明该元素值为0，此时插入
        for (k1 = t->nums; k1 >= k; k1--)
        {
            t->data[k1 + 1].col = t->data[k1].col;
            t->data[k1 + 1].row = t->data[k1].row;
            t->data[k1 + 1].d = t->data[k1].d;
        }
        //插入数据
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
    printf("\t行数:%d\t列数:%d\t元素个数:%d\n", t->rows, t->cols, t->nums);
    printf(" ------------------\n");
    //输出所有的三元组
    for (i = 0; i < t->nums; i++)
    {
        printf("\t第%d行\t第%d列\t%d\n", t->data[i].row, t->data[i].col, t->data[i].d);
    }
}

int main(void)
{
    //通过自定义3行4列的二维数组来表示稀疏矩阵
    int arr[3][4] = {
                    {0 , 1 , 0 , 0},
                    {0 , 0 , 0 , 2},
                    {3 , 0 , 0 , 4}
    };

    int data = 0;
    TSMatrix t = { 0 };
    CreatMat(&t, arr);
    //输出三元组
    DispMat(&t);
    //获取稀疏矩阵指定位置的值,data的值应该为1才对
    arr_Assign(t, &data, 0, 1);
    printf("---------------\n");
    printf("第0行第1列的数据元素值：%d\n\n", data);
    printf("----------------\n");

    //将稀疏矩阵第0行第0列元素的值设置为1
    arr_Value(&t, data, 0, 0);
    //输出三元组
    DispMat(&t);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#define size 10
#define error 0
#define OK 1
typedef struct
{
	int* data;// 用malloc申请一块空间
	int length;
}Sqlist;
int Initlist(Sqlist* L)
{
	L->data = (int*)malloc(sizeof(int) * size);
	if (L->data == NULL)
		return error;
	else
		L->length = 0;
	return OK;
}
void Creatlist(Sqlist* L, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("请输入第%d个元素:", i + 1);
		scanf("%d", L->data + i);
		L->length++;
	}
}
void Print(Sqlist L)
{
	for (int i = 0; i < (L.length); i++)
	{
		printf("%d ", *(L.data + i));
	}
	printf("顺序表长度位:%d", L.length);
}
int Deletelist(Sqlist* L, int n)// 删除第n个元素  将n后面的元素往前移动一位
{
	if (n < 1 || (n > L->length)) return error;// 
	for (int i = n; i < (L->length); i++)
	{
		*(L->data + n - 1) = *(L->data + n);
	}
	L->length--;
	return OK;
}
int main()
{
	Sqlist L1;
	int ret = Initlist(&L1);//初始化顺序表
	printf("%p \n", &L1);
	printf("%p \n", L1.data);
	if (ret)
		printf("初始化成功！\n");
	else
		printf("初始化失败！\n");
	int n = 0;
	printf("请输入想要创建的元素的个数：");
	scanf("%d", &n);//   n代表创建顺序表打元素的个数
	Creatlist(&L1, n);//创建顺序表 向顺序中添加元素
	Print(L1);
	int m = 0;
	printf("\n请输入想要删除的元素的序号：");
	scanf("%d ", &m);//  输入要删除元素的序号
	Deletelist(&L1, m);
	Print(L1);
	return 0;
}
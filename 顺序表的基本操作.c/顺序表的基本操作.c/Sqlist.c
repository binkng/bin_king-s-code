#include"Sqlist.h"
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
	printf("顺序表长度位:%d \n", L.length);
}
int Deletelist(Sqlist* L,int n)// 删除第n个元素  将n后面的元素往前移动一位
{
	if (n < 1 || (n > L->length)) return error;// 
	for (int i = n; i < (L->length); i++)
	{
		*(L->data + i-1) = *(L->data + i );
	}
	L->length--;
	printf("删除成功");
	return OK;
}
int Getelem(Sqlist L, int i, int* e)
{
	if (i < 1 || (i > L.length))
		return error;
	*e = L.data[i-1];
	return OK;

}
int LocateElem(Sqlist L, int e)
{
	int i = 0;
	for (i = 0; i < L.length; i++)
	{
		if (e == L.data[i])
			return OK;
	}
	return error;
}
int ListInsert(Sqlist* L, int i,int e)//插入的合法位置是 1~length+1+

{
	if (i < 1 || (i > L->length+1))
		return error;
	if (L->length == size)
		return error;
	for (int j = L->length - 1; j > i - 1; j--)
	{
		L->data[j + 1] = L->data[j];// 把从i开始length往后移动一位
	}
	L->data[i - 1] = e;
	L->length++;
	return OK;
}
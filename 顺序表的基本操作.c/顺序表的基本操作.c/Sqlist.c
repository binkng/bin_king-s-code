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
		printf("�������%d��Ԫ��:", i + 1);
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
	printf("˳�����λ:%d \n", L.length);
}
int Deletelist(Sqlist* L,int n)// ɾ����n��Ԫ��  ��n�����Ԫ����ǰ�ƶ�һλ
{
	if (n < 1 || (n > L->length)) return error;// 
	for (int i = n; i < (L->length); i++)
	{
		*(L->data + i-1) = *(L->data + i );
	}
	L->length--;
	printf("ɾ���ɹ�");
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
int ListInsert(Sqlist* L, int i,int e)//����ĺϷ�λ���� 1~length+1+

{
	if (i < 1 || (i > L->length+1))
		return error;
	if (L->length == size)
		return error;
	for (int j = L->length - 1; j > i - 1; j--)
	{
		L->data[j + 1] = L->data[j];// �Ѵ�i��ʼlength�����ƶ�һλ
	}
	L->data[i - 1] = e;
	L->length++;
	return OK;
}
#include<stdio.h>
#include<stdlib.h>
#define size 10
#define error 0
#define OK 1
typedef struct
{
	int* data;// ��malloc����һ��ռ�
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
	printf("˳�����λ:%d", L.length);
}
int Deletelist(Sqlist* L, int n)// ɾ����n��Ԫ��  ��n�����Ԫ����ǰ�ƶ�һλ
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
	int ret = Initlist(&L1);//��ʼ��˳���
	printf("%p \n", &L1);
	printf("%p \n", L1.data);
	if (ret)
		printf("��ʼ���ɹ���\n");
	else
		printf("��ʼ��ʧ�ܣ�\n");
	int n = 0;
	printf("��������Ҫ������Ԫ�صĸ�����");
	scanf("%d", &n);//   n������˳����Ԫ�صĸ���
	Creatlist(&L1, n);//����˳��� ��˳�������Ԫ��
	Print(L1);
	int m = 0;
	printf("\n��������Ҫɾ����Ԫ�ص���ţ�");
	scanf("%d ", &m);//  ����Ҫɾ��Ԫ�ص����
	Deletelist(&L1, m);
	Print(L1);
	return 0;
}
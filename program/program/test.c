#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define error 0
typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode, * Linklist;
int InitList(Linklist L)
{
	L = (Linklist)malloc(sizeof(Lnode));
	if (L == NULL)
	{
		return error;
	}
	else
		(L)->next = NULL;
	return OK;
}
int CreatList(Linklist L, int n)
{
	Linklist q = L;
	for (int i = 1; i <= n; ++i)
	{
		Lnode* p = (Linklist)malloc(sizeof(Lnode));//  ����һ���������p
		if (p == NULL)
		{
			return error;
		}
		else
			printf("�������%d��Ԫ��\n", i);
		scanf("%d", &p->data);// �������ݵ�������  //  �ر�ע�� ��������ȡ��ַ
		p->next = q->next;// ͷ�巨
		q->next = p;//   ����������˳�򲻿��Ե���

	}
	return OK;
}
void Print(Linklist L)
{
	Linklist p = L;
	p = (L)->next;
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

int main()
{
	Linklist L1=NULL;
	InitList(L1);
	printf("�������һ������ĳ��ȣ�");
	int n;
	scanf("%d", &n);
	CreatList(L1, n);
	Print(L1);
	return 0;
}
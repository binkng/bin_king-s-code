#include<stdio.h>
#include<stdlib.h>
#define error 0
#define OK 1
typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode,*Linklist;
int Initlist(Linklist* L)
{
	*L = (Linklist)malloc(sizeof(Lnode));
	if (*L == NULL)
		return error;
	else
		(*L)->next = NULL;
		return OK;
}
int Creatlist(Linklist* L,int j)
{
	Lnode* p = *L;  //  ����һ���������
	for (int i = 1; i <=j; i++)
	{
		Lnode* q = (Linklist)malloc(sizeof(Lnode));
		if (q == NULL)
			return error;
		else
		{
			printf("�������%d��Ԫ��", i);
			scanf("%d", &(q->data));
			//  ����β�巨
			p->next = q;
			p = q;
			q->next = NULL;
		}
	}
	return OK;
}
void Print(Linklist L)
{
	Lnode* p = L->next;
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}
void MergeList(Linklist* L1, Linklist* L2,Linklist* L3)
{
	Lnode* p1=(*L1)->next;
	Lnode* p2= (*L2)->next;
	Lnode* p3;//   ������������������ָ��
	*L3 = *L1;// L3ռ��L1��ͷ���
	(*L3)->next = NULL;
	//  ǰ�巨
	while (p1 || p2)//  ֻҪ����һ���ձ� ����P3ָ����ϲ���Ԫ��
	{
		if (!p1)
		{
			p3 = p2; p2 = p2->next;
		}
		else if(!p2)
		{
			p3 = p1;
			p1 = p1->next;
		}
		else if (p1->data <= p2->data)
		{
			p3 = p1;
			p1 = p1->next;
		}
		else
		{
			p3 = p2;
			p2 = p2->next;
		}
		p3->next = (*L3)->next;
		(*L3)->next = p3;
	}
}
int main()
{
	Linklist L1;
	Linklist L2;
	Initlist(&L1);
	int n = 0;
	printf("��������Ҫ������һ������Ĵ�С��");
	scanf("%d", &n);
	Creatlist(&L1,n);
	Print(L1);
	Initlist(&L2);
	int m = 0;
	printf("��������Ҫ�����ڶ�������Ĵ�С��");
	scanf("%d", &m);
	Creatlist(&L2,m);
	Print(L2);
	Linklist L3;
	MergeList(&L1, &L2,&L3);
	Print(L3);
	Print(L1);
	return 0;
}
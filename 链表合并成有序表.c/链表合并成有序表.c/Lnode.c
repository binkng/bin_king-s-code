//#include<stdio.h>
//#include<stdlib.h>
//#define OK 1
//#define error 0
//typedef struct Lnode
//{
//	int data;
//	struct Lnode* next;
//}Lnode, * Linklist;
//int InitList(Linklist L)
//{
//	L = (Linklist)malloc(sizeof(Lnode));
//	if (L == NULL)
//	{
//		return error;
//	}
//	else
//		L->next = NULL;
//	return OK;
//}
//int CreatList(Linklist L,int n)
//{
//	Linklist q = L;
//	for (int i = 1; i <= n; ++i)
//	{
//		Lnode* p = (Linklist)malloc(sizeof(Lnode));//  ����һ���������p
//		if (p == NULL)
//		{
//			return error;
//		}
//		else
//		printf("�������%d��Ԫ��\n", i);
//		scanf("%d", &p->data);// �������ݵ�������  //  �ر�ע�� ��������ȡ��ַ
//		//p->next = q->next;// ͷ�巨
//		//q->next = p;//   ����������˳�򲻿��Ե���
//		//  β�巨
//		p->next = NULL;
//		q->next = p;
//		q = p;
//	}
//	return OK;
//}
//void Print(Linklist L)
//{
//	Linklist p = L;
//	p = L->next;
//	while (p)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//	printf("\n");
//}
//void MergeList(Linklist l1, Linklist l2, Linklist l3)
//{
//	Lnode* la;
//	Lnode* lb;
//	Lnode* lc;// ����3��ָ��������L1L2L3
//	la = l1->next;
//	lb = l2->next;
//	l3 = lc = l1;// ���ϲ��������L3��L1��ͷ���
//	while (la && lb)
//			{
//				if (la->data <= lb->data)// �����La����L3����
//				{
//					lc->next = la;
//					lc = la;
//					la = la->next;
//				}
//				else
//				{
//					lc->next = lb;
//					lc = lb;
//					lb = lb->next;
//				}
//			}
//			lc->next = la ? la : lb;
//			free(l2);//   ��L2��ͷ�ڵ��ͷŵ�
//		
//}
//int main()
//{
//	//Linklist L1;
//	Lnode L1;
//	InitList(&L1);
//	printf("�������һ������ĳ��ȣ�");
//	int n;
//	scanf("%d", &n);
//	CreatList(&L1,n);
//	Print(&L1);
//	Lnode L2;
//	InitList(&L2);
//	printf("������ڶ�������ĳ��ȣ�");
//	int m;
//	scanf("%d", &m);
//	CreatList(&L2, m);
//	Print(&L2);
//	Lnode L3;
//	MergeList(&L1, &L2, &L3);
//	printf("�ϲ��������Ϊ��\n");
//	Print(&L3);
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#define error 0
#define OK 1
typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode,*Linklist;
int InitList(Linklist* L)
{
	*L = (Linklist)malloc(sizeof(Lnode));
	if (*L == NULL)
		return error;
	else
	(*L)->next = NULL;
	return OK;
}
int CreatList(Linklist* L, int n)
{
	Lnode* q=*L;// ����һ������ָ��
	for (int i = 1; i <= n; i++)
	{
		Lnode* p = (Lnode*)malloc(sizeof(Lnode));// ����һ���������
		if (p == NULL)
			return error;
		else
		{
			printf("�������%d��Ԫ��\n", i);
			scanf("%d", &p->data);
			q->next = p;//  ����β�巨
			q = p;
			p->next= NULL;
		}
	}
	return OK;
}
//void Print(Linklist* L)
//{
//	Lnode* p = (*L)->next;
//	while (p)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//	printf("\n");
//}
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
 //int Getdata(Linklist L,int i,int* e)// ����Ԫ�������Ԫ�ز�����
 //{
	// Lnode* p = L->next;//����һ���������
	// int j = 1;// ����һ��������
	// while (p && j < i)
	// {
	//	 p = p->next;
	//	 j++;
	// }
	// if (!p || j > i) //iֵ���Ϸ�
	//	 return error;
	//*e = p->data;
	// return OK;
 //}
 //int Locatedata(Linklist L, int m)
 //{
	// Lnode* p = L->next;
	// while (p)
	// {
	//	 if (p->data == m)
	//	 {
	//		 return OK;
	//		 //return p;  //Ҳ����ֱ�ӷ����ҵ�Ԫ�صĵ�ַ ��Ҫע�ⷵ��ֵ
	//	 }
	//	 else
	//		 p = p->next;
	// }
	// return error;
 //}
 //int ListInsert(Linklist* L, int m,int i)
 //{
	// //Lnode* p = (*L)->next;             ���� 
	// //int j = 1;//����һ��������         ����
	// Lnode* p = *L;
	// int j = 0;  //����һ��������    �����0��ʼ���� ��Ȼ���ܲ��ڵ�һ��Ԫ�ص�λ��
	// while (p&&(j<i-1))  //���ҵ���i-1λ��Ԫ��  
	// {
	//	 p = p->next;
	//	 j++;
	// }
	// if (!p || j > i - 1) return error;
	// Lnode* q = (Linklist)malloc(sizeof(Lnode)); //����һ���������
	// if (q == NULL)
	//	 return error;
	// else
	// q->data = m;
	// //��ʱ�����q����p�ĺ���
	// q->next = p->next;
	// p->next = q;
	// return OK;// ��������Ԫ�سɹ�
 //}
 ////int Listdelete(Linklist* L, int i)
 ////{
	//// Lnode* p = (*L)->next;
	//// int j = 1;
	//// while (p && j < i)// ���ҵ���i��Ԫ��
	//// {
	////	 p = p->next;                                   �����㷨
	////	 j++;                                   
	//// }                                    
	//// if (!p || j > i)                                   error
	////	 return error;
	//// else
	////	 free(p);
	//// return OK;
 ////}
 int Listdelete(Linklist* L, int i)
 {
	 Lnode* p = *L;
	 int j = 0;
	 while (p && (j < i - 1)) // ���ҵ���i-1λ��Ԫ��
	 {
		 p = p->next;
		 j++;
	 }
	 /*if (!(p->next) || (j > i - 1)) return error;*/
	 if (!(p) || (j > i - 1)) return error;
	 Lnode* q = p->next;  //����ʱ���q�������i���ڵ�
	 p->next = q->next;
	 free(q); // �ͷŵ�i�����
	 return OK;
 }
int main()
{
	Linklist L1;
	InitList(&L1);
	int n;
	printf("����������ĳ��ȣ�\n");
	scanf("%d", &n);
	CreatList(&L1, n);// ��������
	//Print(&L1);
	Print(L1);
	//int e = 0;
	//printf("������Ҫ�����Ԫ�ص�Ԫ����ţ�");
	//int i = 0;
	//scanf("%d",&i);
	//int ret=Getdata(L1,i,&e);// ��ͷ���ĵ�����L�и������i��ȡԪ�ص�ֵ����e����L�е�i������Ԫ�ص�ֵ
	//if (ret)
	//{
	//	printf("ȡֵ�ɹ���e=%d\n", e);
	//}
	//else
	//	printf("ȡֵʧ��");
	//int m = 0;
	//printf("������Ҫ���ҵ�ֵ��");
	//scanf("%d", &m);
	//int ret1=Locatedata(L1,m);
	//if (ret1)
	//	printf("�ҵ���");
	//else
	//    printf("û�ҵ�");
	/*printf("������Ҫ���ȥ��Ԫ�أ�");
	int Ins = 0;
	scanf("%d", &Ins);
	int Loa = 0;
	printf("������Ҫ����Ԫ�ص�λ�ã�");
	scanf("%d", &Loa);
	int ret2=ListInsert(&L1,Ins,Loa);
	if (ret2)
	{
		printf("����ɹ�\n");
		Print(L1);
	}
	else
		printf("����ʧ��");*/
	int w = 0;
	printf("������Ҫɾ��Ԫ�ص�λ�ã�");
	scanf("%d", &w);  //  ��Ԫ�ص�λ��ɾ��Ԫ��
	Listdelete(&L1, w);
	Print(L1);
	return 0;  
}
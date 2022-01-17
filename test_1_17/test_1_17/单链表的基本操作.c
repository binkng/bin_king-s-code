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
	Lnode* q=*L;// 定义一个操作指针
	for (int i = 1; i <= n; i++)
	{
		Lnode* p = (Lnode*)malloc(sizeof(Lnode));// 定义一个新生结点
		if (p == NULL)
			return error;
		else
		{
			printf("请输入第%d个元素\n", i);
			scanf("%d", &p->data);
			q->next = p;//  采用尾插法
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
 //int Getdata(Linklist L,int i,int* e)// 根据元素序号找元素并返回
 //{
	// Lnode* p = L->next;//定义一个操作结点
	// int j = 1;// 定义一个计数器
	// while (p && j < i)
	// {
	//	 p = p->next;
	//	 j++;
	// }
	// if (!p || j > i) //i值不合法
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
	//		 //return p;  //也可以直接返回找到元素的地址 倒要注意返回值
	//	 }
	//	 else
	//		 p = p->next;
	// }
	// return error;
 //}
 //int ListInsert(Linklist* L, int m,int i)
 //{
	// //Lnode* p = (*L)->next;             错误 
	// //int j = 1;//定义一个计数器         错误
	// Lnode* p = *L;
	// int j = 0;  //定义一个计数器    必须从0开始计数 不然不能插在第一个元素的位置
	// while (p&&(j<i-1))  //先找到第i-1位的元素  
	// {
	//	 p = p->next;
	//	 j++;
	// }
	// if (!p || j > i - 1) return error;
	// Lnode* q = (Linklist)malloc(sizeof(Lnode)); //定义一个新生结点
	// if (q == NULL)
	//	 return error;
	// else
	// q->data = m;
	// //此时将结点q插在p的后面
	// q->next = p->next;
	// p->next = q;
	// return OK;// 表明插入元素成功
 //}
 ////int Listdelete(Linklist* L, int i)
 ////{
	//// Lnode* p = (*L)->next;
	//// int j = 1;
	//// while (p && j < i)// 先找到第i个元素
	//// {
	////	 p = p->next;                                   错误算法
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
	 while (p && (j < i - 1)) // 先找到第i-1位的元素
	 {
		 p = p->next;
		 j++;
	 }
	 /*if (!(p->next) || (j > i - 1)) return error;*/
	 if (!(p) || (j > i - 1)) return error;
	 Lnode* q = p->next;  //用临时结点q来保存第i个节点
	 p->next = q->next;
	 free(q); // 释放第i个结点
	 return OK;
 }
int main()
{
	Linklist L1;
	InitList(&L1);
	int n;
	printf("请输入链表的长度：\n");
	scanf("%d", &n);
	CreatList(&L1, n);// 创建链表
	//Print(&L1);
	Print(L1);
	//int e = 0;
	//printf("请输入要求出的元素的元素序号：");
	//int i = 0;
	//scanf("%d",&i);
	//int ret=Getdata(L1,i,&e);// 在头结点的单链表L中根据序号i获取元素的值，用e返回L中第i个数据元素的值
	//if (ret)
	//{
	//	printf("取值成功：e=%d\n", e);
	//}
	//else
	//	printf("取值失败");
	//int m = 0;
	//printf("请输入要查找的值：");
	//scanf("%d", &m);
	//int ret1=Locatedata(L1,m);
	//if (ret1)
	//	printf("找到了");
	//else
	//    printf("没找到");
	/*printf("请输入要插进去的元素：");
	int Ins = 0;
	scanf("%d", &Ins);
	int Loa = 0;
	printf("请输入要插入元素的位置：");
	scanf("%d", &Loa);
	int ret2=ListInsert(&L1,Ins,Loa);
	if (ret2)
	{
		printf("插入成功\n");
		Print(L1);
	}
	else
		printf("插入失败");*/
	int w = 0;
	printf("请输入要删除元素的位置：");
	scanf("%d", &w);  //  暗元素的位置删除元素
	Listdelete(&L1, w);
	Print(L1);
	return 0;  
}
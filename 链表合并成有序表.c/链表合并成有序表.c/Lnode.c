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
//		Lnode* p = (Linklist)malloc(sizeof(Lnode));//  生成一个新生结点p
//		if (p == NULL)
//		{
//			return error;
//		}
//		else
//		printf("请输入第%d个元素\n", i);
//		scanf("%d", &p->data);// 输入数据到数据域  //  特别注意 不能忘记取地址
//		//p->next = q->next;// 头插法
//		//q->next = p;//   并且这两个顺序不可以调换
//		//  尾插法
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
//	Lnode* lc;// 定义3个指针来操作L1L2L3
//	la = l1->next;
//	lb = l2->next;
//	l3 = lc = l1;// 将合并后的链表L3用L1得头结点
//	while (la && lb)
//			{
//				if (la->data <= lb->data)// 将结点La接在L3后面
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
//			free(l2);//   将L2的头节点释放掉
//		
//}
//int main()
//{
//	//Linklist L1;
//	Lnode L1;
//	InitList(&L1);
//	printf("请输入第一条链表的长度：");
//	int n;
//	scanf("%d", &n);
//	CreatList(&L1,n);
//	Print(&L1);
//	Lnode L2;
//	InitList(&L2);
//	printf("请输入第二条链表的长度：");
//	int m;
//	scanf("%d", &m);
//	CreatList(&L2, m);
//	Print(&L2);
//	Lnode L3;
//	MergeList(&L1, &L2, &L3);
//	printf("合并后的链表为：\n");
//	Print(&L3);
//	return 0;
//}
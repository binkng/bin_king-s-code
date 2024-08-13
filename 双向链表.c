//#include<stdio.h>
//#include<stdlib.h>
//typedef struct node
//{
//	int n;
//	struct node* next;//指向后一个
//	struct node* Last;//指向前一个
//}List;
//void Addnode(List** pphead,List** ppend,int nval)// 添加节点 并且添加的时候自创结点
//{
//	List* ptemp = malloc(sizeof(List));//自创节点
//	ptemp->next = NULL;
//	ptemp->Last = NULL;
//	ptemp->n = nval;
//	//先判断链表是否为空
//	// 每次都在末尾添加
//	if (*pphead)// 不为空时
//	{
//		(*ppend)->next = ptemp;
//		ptemp->Last = (*ppend);
//		//*ppend = ptemp;
//	}
//	else// 为空时
//	{
//		*pphead = ptemp;
//		/**ppend = ptemp;*/
//	}
//	*ppend = ptemp;
//}
//int main()
//{
//	List* phead = NULL;
//	List* pend = NULL;
//	Addnode(&phead, &pend, 1);
//	Addnode(&phead, &pend, 2);
//	Addnode(&phead, &pend, 3);
//	Addnode(&phead, &pend, 4);
//	Addnode(&phead, &pend, 5);
//
//
//	return 0;
//}
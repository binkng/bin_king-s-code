//#include<stdio.h>
//#include<stdlib.h>
////Queue F IN F OUT
////Stack F in L out
//typedef struct node
//{
//	int nval;
//	struct node* next;
//}Queue;
//
//
////入队
//void Push(Queue** pphead, Queue** ppend,int n)
//{
//	Queue* ptemp = malloc(sizeof(Queue));
//	ptemp->next = NULL;
//	ptemp->nval = n;
//	//先判断队列是否为空
//	if (*pphead)
//	{
//		(*ppend)->next = ptemp;
//		*ppend = ptemp;  //新来的当队尾
//	}
//	else
//	{
//		*pphead = ptemp;
//		*ppend = ptemp;
//	}
//	*ppend = ptemp;
//}
////出队
//int Pop(Queue** pphead, Queue** ppend)
//{
//	Queue* pdel = NULL;
//	int ndel = -1;//初始化出队的值
//	//判断是否为空
//	if (*pphead)
//	{
//		pdel = *pphead;
//		ndel = (*pphead)->nval;
//		*pphead = (*pphead)->next;
//		free(pdel);
//		pdel = NULL;
//		if (*pphead == NULL)// 当最后都删除完成 需要把pend也赋为NULL
//		{
//			*ppend = NULL;
//		}
//	}
//	return ndel;
//}
//int main()
//{
//	Queue* phead=NULL;
//	Queue* pend = NULL;
//	Push(&phead, &pend, 1);
//	Push(&phead, &pend, 2);
//	Push(&phead, &pend, 3);
//	Push(&phead, &pend, 4);
//	Push(&phead, &pend, 5);
//	Push(&phead, &pend, 6);
//	Push(&phead, &pend, 7);
//
//
//	Pop(&phead, &pend);
//	Pop(&phead, &pend);
//	Pop(&phead, &pend);
//	Pop(&phead, &pend);
//
//	return 0;
//}
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
////���
//void Push(Queue** pphead, Queue** ppend,int n)
//{
//	Queue* ptemp = malloc(sizeof(Queue));
//	ptemp->next = NULL;
//	ptemp->nval = n;
//	//���ж϶����Ƿ�Ϊ��
//	if (*pphead)
//	{
//		(*ppend)->next = ptemp;
//		*ppend = ptemp;  //�����ĵ���β
//	}
//	else
//	{
//		*pphead = ptemp;
//		*ppend = ptemp;
//	}
//	*ppend = ptemp;
//}
////����
//int Pop(Queue** pphead, Queue** ppend)
//{
//	Queue* pdel = NULL;
//	int ndel = -1;//��ʼ�����ӵ�ֵ
//	//�ж��Ƿ�Ϊ��
//	if (*pphead)
//	{
//		pdel = *pphead;
//		ndel = (*pphead)->nval;
//		*pphead = (*pphead)->next;
//		free(pdel);
//		pdel = NULL;
//		if (*pphead == NULL)// �����ɾ����� ��Ҫ��pendҲ��ΪNULL
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
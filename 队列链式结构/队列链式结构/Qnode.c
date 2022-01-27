#include"Qnode.h"
int InitQueue(Qlink* Q)
{
	Q->rear = Q->front = (Qnodeptr)malloc(sizeof(Qnode));
	if ( Q->front == NULL)
		return error;
	Q->front->next = NULL;
	return OK;
}
int QueuePush(Qlink* Q)
{
	Qnodeptr q = (Qnodeptr)malloc(sizeof(Qnode));
	if (q == NULL)
		return error;
	scanf("%d", &q->data);
	Q->rear->next = q;
	q->next = NULL;
	Q->rear = q;
	return OK;
}
void Print(Qlink Q)
{
	Qnodeptr p = Q.front->next;
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}
int QueueOut(Qlink* Q,int* e)
{
	//  ���ж��Ƿ�Ϊ�ն���
	if (Q->front == Q->rear)
		return error;
	Qnodeptr p = Q->front->next;//  ����һ����ʱ����
	*e = p->data;//  ע��������Ƕ�ͷ����
	Q->front->next = p->next;
	if (Q->rear == p)//  ��ɾ�����һ��Ԫ�� rear ��frontָ��ͷ���
		Q->rear = Q->front;
	free(p);
	return OK;
}
int GetHead(Qlink Q, int* e)
{
	if (Q.rear == Q.front)
		return error;
	*e = Q.rear->data;
	return OK;
}
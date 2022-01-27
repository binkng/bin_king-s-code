#include"SqQueue.h"
int InitQueue(SqQueue* Q)
{
	Q->data = (int*)malloc(sizeof(int) * Maxsize);
	if (Q->data == NULL)
		return error;
	Q->front = Q->rear = 0;;
	return OK;
}
int QueuePush(SqQueue* Q,int e)
{
	if ((Q->rear + 1) % Maxsize == Q->front)// ���������ж�
		return error;
	Q->data[Q->rear] = e;
	Q->rear = (Q->rear + 1) % Maxsize;
	return OK;
}
void Print(SqQueue Q)
{
	for (int i = Q.front; i < Q.rear; i++)
	{
		printf("%d ", Q.data[i]);  
	}
	printf("\n");
	// ��ȷ����Ԫ���㷨
	int i = Q.front;
	while ((i + Q.front) != Q.rear)
	{
		printf("%d ", Q.data[i]);
		i = (i + 1) % Maxsize;
	}
	printf("\n");
}
int QueueOut(SqQueue* Q,int* e)
{
	//  �����ж϶����Ƿ�Ϊ��
	if (Q->front == Q->rear)
		return error;
	*e = Q->data[Q->front];
	Q->front = (Q->front + 1) % Maxsize;
	return OK;
}
int QueueLength(SqQueue Q)
{
	return (Q.rear - Q.front + Maxsize) % Maxsize;
}

int GetHead(SqQueue Q, int* e)
{
	// ����һ�����зǿյ��ж�
	if (Q.front == Q.rear)
		return error;
	*e = Q.data[Q.front];
	return OK;
}

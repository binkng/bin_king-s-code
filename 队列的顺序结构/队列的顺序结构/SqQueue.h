#include<stdio.h>
#include<stdlib.h>
#define error 0
#define OK 1
#define Maxsize 11
typedef struct SqQueue
{
	int* data;
	int rear;
	int front;
}SqQueue;
int InitQueue(SqQueue*);//  ��ʼ��
int QueuePush(SqQueue*,int);//  ���
void Print(SqQueue);//  ��ӡ����
int QueueOut(SqQueue*,int*);// ������
int QueueLength(SqQueue);//  ����г���
int GetHead(SqQueue, int*);//ȡ��ͷԪ��
#include<stdio.h>
#include<stdlib.h>
#define size 5
#define error 0
#define OK 1
typedef struct Qnode
{
	int data;
	struct Qnode* next;
}Qnode,*Qnodeptr;
typedef struct Qlink
{
	Qnodeptr front;
	Qnodeptr rear;
}Qlink;
int InitQueue(Qlink*);//  ��ʼ������
int QueuePush(Qlink*);//  ���
void Print(Qlink);//  ��ӡ����
int QueueOut(Qlink*,int*);//   ������
int GetHead(Qlink, int*);//  ȡ��βԪ��
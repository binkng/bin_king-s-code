#include<stdio.h>
#include<stdlib.h>
#define error 0
#define OK 1
typedef struct StackLnode
{
	int data;
	struct StackLnode* next;
}StackLnode,*Stacklist;
int Initstack(Stacklist*);//  ��ʼ��
int StackPush(Stacklist*, int);//  ��ջ����
void Print(Stacklist);//  ��ӡջ�е�Ԫ��
int StackOut(Stacklist*,int*);// ��ջ����
int GetTop(Stacklist);//   ȡջ��Ԫ��
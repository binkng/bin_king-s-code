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
int InitQueue(Qlink*);//  初始化队列
int QueuePush(Qlink*);//  入队
void Print(Qlink);//  打印操作
int QueueOut(Qlink*,int*);//   出队列
int GetHead(Qlink, int*);//  取队尾元素
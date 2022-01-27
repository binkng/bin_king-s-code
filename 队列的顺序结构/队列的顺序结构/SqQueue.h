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
int InitQueue(SqQueue*);//  初始化
int QueuePush(SqQueue*,int);//  入队
void Print(SqQueue);//  打印函数
int QueueOut(SqQueue*,int*);// 出队列
int QueueLength(SqQueue);//  求队列长度
int GetHead(SqQueue, int*);//取队头元素
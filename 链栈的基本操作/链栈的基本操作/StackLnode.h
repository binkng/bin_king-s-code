#include<stdio.h>
#include<stdlib.h>
#define error 0
#define OK 1
typedef struct StackLnode
{
	int data;
	struct StackLnode* next;
}StackLnode,*Stacklist;
int Initstack(Stacklist*);//  初始化
int StackPush(Stacklist*, int);//  入栈操作
void Print(Stacklist);//  打印栈中的元素
int StackOut(Stacklist*,int*);// 出栈操作
int GetTop(Stacklist);//   取栈顶元素
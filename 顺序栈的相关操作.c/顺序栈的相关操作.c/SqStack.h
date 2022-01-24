#include<stdio.h>
#include<stdlib.h>
#define Maxsize 10
#define error 0
#define OK 1
typedef struct SqStack
{
	int* top;
	int* base;
	int Stacksize;
}SqStack;
int Initstack(SqStack*);
int StackPush(SqStack*,int);
void Print(SqStack);
int StackOut(SqStack*, int*);
int JudgeStack(SqStack);// 判断栈是否为空
int Stacklength(SqStack);// 求栈的长度
int ClearStack(SqStack*);// 清空栈
//int ClearStack(SqStack);// 清空栈
int DestroyStack(SqStack*);//  销毁栈
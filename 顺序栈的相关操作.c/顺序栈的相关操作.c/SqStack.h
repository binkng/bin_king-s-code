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
int JudgeStack(SqStack);// �ж�ջ�Ƿ�Ϊ��
int Stacklength(SqStack);// ��ջ�ĳ���
int ClearStack(SqStack*);// ���ջ
//int ClearStack(SqStack);// ���ջ
int DestroyStack(SqStack*);//  ����ջ
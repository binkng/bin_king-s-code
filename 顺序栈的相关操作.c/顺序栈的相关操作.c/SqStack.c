#include"SqStack.h"
int Initstack(SqStack* S)
{
	S->base = (int*)malloc(sizeof(SqStack) * Maxsize);
	if (S->base == NULL)
		return error;
	S->top = S->base; // ����һ����ջ
	S->Stacksize = Maxsize;
	return OK;
}
int StackPush(SqStack* S,int n)
{
	//  �����ж��Ƿ�ջ��
	if ((S->top) - (S->base) == S->Stacksize)
		return error;
	for (int i = 0; i < n; i++)
	{
		printf("�������%d��Ԫ��",i + 1);
		scanf("%d", S->top++);
	}
	return OK;
}
void Print(SqStack S)
{
	while (S.top != S.base)
	{
		printf("%d ", *S.base);
		S.base++;
	}
	printf("\n");
}
int StackOut(SqStack* S, int* e)
{
	if (S->top == S->base)
		return error;
	//*e = *(S->top--);//  ����д�� ������ǰ�ü���
	*e = *--S->top;
	return OK;
}
int JudgeStack(SqStack S)
{
	if (S.top == S.base)
		return OK;
	return error;
}
int Stacklength(SqStack S)
{
	return (int)(S.top - S.base);
}
int ClearStack(SqStack* S)
{
	//  �����ж���ջ�Ƿ�Ϊ��
	//   if(S->base)
	if (S->top == S->base)
		return error;
	S->top = S->base;
	return OK;
}
//int ClearStack(SqStack S)
//{
//	//  �����ж���ջ�Ƿ�Ϊ��
//	//   if(S->base)
//	if (S.top == S.base)
//		return error;
//	S.top = S.base;
//	return OK;
//}
int DestroyStack(SqStack* S)
{
	//  �����ж���ջ�Ƿ�Ϊ��
	if (S->base)
	{
		free(S->base);
		S->Stacksize = 0;
		S->top = S->base = NULL;
	}
	return OK;
}
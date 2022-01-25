#include"StackLnode.h"
int Initstack(Stacklist* S)
{
	*S = NULL;
	return OK;
}
int StackPush(Stacklist* S, int n)
{
	for (int i = 0; i < n; i++)
	{
		StackLnode* p = (Stacklist)malloc(sizeof(StackLnode));
		if (p == NULL)
			return error;
		printf("������Ҫ��ջ�ĵ�%d��Ԫ�أ�",i+1);
		scanf("%d", &p->data);
		p->next = *S;
		*S = p;
	}
	return OK;
}

void Print(Stacklist S)
{
	while (S)
	{
		printf("%d ", S->data);
		S = S->next;
	}
	printf("\n");
}

int StackOut(Stacklist* S,int* e)
{
	//    ���ж�ջ�Ƿ�Ϊ��
	if (*S==NULL)
		return error;
	StackLnode* p=*S;//  p��ʱָ��ջ��Ԫ�ؿռ�  �Ա��ͷ�
	*e = (*S)->data;
	*S = (*S)->next;
	free(p);
	return OK;
}

int GetTop(Stacklist S)
{
	/*if (S == NULL)
		return error;
	else*/
	if(S!=NULL)  // ջ�ǿյ��ж�
	return S->data;
}
	
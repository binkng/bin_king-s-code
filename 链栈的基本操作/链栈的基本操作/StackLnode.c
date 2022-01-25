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
		printf("请输入要入栈的第%d个元素：",i+1);
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
	//    先判断栈是否为空
	if (*S==NULL)
		return error;
	StackLnode* p=*S;//  p临时指向栈顶元素空间  以便释放
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
	if(S!=NULL)  // 栈非空的判断
	return S->data;
}
	
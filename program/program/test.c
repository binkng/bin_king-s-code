#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define error 0
typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode, * Linklist;
int InitList(Linklist L)
{
	L = (Linklist)malloc(sizeof(Lnode));
	if (L == NULL)
	{
		return error;
	}
	else
		(L)->next = NULL;
	return OK;
}
int CreatList(Linklist L, int n)
{
	Linklist q = L;
	for (int i = 1; i <= n; ++i)
	{
		Lnode* p = (Linklist)malloc(sizeof(Lnode));//  生成一个新生结点p
		if (p == NULL)
		{
			return error;
		}
		else
			printf("请输入第%d个元素\n", i);
		scanf("%d", &p->data);// 输入数据到数据域  //  特别注意 不能忘记取地址
		p->next = q->next;// 头插法
		q->next = p;//   并且这两个顺序不可以调换

	}
	return OK;
}
void Print(Linklist L)
{
	Linklist p = L;
	p = (L)->next;
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

int main()
{
	Linklist L1=NULL;
	InitList(L1);
	printf("请输入第一条链表的长度：");
	int n;
	scanf("%d", &n);
	CreatList(L1, n);
	Print(L1);
	return 0;
}
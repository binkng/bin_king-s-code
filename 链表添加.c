#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int id;
	char* name;
	struct Node* next;

}List;
//把链表定义在堆区 便于添加内存
List* Getnode(int id,char* name)// 获取结点
{
	List* p = malloc(sizeof(List));
	p->id = id;
	p->name = name;
	p->next = NULL;
	return p;
}

void Addnode(List** phead, List** pend, List* p)
{


	// 先判断链表有没有结点
	if ( *phead != NULL)
	{
		(*pend)->next = p;// 有 尾结点指向新来的结点 尾指针指向新来的结点
		*pend = p;
	}
	else
	{
		*phead = p;// 没有 头结点指向新来的结点  尾结点指向新来的结点 
		*pend = p;
	}
	






}
int main()
{
	List* phead = NULL;
	List* pend = NULL;
	Addnode(&phead, &pend, Getnode(1, "aaa"));
	Addnode(&phead, &pend, Getnode(2, "bbb"));
	Addnode(&phead, &pend, Getnode(3, "ccc"));
	Addnode(&phead, &pend, Getnode(4, "ddd"));
	Addnode(&phead, &pend, Getnode(5, "eee"));
	Addnode(&phead, &pend, Getnode(6, "fff"));
	while (phead)
	{
		printf("%d %s\n", phead->id, phead->name);
		phead = phead->next;
	}
	return 0;
}
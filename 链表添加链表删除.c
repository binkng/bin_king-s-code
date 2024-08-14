#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
	int Val;
	struct node* next;
}List;
void Addnode(List** phead, List** pend,int n)
{
	List* p = malloc(sizeof(List));
	p->Val = n;
	p->next = NULL;
	if (*phead != NULL)//判断头结点是否为空
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

void Insertnode(List** phead, List** pend, List* pnode, int Val)
// 将新来的结点插入值为Val的前面
{
	// 头插入 先判断是不是头插入
	//先：新来的结点指向头结点
	//后：头结点指向新来的结点
	if ((*phead)->Val == Val)
	{
		//先：新来的结点指向头结点
		pnode->next = *phead;
		//后：头结点指向新来的结点
		*phead = pnode;
		return;
	}
	// 中间插入
	List* pmark = *phead;
	// 遍历链表（ 逐个遍历过去 可以防止为空指针的情况）   找到插入位置
	while (pmark->next != NULL)// 法一中间插入
	{
		if (pmark->next->Val == Val)
		{
			//新来的结点指向标记的下一个结点
			pnode->next = pmark->next;
			//标记的结点指向新来的结点
			pmark->next = pnode;
			return;// 退出
		}
		pmark = pmark->next;// pmark逐渐往后遍历
	}
	//while (pmark->next->Val != Val)// 法二中间插入
	//	//但假设链表中一定存在符合条件的结点，否则会导致错误。
	//	//如果需要确保在链表中找到匹配的结点，
	//	//可能需要在第二段代码中增加对pmark和pmark->next是否为NULL的检查，
	//	//以避免潜在的空指针错误。
	//{
	//	pmark = pmark->next;
	//}
	//pnode->next= pmark->next;
	//pmark->next = pnode;
	////法二中间插入改进版本
	//while (pmark != NULL && pmark->next != NULL && pmark->next->Val != Val)
	//      {
	//	pmark = pmark->next;
	//      }
	//
	//if (pmark != NULL && pmark->next != NULL)
	//{
	//	pnode->next = pmark->next;
	//	pmark->next = pnode;
	//}


	//尾插入
	(*pend)->next = pnode;
	*pend = pnode;
}
// 删除节点
void Deletenode(List** phead, List** pend, int val)
//删除值为val的结点
{
	//头删除
	List* pmark = NULL;// 定义一个删除标记
	if ((*phead)->Val == val)
	{
		//标记节点指向头结点
		pmark = *phead;
		*phead = pmark->next;
		free(pmark);
		pmark = NULL;//养成习惯将指针指向空
		return;//退出
	}
	// 中间删除
	pmark = *phead;
	List* pdel = NULL;//定义一个删除结点
	//while (pmark)//先从头遍历  会出错 没有考虑空指针的情况
	while (pmark->next != NULL)// 正确写法
	{
		// 找到删除节点的前一个结点
		if (pmark->next->Val == val)
		{
			pdel = pmark->next;
			pmark->next= pmark->next->next;
			free(pdel);
			pdel = NULL;
			if (pmark->next == NULL)// 判断删除的是不是最后一个节点
			{
				*pend = pmark;
			}
			return;
		}
		pmark=pmark->next;
	}
}

int main()
{
	List* phead = NULL;
	List* pend = NULL;
	Addnode(&phead, &pend, 1);
	Addnode(&phead, &pend, 2);
	Addnode(&phead, &pend, 3);
	Addnode(&phead, &pend, 4);
	Addnode(&phead, &pend, 5);
	Addnode(&phead, &pend, 6);
	/*while (phead)
	{
		printf("%d\n", phead->Val); //特别注意：打印的时候phead会移动
		phead = phead->next;
	}*/


	/*List* pnode = malloc(sizeof(List));
	pnode->Val =7;
	pnode->next = NULL;
	Insertnode(&phead, &pend, pnode, 12);*/
	Deletenode(&phead, &pend, 1);
	Deletenode(&phead, &pend, 3);
	Addnode(&phead, &pend, 10);
	Addnode(&phead, &pend, 4);
	Addnode(&phead, &pend, 5);
	Addnode(&phead, &pend, 6);
	while (phead)
	{
		printf("%d\n", phead->Val);
		phead = phead->next;
	}

	return 0;
}
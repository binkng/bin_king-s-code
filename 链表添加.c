#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int id;
	char* name;
	struct Node* next;

}List;
//���������ڶ��� ��������ڴ�
List* Getnode(int id,char* name)// ��ȡ���
{
	List* p = malloc(sizeof(List));
	p->id = id;
	p->name = name;
	p->next = NULL;
	return p;
}

void Addnode(List** phead, List** pend, List* p)
{


	// ���ж�������û�н��
	if ( *phead != NULL)
	{
		(*pend)->next = p;// �� β���ָ�������Ľ�� βָ��ָ�������Ľ��
		*pend = p;
	}
	else
	{
		*phead = p;// û�� ͷ���ָ�������Ľ��  β���ָ�������Ľ�� 
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
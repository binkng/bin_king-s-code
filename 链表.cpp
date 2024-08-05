#include<iostream>
using namespace std;
class List
{
	struct Node
	{
		int nVal;
		Node* next;
	};
private:
	Node* phead = NULL;
	Node* pend = NULL;
public:
	void AddNode(int n);//添加链表
	void DeleNode(int o);//把值为o的结点删除
	void InsertNode(int m,int p);//链表插入

};
void List::AddNode(int n)
{
	Node* ptemp = new Node;
	ptemp->nVal = n;
	ptemp->next = NULL;
	if (phead)
	{
		pend->next = ptemp;
	}else
	{
		phead = ptemp;
	}
	pend = ptemp;
}
void List::DeleNode(int o)
{
	/*int n = 0;*/
	Node* pDel = NULL;
	if (o == phead->nVal)
	{
		pDel = phead;
		phead = phead->next;
		delete pDel;
	}
	Node* ptemp = phead;
	while (ptemp->next)//遍历链表
	{
		if (ptemp->next->nVal == o)
		{
			pDel = ptemp->next;
			ptemp->next = ptemp->next->next;
			delete pDel;
			pDel = NULL;//别忘
			if (ptemp->next==NULL)//判断一下删除的是否为尾结点
			{
				pend = ptemp;
			}
			return;//删除完毕 直接退出函数
		}
		ptemp = ptemp->next;
	}
}
void List::InsertNode(int m,int p)
{//插入在值为m的前面
	Node* ptemp = new Node;
	ptemp->nVal = p;
	ptemp->next = NULL;
	//头插
	if (m == phead->nVal)
	{
		ptemp->next = phead;
		phead = ptemp;
		return;
	}
	Node* pmark =phead;
	while (pmark->next)//中间
	{
		if (pmark->next->nVal == m)
		{
			ptemp->next = pmark->next;
			pmark->next = ptemp;
			return;//提前退出
		}
		pmark = pmark->next;
	}
	//尾插入
	pend->next = ptemp;
	pend = ptemp;
}

int main()
{
	List L;
	L.AddNode(1);
	L.AddNode(2);
	L.AddNode(3);
	L.AddNode(4);
	L.AddNode(5);
	L.AddNode(6);

	/*L.DeleNode(1);
	L.DeleNode(3);*/
	//L.DeleNode(6);

	L.InsertNode(1, 9);
	L.InsertNode(3, 8); 
	L.InsertNode(6, 7);


	return 0;
}
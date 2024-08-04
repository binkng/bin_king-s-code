#include<iostream>
using namespace std;
class Queue
{
	struct Node
	{
		int nval;
		Node* pnext;
	};
private:
	Node* phead = NULL;//不能这样初始化 有的编译器通过不了
	Node* pend = NULL;//不能这样初始化 有的编译器通过不了
public:
		void Push(int n);
	    int Pop();
};
void Queue::Push(int n)
{
	Node* pnode=new Node;
	pnode->nval = n;
	pnode->pnext = NULL;
	if (phead==NULL)
	{
		phead = pnode;
		
	}
	else
	{
		pend->pnext = pnode;
	}
	pend = pnode;
}
int Queue::Pop() 
{
	int n ;
	if (phead != NULL)
	{
		Node* ptemp = phead;
		ptemp = phead;
		n = phead->nval;
		phead = phead->pnext;
		delete(ptemp);
		//还需要判断删除的是否为尾节点
		if (phead == NULL)
		{
			pend = NULL;
		}
	}
	else
	{
		return -1;
	}
	return n;
}
int main()
{
	Queue q;
	q.Push(1);
	q.Push(2);
	q.Push(3);
	q.Push(4);
	q.Push(5);
	q.Push(6);

	//std::cout << q.Pop() << " " << q.Pop() << " " << q.Pop() << std::endl;//输出为：3 2 1
	// 最好用下面方法输出 
	cout<< q.Pop() << endl;
	cout << q.Pop() << endl;
	cout << q.Pop() << endl;
	/*q.Pop();
	q.Pop();
	q.Pop();*/


	return 0;
}
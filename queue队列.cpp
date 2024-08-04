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
	Node* phead = NULL;//����������ʼ�� �еı�����ͨ������
	Node* pend = NULL;//����������ʼ�� �еı�����ͨ������
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
		//����Ҫ�ж�ɾ�����Ƿ�Ϊβ�ڵ�
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

	//std::cout << q.Pop() << " " << q.Pop() << " " << q.Pop() << std::endl;//���Ϊ��3 2 1
	// ��������淽����� 
	cout<< q.Pop() << endl;
	cout << q.Pop() << endl;
	cout << q.Pop() << endl;
	/*q.Pop();
	q.Pop();
	q.Pop();*/


	return 0;
}
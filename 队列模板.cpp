//#include<iostream>
//using namespace std;
//
//template<class Q>
//class Queue
//{
//	struct Node
//	{
//		Q nval;
//		Node* pnext;
//	};
//private:
//	//Node* phead = NULL;//����������ʼ�� �еı�����ͨ������
//	//Node* pend = NULL;//����������ʼ�� �еı�����ͨ������
//	Node* phead;
//	Node* pend;
//public:
//	Queue()
//	{
//		phead = NULL;
//		pend = NULL;
//	}
//	~Queue()
//	{
//		while (phead != NULL)
//		{
//			Node* pdel = phead;
//			phead = phead->pnext;
//			delete pdel;
//		}
//	}
//public:
//	void Push(Q n);
//	Q Pop();
//};
//
//template<class Q>
//void Queue<Q>::Push(Q n)
//{
//	Node* ptemp = new Node;
//	ptemp->nval = n;
//	ptemp->pnext = NULL;
//	if (phead == NULL)
//	{
//		phead = ptemp;
//	}
//	else
//	{
//	pend->pnext = ptemp;
//	}
//	pend = ptemp;
//}
//template<class Q>
//Q Queue<Q>::Pop()
//{
//	Q n;
//	if (phead != NULL)
//	{
//		Node* ptemp = phead;
//		ptemp = phead;
//		n = phead->nval;
//		phead = phead->pnext;
//		delete(ptemp);
//		//����Ҫ�ж�ɾ�����Ƿ�Ϊβ�ڵ�
//		if (phead == NULL)
//		{
//			pend = NULL;
//		}
//	}
//	else
//	{
//		return -1;
//	}
//	return n;
//}
//
//int main()
//{
//	Queue <int>q;
//	q.Push(1);
//	q.Push(2);
//	q.Push(3);
//	q.Push(4);
//	q.Push(5);
//
//	cout << q.Pop() << endl;
//	cout << q.Pop() << endl;
//	cout << q.Pop() << endl;
//	cout << q.Pop() << endl;
//
//	Queue <float>q1;
//	q1.Push(2.23);
//	q1.Push(1.456);
//	q1.Push(3.789);
//	q1.Push(4.567);
//	q1.Push(5.987);
//
//	cout << q1.Pop() << endl;
//	cout << q1.Pop() << endl;
//	cout << q1.Pop() << endl;
//	cout << q1.Pop() << endl;
//	cout << q1.Pop() << endl;
//
//
//	return 0;
//}
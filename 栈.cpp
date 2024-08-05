//#include<iostream>
//using namespace std;
//class Stack
//{
//	struct Node
//	{
//		int nVal;
//		Node* next;
//	};
//private:
//	Node* phead = NULL;
//public:
//	void Push(int n);//把值为n的结点入栈
//	int Pop();// 出栈
//};
//void Stack::Push(int n)
//{
//	Node* ptemp = new Node;
//	ptemp->nVal = n;
//	ptemp->next = NULL;
//	/*if (phead == NULL)
//	{
//		phead = ptemp;
//	}
//	else
//	{*/
//		ptemp->next = phead;
//		phead = ptemp;
//	/*}*/
//}
//int Stack::Pop()
//{
//	int n = -1;//为空时返回-1
//	if (phead != NULL)
//	{
//		Node* pDel = NULL;
//		pDel = phead;
//		n = phead->nVal;
//		phead = phead->next;
//		delete pDel;
	//pDel = NULL;
//	}
//	else
//	{
//		return n;
//	}
//	return n;
//}
//int main()
//{
//	Stack s;
//	s.Push(1);
//	s.Push(2);
//	s.Push(3);
//	s.Push(4);
//
//	cout << s.Pop() << endl;
//	cout << s.Pop() << endl;
//	cout << s.Pop() << endl;
//	cout << s.Pop() << endl;
//	cout << s.Pop() << endl;
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//
//typedef struct Node
//{
//	struct Node* pnext = NULL;
//	int nval;
//}List;
//
//void AddNode(List*& pphead,List*& ppend,int n)
//{
//	List* pnode = new List;
//	pnode->nval = n;
//	pnode->pnext = NULL;
//	if (pphead == NULL)
//	{
//		pphead = pnode;
//	}
//	else
//	{
//		ppend->pnext = pnode;
//	}
//	ppend = pnode;
//}
//class Iterator
//{
//private:
//	List* p;
//public:
//	Iterator(List* ppphead)
//	{
//		p = ppphead;
//	}
//public:
//	bool operator!=(List* p)
//	{
//		if (this->p != p)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	int operator*()
//	{
//		return p->nval;
//	}
//
//	List* operator++(int)//��++
//	{
//		List* ptemp = p;
//		p = p->pnext;
//		//����֮ǰ����ĵ�ǰ�ڵ��ָ�� ptemp��
//		//���Ǻ��õ�������������ԣ������ص���ǰ��ԭֵ��
//		return ptemp;
//	}
//};
//
//
//int main()
//{
//	List* phead = NULL;
//	List* pend = NULL;
//
//	AddNode(phead, pend, 1);
//	AddNode(phead, pend, 2);
//	AddNode(phead, pend, 3);
//	AddNode(phead, pend, 4);
//	AddNode(phead, pend, 5);
//
//
//
//	Iterator ite = phead;
//
//	while (ite != NULL)//���ز�����
//	{
//		cout << *ite << endl;
//		ite++;
//	}
//
//	/*while (phead)
//	{
//		cout << phead->nval << endl;
//		phead = phead->pnext;
//	}*/
//
//	return 0;
//}
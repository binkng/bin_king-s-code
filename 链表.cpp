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
	void AddNode(int n);//�������
	void DeleNode(int o);//��ֵΪo�Ľ��ɾ��
	void InsertNode(int m,int p);//�������

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
	while (ptemp->next)//��������
	{
		if (ptemp->next->nVal == o)
		{
			pDel = ptemp->next;
			ptemp->next = ptemp->next->next;
			delete pDel;
			pDel = NULL;//����
			if (ptemp->next==NULL)//�ж�һ��ɾ�����Ƿ�Ϊβ���
			{
				pend = ptemp;
			}
			return;//ɾ����� ֱ���˳�����
		}
		ptemp = ptemp->next;
	}
}
void List::InsertNode(int m,int p)
{//������ֵΪm��ǰ��
	Node* ptemp = new Node;
	ptemp->nVal = p;
	ptemp->next = NULL;
	//ͷ��
	if (m == phead->nVal)
	{
		ptemp->next = phead;
		phead = ptemp;
		return;
	}
	Node* pmark =phead;
	while (pmark->next)//�м�
	{
		if (pmark->next->nVal == m)
		{
			ptemp->next = pmark->next;
			pmark->next = ptemp;
			return;//��ǰ�˳�
		}
		pmark = pmark->next;
	}
	//β����
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
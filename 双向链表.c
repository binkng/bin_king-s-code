//#include<stdio.h>
//#include<stdlib.h>
//typedef struct node
//{
//	int n;
//	struct node* next;//ָ���һ��
//	struct node* Last;//ָ��ǰһ��
//}List;
//void Addnode(List** pphead,List** ppend,int nval)// ��ӽڵ� ������ӵ�ʱ���Դ����
//{
//	List* ptemp = malloc(sizeof(List));//�Դ��ڵ�
//	ptemp->next = NULL;
//	ptemp->Last = NULL;
//	ptemp->n = nval;
//	//���ж������Ƿ�Ϊ��
//	// ÿ�ζ���ĩβ���
//	if (*pphead)// ��Ϊ��ʱ
//	{
//		(*ppend)->next = ptemp;
//		ptemp->Last = (*ppend);
//		//*ppend = ptemp;
//	}
//	else// Ϊ��ʱ
//	{
//		*pphead = ptemp;
//		/**ppend = ptemp;*/
//	}
//	*ppend = ptemp;
//}
//int main()
//{
//	List* phead = NULL;
//	List* pend = NULL;
//	Addnode(&phead, &pend, 1);
//	Addnode(&phead, &pend, 2);
//	Addnode(&phead, &pend, 3);
//	Addnode(&phead, &pend, 4);
//	Addnode(&phead, &pend, 5);
//
//
//	return 0;
//}
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
	if (*phead != NULL)//�ж�ͷ����Ƿ�Ϊ��
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

void Insertnode(List** phead, List** pend, List* pnode, int Val)
// �������Ľ�����ֵΪVal��ǰ��
{
	// ͷ���� ���ж��ǲ���ͷ����
	//�ȣ������Ľ��ָ��ͷ���
	//��ͷ���ָ�������Ľ��
	if ((*phead)->Val == Val)
	{
		//�ȣ������Ľ��ָ��ͷ���
		pnode->next = *phead;
		//��ͷ���ָ�������Ľ��
		*phead = pnode;
		return;
	}
	// �м����
	List* pmark = *phead;
	// �������� ���������ȥ ���Է�ֹΪ��ָ��������   �ҵ�����λ��
	while (pmark->next != NULL)// ��һ�м����
	{
		if (pmark->next->Val == Val)
		{
			//�����Ľ��ָ���ǵ���һ�����
			pnode->next = pmark->next;
			//��ǵĽ��ָ�������Ľ��
			pmark->next = pnode;
			return;// �˳�
		}
		pmark = pmark->next;// pmark���������
	}
	//while (pmark->next->Val != Val)// �����м����
	//	//������������һ�����ڷ��������Ľ�㣬����ᵼ�´���
	//	//�����Ҫȷ�����������ҵ�ƥ��Ľ�㣬
	//	//������Ҫ�ڵڶ��δ��������Ӷ�pmark��pmark->next�Ƿ�ΪNULL�ļ�飬
	//	//�Ա���Ǳ�ڵĿ�ָ�����
	//{
	//	pmark = pmark->next;
	//}
	//pnode->next= pmark->next;
	//pmark->next = pnode;
	////�����м����Ľ��汾
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


	//β����
	(*pend)->next = pnode;
	*pend = pnode;
}
// ɾ���ڵ�
void Deletenode(List** phead, List** pend, int val)
//ɾ��ֵΪval�Ľ��
{
	//ͷɾ��
	List* pmark = NULL;// ����һ��ɾ�����
	if ((*phead)->Val == val)
	{
		//��ǽڵ�ָ��ͷ���
		pmark = *phead;
		*phead = pmark->next;
		free(pmark);
		pmark = NULL;//����ϰ�߽�ָ��ָ���
		return;//�˳�
	}
	// �м�ɾ��
	pmark = *phead;
	List* pdel = NULL;//����һ��ɾ�����
	//while (pmark)//�ȴ�ͷ����  ����� û�п��ǿ�ָ������
	while (pmark->next != NULL)// ��ȷд��
	{
		// �ҵ�ɾ���ڵ��ǰһ�����
		if (pmark->next->Val == val)
		{
			pdel = pmark->next;
			pmark->next= pmark->next->next;
			free(pdel);
			pdel = NULL;
			if (pmark->next == NULL)// �ж�ɾ�����ǲ������һ���ڵ�
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
		printf("%d\n", phead->Val); //�ر�ע�⣺��ӡ��ʱ��phead���ƶ�
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
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct Node
//{
//	int nVal;
//	struct Node* pnext;
//}Stack;
//void Push(Stack** ptop, int n)//��ջ
//{
//	Stack* ptemp = malloc(sizeof(Stack));
//	ptemp->nVal = n;
//	ptemp->pnext = NULL;
//	//���ж�ջ�Ƿ�Ϊ��
//
//	ptemp->pnext = *ptop;
//	*ptop = ptemp;//�����Ż� �滻���� if else �ж�
//
//	/*if (*ptop)
//	{
//		ptemp->pnext = *ptop;
//		*ptop = ptemp;
//	}
//	else
//	{
//		*ptop = ptemp;
//	}*/
//}
//int Pop(Stack** pptop)
//{
//	int n = -1;//��ʼ������ֵ
//	//Ҳ�����ж�ջ�Ƿ�Ϊ��
//	if (*pptop)
//	{
//		Stack* pDel = NULL;
//		pDel = *pptop;
//		n = pDel->nVal;
//		////�ر�ע�⣺���ͷŵ�ǰջ��Ԫ�� pDel ֮��
//		//��������ͼ���� *pptop ������ջ��ָ�롣
//		//	��ᵼ���ڴ���ʴ���
//		//	��Ϊ *pptop ��ʱ�Ѿ����ͷ��ˣ������Ѿ��ͷŵ��ڴ���δ������Ϊ��
//
//		//������Ҫ�ȸ���ָ��  ���ͷ�free
//			*pptop = (*pptop)->pnext;
//		free(pDel);
//		pDel = NULL;
//	}
//	return n;
//}
//int main()
//{
//	Stack* ptop = NULL;
//	Push(&ptop, 1);
//	Push(&ptop, 2);
//	Push(&ptop, 3);
//	Push(&ptop, 4);
//	Push(&ptop, 5);
//	Push(&ptop, 6);
//
//
//	Pop(&ptop);
//	Pop(&ptop);
//	Pop(&ptop);
//	//��ջ���������� �ȶ�ջ����ֵ
//	/* ����������������ִ��
//	printf("%c  %c", getchar(), getchar());*/
//
//	return 0;
//}
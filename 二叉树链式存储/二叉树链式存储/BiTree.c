#include"BiTree.h"
int InitTree(BiTree* T)
{
	*T = (BiTree)malloc(sizeof(BiNode));
	if (*T == NULL)
		return error;
	else
		(*T)->Lchild = NULL;
	(*T)->Rchild = NULL;
	//(*T)->data = 0;
	return OK;
}
void CreatTree(BiTree* T)
{
	// ����������ķ����������������ֵ��һ���ַ���������������
	printf("������һ���ַ���\n");
	char ch;
	scanf("%c", &ch);
	if (ch == '*')
		T = NULL;
	else
	{
		*T= (BiTree)malloc(sizeof(BiNode));
		/*if (*T == NULL)
			return error;*/
		//else
		(*T)->data = ch;
		CreatTree((*T)->Lchild);
		CreatTree((*T)->Rchild);
	}
}
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
	// 按先序遍历的方法输入二叉树结点的值（一个字符），创建二叉树
	printf("请输入一个字符：\n");
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